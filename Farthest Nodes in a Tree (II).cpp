
#include<bits/stdc++.h>

using namespace std;

vector<pair<long long int,long long int>>v[30000];
long long int visited[30000],weight[30000];

void bfs(long long int node)
{
    queue<long long int> q;
    q.push(node);

    long long int i,fro;
    memset(visited,0,sizeof(visited));

    visited[node] = 1;

    while(!q.empty())
    {
        fro = q.front();
        q.pop();
        for(i=0; i<v[fro].size(); i++)
        {
            if(visited[v[fro][i].first]==0)
            {
                visited[v[fro][i].first] = 1;
                q.push(v[fro][i].first);
                weight[v[fro][i].first]= weight[fro]+v[fro][i].second;
            }
        }
    }


}


int main()
{
    long long int n,a,b,i,j,w,k,t;

    cin>>t;

    for(k=1; k<=t; k++)
    {
        vector<long long int > weights;
        for(i=0; i<30000; i++)
            v[i].clear();
        cin>>n;
        memset(weight,0,sizeof(weight));
        pair<long long int, long long int> p;
        for(i=0; i<n-1; i++)
        {
            cin>>a>>b>>w;
            p.first=b, p.second=w;
            v[a].push_back(p);
            p.first=a;
            v[b].push_back(p);

        }
        bfs(0);

        long long int maxim =-1,node;

        for(i=0; i<n; i++)
        {
            if(maxim<weight[i])
            {
                maxim=weight[i];
                node=i;
            }
        }

        memset(weight,0,sizeof(weight));

        maxim=-1;
        bfs(node);
        for(i=0; i<n; i++)
        {
            if(maxim<weight[i])
            {
                maxim=weight[i];
                node=i;
            }
            weights.push_back(weight[i]);
        }

        memset(weight,0,sizeof(weight));

        maxim=-1;
        bfs(node);
        for(i=0; i<n; i++)
        {
            if(maxim<weight[i])
            {
                maxim=weight[i];
                node=i;
            }
            weights.push_back(weight[i]);
        }
        printf("Case %lld:\n",k);

        for (i=0;i<n;i++)
            printf("%lld\n",max(weights[i],weight[i]));
    }

    return 0;
}

