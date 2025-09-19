#include <iostream>
#include <string>
#include <stack>
using namespace std;
class post_pre
{
    public:
    string func(string s)
    {
        stack<string> ans;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
                continue;
            else if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
                ans.push(string(1,s[i]));
            else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^')
            {
                string t1=ans.top();
                ans.pop();
                string t2=ans.top();
                ans.pop();
                string c = string(1,s[i]) + t2 + t1;
                ans.push(c);
            }
        }
        return ans.top();
    }
};
int main()
{
    cout << "Enter the postfix expression" << endl;
    string s;
    getline(cin,s);
    post_pre x;
    cout << "The Prefix Expression: " << x.func(s);
    return 0;
}