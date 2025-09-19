#include <iostream>
#include <string>
#include <stack>
using namespace std;
class prefix
{
    int priority(char ch)
    {
        if(ch=='^')
            return 3;
        else if(ch=='*' || ch=='/')
            return 2;
        else if(ch=='+' || ch=='-')
            return 1;
        else
            return -1;
    }
    string rev(string str)
    {
        for (int i = 0; i < str.length() / 2; i++)
        {
            char temp = str[i];
            str[i] = str[str.length() - 1 - i];
            str[str.length() - i - 1] = temp;
        }
        return str;
    }

public:
    string pre(string str)
    {
        stack<char> st;
        string ans = "";
        // cout << str << endl;
        str=rev(str);
        // cout << str << endl;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='(')
                str[i]=')';
            else if(str[i]==')')
                str[i]='(';
            if(str[i]==' ')
                continue;
            else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
                ans = ans + str[i];
            else if (str[i] == '(')
                st.push(str[i]);
            else if (str[i] == ')')
            {
                while (st.top() != '(')
                {
                    ans = ans + st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                if(st.empty() || priority(str[i])>=priority(st.top()))
                    st.push(str[i]);
                else 
                {
                    while(!st.empty() && priority(st.top())>priority(str[i]))
                    {
                        ans = ans + st.top();
                        st.pop();
                    }
                    st.push(str[i]);
                }
            }
        }
        while(!st.empty())
        {
            ans = ans + st.top();
            st.pop();
        }
        return rev(ans);
        
    }
};
int main()
{
    prefix x;
    cout << "Enter the Infix Expression" << endl;
    string str;
    getline(cin, str);
    cout << "The Prefix Expression: "<< x.pre(str);
    return 0;
}