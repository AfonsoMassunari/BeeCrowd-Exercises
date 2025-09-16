#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

bool isLeftAssociative(char op) {
    return op != '^';
}

string infixToPostfix(const string &expression) {
    stack<char> ops;
    string output;

    for (char token : expression) {
        if (isalnum(token)) {
            output += token;
        } else if (token == '(') {
            ops.push(token);
        } else if (token == ')') {
            while (!ops.empty() && ops.top() != '(') {
                output += ops.top();
                ops.pop();
            }
            if (!ops.empty()) ops.pop();
        } else {
            while (!ops.empty() && precedence(ops.top()) >= precedence(token) &&
                   (isLeftAssociative(token) || precedence(ops.top()) > precedence(token))) {
                output += ops.top();
                ops.pop();
            }
            ops.push(token); 
        }
    }

    while (!ops.empty()) {
        output += ops.top();
        ops.pop();
    }

    return output;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    while (n--) {
        string infix;
        getline(cin, infix);
        cout << infixToPostfix(infix) << endl;
    }

    return 0;
}
