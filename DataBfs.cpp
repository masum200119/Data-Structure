#include<bits/stdc++.h>
using namespace std;
vector<int>v(10000);
int dis[1000];
int vis[1000];
void BFS(int node)
{
    queue<int>q;
    q.push(node);
    vis[node]=1;
    dis[node]=0;
    while(!q.empty())
    {
        int a=q.front();
        q.pop();
        for(auto child: v[a])
        {
            if(vis[child]==0)
            {
                dis[child]=dis[a]+1;
                vis[child]=1;
                q.push(child);
            }
        }
    }
}
int main()
{
    int n,e,x,y;
    cin>>n>>e;
    while(e--)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    BFS(1);
    for(int i=1; i<=n; i++)
    {
         BFS(i);

        cout<<i<<" ="<<dis[i]<<" ";
    }

}
