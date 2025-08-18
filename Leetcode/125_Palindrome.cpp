#include <bits/stdc++.h>
#include <string.h>
using namespace std;
class Solution {
    bool pal(string &s,int i,int j)
    {
        if(i>=j)
            return true;
        else if(!isalnum(s[i]))
            return pal(s,i+1,j);
        else if(!isalnum(s[j]))
            return pal(s,i,j-1);
        else if(tolower(s[i])!=tolower(s[j]))
            return false;
        return pal(s,i+1,j-1);
    }
public:
    bool isPalindrome(string s) {
        return pal(s,0,s.length()-1);
    }
};