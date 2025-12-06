#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution
{
public:
    void dfs(int node, vector<int>& vs, stack<int> &st, vector<int> adj[])
    {
        vs[node]=1;
        for(auto it : adj[node])
        {
            if(!vs[it])
                dfs(it,vs,st,adj);
        }
        st.push(node);
    }
    vector<int> topoSort(int V, vector<int> adj[])
    {
        stack<int> st;
        vector<int> vs(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vs[i])
                dfs(i,vs,st,adj);
        }
        vector<int> result;
        while(!st.empty())
        {
            result.push_back(st.top());
            st.pop();
        }
        return result;
    }
    
};
