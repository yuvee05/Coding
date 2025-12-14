// Topological sort using bfs
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution
{
public:
    
    vector<int> topoSort(int V, vector<int> adj[])
    {
        int indeg[V]={0};
        vector<int> result;
        queue<int> q;
        for(int i=0;i<V;i++)
        {
            for(auto it: adj[i])
            {
                indeg[it]++;
            }
        }
        for(int i=0;i<V;i++)
        {
            if(indeg[i]==0)
                q.push(i);
                
        }
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            result.push_back(node);
            for(auto it : adj[node])
            {
                indeg[it]--;
                if(indeg[it]==0)
                    q.push(it);    
            }
        }
        return result;
    }
    
};
