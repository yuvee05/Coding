#include <iostream>
using namespace std;
#include <vector>
#include <stack>
#include <limits.h>
class Solution
{
public:
    void topoSort(int node, vector<pair<int,int>> adj[], int vis[], stack<int> &st)
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            int v = it.first;
            if(!vis[v])
            {
                topoSort(v,adj,vis,st);
            }
        }
        st.push(node);
    }
    vector<int> shortestPath(int N, int M, vector<vector<int>> &edges)
    {
        vector<pair<int,int>> adj[N];
        for(auto it:edges)
        {
            adj[it[0]].push_back({it[1],it[2]});
        }
        int vis[N]={0};
        stack<int> st;
        for(int i=0;i<N;i++)
        {
            if(!vis[i])
                topoSort(i,adj,vis,st);
        }

        vector<int> dist(N);
        for(int i=0;i<N;i++)
        {
            dist[i]=INT_MAX;
        }
        dist[0]=0;
        while(!st.empty())
        {
            int node = st.top();
            st.pop();

            for(auto it : adj[node])
            {
                int v = it.first;
                int wt = it.second;

                if(dist[node] + wt < dist[v])
                {
                    dist[v]=dist[node]+wt;
                }
            }
        }
        return dist;
    }
};
