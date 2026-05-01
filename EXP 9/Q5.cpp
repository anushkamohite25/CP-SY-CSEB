#include <iostream>
#include <stack>
using namespace std;
int prec(char ch) {
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    return 0;
}
string infixToPostfix(string s) {
    stack<char> st;
    string result = "";

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (isalnum(ch)) {
            result += ch;
        }
        else if (ch == '(') {
            st.push(ch);
        }
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop(); // remove '('
        }
        else {
            while (!st.empty() && prec(st.top()) >= prec(ch)) {
                result += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    return result;
}
int main() {
    string exp;
    cout << "Enter infix expression: ";
    cin >> exp;
    cout << "Postfix: " << infixToPostfix(exp);
    return 0;
}
