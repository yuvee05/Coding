#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void bfs(vector<int> a1[], int n, bool vs[],int sn)
{
    queue<int> q;
    int node;
    q.push(sn);
    vs[sn]=true;
    while(!q.empty())
    {
        node = q.front();
        q.pop();
        for(auto it : a1[node])
        {
            if(!vs[it])
            {
                q.push(it);
                vs[it]=true;
            }
        }
    }
    return;
}
int main()
{
    int n,nodes;
    cout << "Enter the no. of nodes" << endl;
    cin >> nodes;
    cout << "Enter the no. of edges" << endl;
    cin  >> n;
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        cout << "Enter edge " << i+1 << ": " << endl;
        cin >> arr[i][0] >> arr[i][1];
    }
    vector<int> a1[nodes+1];
    for(int i=1;i<=nodes;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j][0]==i)
                a1[i].push_back(arr[j][1]);
            if(arr[j][1]==i)
                a1[i].push_back(arr[j][0]);
        }
    }
    bool vs[nodes+1]={false};
    int count=0;
    for(int i=1;i<=nodes;i++)
    {
        if(!vs[i])
        {
            count++;
            bfs(a1,nodes,vs,i);
        }
    }
    cout << "No. of components: " << count;
    return 0;
}