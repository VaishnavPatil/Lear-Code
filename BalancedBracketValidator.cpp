#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) 
{
    stack<char> st;
    for (char ch : s) 
    {
        if (ch == '(' || ch == '{' || ch == '[') 
        {
            st.push(ch);
        } 
        else 
        {
            if (st.empty())
            {
                return false;
            }
            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    return st.empty();
}

int main() 
{
    string input;
    cin >> input;

    if (isValid(input)) 
    {
        cout << "True\n";
    } 
    else 
    {
        cout << "False\n";
    }

    return 0;
}
