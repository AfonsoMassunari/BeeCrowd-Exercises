#include <bits/stdc++.h>
using namespace std;

map<char, int> precedence = {
    {'^', 6}, {'*', 5}, {'/', 5}, {'+', 4}, {'-', 4},
    {'>', 3}, {'<', 3}, {'=', 3}, {'#', 3},
    {'.', 2}, {'|', 1}
};

bool isOperator(char ch) {
    return precedence.count(ch) > 0;
}

bool isOperand(char ch) {
    return isalnum(ch);
}

bool isValidCharacter(char ch) {
    return isOperator(ch) || isOperand(ch) || ch == '(' || ch == ')';
}

bool hasLexicalError(const string &expr) {
    for (char ch : expr) {
        if (!isValidCharacter(ch))
            return true;
    }
    return false;
}

bool hasSyntaxError(const string &expr) {
    stack<char> brackets;
    bool expectOperand = true;
    
    for (size_t i = 0; i < expr.size(); i++) {
        char ch = expr[i];

        if (ch == '(') {
            brackets.push(ch);
            expectOperand = true;
        } else if (ch == ')') {
            if (brackets.empty()) return true;
            brackets.pop();
            expectOperand = false;
        } else if (isOperator(ch)) {
            if (expectOperand) return true;
            if (i + 1 < expr.size() && isOperator(expr[i + 1])) return true;
            expectOperand = true;
        } else if (isOperand(ch)) {
            if (!expectOperand) return true;
            expectOperand = false;
        }
    }

    return !brackets.empty() || expectOperand;
}

string infixToPostfix(const string &expr) {
    stack<char> ops;
    string output;

    for (char token : expr) {
        if (isOperand(token)) {
            output += token;
        } else if (token == '(') {
            ops.push(token);
        } else if (token == ')') {
            while (!ops.empty() && ops.top() != '(') {
                output += ops.top();
                ops.pop();
            }
            ops.pop();
        } else if (isOperator(token)) {
            while (!ops.empty() && ops.top() != '(' &&
                   precedence[ops.top()] >= precedence[token]) {
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
    string expression;
    while (getline(cin, expression)) {
        if (hasLexicalError(expression)) {
            cout << "Lexical Error!" << endl;
        } else if (hasSyntaxError(expression)) {
            cout << "Syntax Error!" << endl;
        } else {
            cout << infixToPostfix(expression) << endl;
        }
    }

    return 0;
}
