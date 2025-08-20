#include <bits/stdc++.h>
using namespace std;

#define add push_back
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int ll;
typedef vector<int> BigInt;
const int base = 1000 * 1000 * 1000;

void print(BigInt &num) {
    printf("%d", num.empty() ? 0 : num.back());
    for (int i = (int)num.size() - 2; i >= 0; --i) {
        printf("%09d", num[i]);
    }
}
void fix(BigInt &num) {
    while (num.size() > 1u && num.back() == 0)
        num.pop_back();
}

bool compare(BigInt num1, BigInt num2) {
    fix(num1);
    fix(num2);
    if (num1.size() != num2.size()) return num1.size() < num2.size();
    for (int i = (int)num1.size() - 1; i >= 0; i--) {
        if (num1[i] != num2[i]) return num1[i] < num2[i];
    }
    return false;
}
void strToBigInt(string str, BigInt &num) {
    char* s = &str[0];
    num.clear();
    for (int i = (int)strlen(s); i > 0; i -= 9) {
        s[i] = 0;
        num.add(atoi(i >= 9 ? s + i - 9 : s));
    }
    fix(num);
}
void addBigInts(BigInt &num1, BigInt &num2, BigInt &result) {
    int carry = 0, n = max(num1.size(), num2.size());
    result.resize(n);
    for (int i = 0, n1, n2; i < n; i++) {
        n1 = i < (int)num1.size() ? num1[i] : 0;
        n2 = i < (int)num2.size() ? num2[i] : 0;
        result[i] = carry + n1 + n2;
        carry = result[i] / base;
        result[i] %= base;
    }
    if (carry > 0) result.add(carry);
    fix(result);
}

int main() {
    while (true) {
        string start, end;

        cin >> start >> end;

        if (start == "0" && end == "0") break;

        BigInt first, second, lower, upper;

        ll count = 0;

        strToBigInt(start, lower);
        strToBigInt(end, upper);
        strToBigInt("1", first);
        strToBigInt("2", second);

        if (!compare(first, lower) && !compare(upper, first))
            count++;
        if (!compare(second, lower) && !compare(upper, second))
            count++;

        while (!compare(upper, second)) {
            BigInt temp = second;
            addBigInts(first, second, second);
            first = temp;
            if (!compare(second, lower) && !compare(upper, second))
                count++;
        }
        
        cout << count << '\n';
    }

    return 0;
}
