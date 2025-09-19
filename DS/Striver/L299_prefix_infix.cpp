#include <iostream>
#include <string>
#include <stack>
using namespace std;
class infix
{
    public:
        string inf(string s)
        {
            stack<string> ans;
            for(int i=s.length()-1;i>=0;i--)
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
                    string c="(" + t1 + s[i] + t2 + ")";
                    ans.push(c);
                }
            }
            return ans.top();
        }
};
int main()
{
    cout << "Enter the prefix expression" << endl;
    string s;
    getline(cin,s);
    infix x;
    cout << "The Infix Expression: " << x.inf(s);
    return 0;
}