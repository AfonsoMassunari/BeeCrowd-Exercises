#include <iostream>
#include <vector>
using namespace std;

// Segment tree node to store count of Man, Elephant, and Mouse
struct Node {
    int man, elephant, mouse;
    Node(int m = 0, int e = 0, int mo = 0) : man(m), elephant(e), mouse(mo) {}
};

// Combine two nodes
Node combine(const Node& a, const Node& b) {
    return Node(a.man + b.man, a.elephant + b.elephant, a.mouse + b.mouse);
}

// Rotate the symbols (cyclic shift)
Node rotate(const Node& n, int times) {
    Node res = n;
    for (int i = 0; i < times % 3; i++) {
        int temp = res.mouse;
        res.mouse = res.elephant;
        res.elephant = res.man;
        res.man = temp;
    }
    return res;
}

class SegmentTree {
private:
    vector<Node> tree;
    vector<int> lazy;
    int n;

    void propagate(int node, int start, int end) {
        if (lazy[node] != 0) {
            tree[node] = rotate(tree[node], lazy[node]);
            if (start != end) {
                lazy[node * 2 + 1] += lazy[node];
                lazy[node * 2 + 2] += lazy[node];
            }
            lazy[node] = 0;
        }
    }

    void build(int node, int start, int end) {
        if (start == end) {
            tree[node] = Node(1, 0, 0); // All start as 'Man'
        } else {
            int mid = (start + end) / 2;
            build(node * 2 + 1, start, mid);
            build(node * 2 + 2, mid + 1, end);
            tree[node] = combine(tree[node * 2 + 1], tree[node * 2 + 2]);
        }
    }

    void updateRange(int node, int start, int end, int l, int r) {
        propagate(node, start, end);
        if (start > end || start > r || end < l) return;
        if (start >= l && end <= r) {
            lazy[node]++;
            propagate(node, start, end);
        } else {
            int mid = (start + end) / 2;
            updateRange(node * 2 + 1, start, mid, l, r);
            updateRange(node * 2 + 2, mid + 1, end, l, r);
            tree[node] = combine(tree[node * 2 + 1], tree[node * 2 + 2]);
        }
    }

    Node queryRange(int node, int start, int end, int l, int r) {
        propagate(node, start, end);
        if (start > end || start > r || end < l) return Node(0, 0, 0);
        if (start >= l && end <= r) return tree[node];
        int mid = (start + end) / 2;
        Node left = queryRange(node * 2 + 1, start, mid, l, r);
        Node right = queryRange(node * 2 + 2, mid + 1, end, l, r);
        return combine(left, right);
    }

public:
    SegmentTree(int size) : n(size) {
        tree.resize(4 * n);
        lazy.resize(4 * n, 0);
        build(0, 0, n - 1);
    }

    void update(int l, int r) {
        updateRange(0, 0, n - 1, l, r);
    }

    Node query(int l, int r) {
        return queryRange(0, 0, n - 1, l, r);
    }
};

int main() {
    int N, M;
    while (cin >> N >> M) {
        SegmentTree segTree(N);
        for (int i = 0; i < M; ++i) {
            char op;
            int A, B;
            cin >> op >> A >> B;
            A--; B--;
            if (op == 'M') {
                segTree.update(A, B);
            } else if (op == 'C') {
                Node result = segTree.query(A, B);
                cout << result.man << " " << result.elephant << " " << result.mouse << "\n";
            }
        }
        cout << "\n";
    }
    return 0;
}
