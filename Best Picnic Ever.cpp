//1
//
//2 4 4
//
//2
//
//3
//
//1 2
//
//1 4
//
//2 3
//
//3 4
#include<bits/stdc++.h>

using namespace std;

vector<long long int>v[10010];
long long int visited[10010], pepol[10010],maxim;

void bfs(long long int node)
{
    queue<long long int>q;
    q.push(node);
    long long int i,fro;
    memset(visited,0,sizeof(visited));

    visited[node] = 1;

    while(!q.empty())
    {
        fro = q.front();
        q.pop();
        pepol[fro]++;
        maxim = max(maxim,pepol[fro]);
        for (i=0;i<v[fro].size();i++)
        {
            if(visited[v[fro][i]]==0)
            {
                visited[v[fro][i]]=1;
                q.push(v[fro][i]);
            }
        }
    }

}

int main()
{
    long long int t,k,m,n,l,i,uu,vv,spot;
    cin>>t;
    for (l=1;l<=t;l++)
    {
        for(i=0;i<10010;i++)
            v[i].clear();
        memset(pepol,0,sizeof(pepol));
        vector<long long int >res;
        cin>>k>>n>>m;
        for (i=0;i<k;i++)
        {
            cin>>uu;
            res.push_back(uu);
        }
        for(i=0;i<m;i++)
        {
            cin>>uu>>vv;
            v[uu].push_back(vv);
        }
        maxim = 0;
        spot=0;
        for(i=0;i<res.size();i++)
        {
            bfs(res[i]);
        }
        for(i=1;i<=n;i++)
        {
            if(pepol[i]==maxim)
                spot++;
        }
        printf("Case %lld: %lld\n",l,spot);
    }

    return 0;
}
