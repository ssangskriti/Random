#include<bits/stdc++.h>

using namespace std;


long long int visited[20005], marker[20005],count0,count1;

void bfs(long long int node, vector<long long int>v[20005])
{
    queue<long long int> q;
    q.push(node);

    long long int i,fro;

    visited[node] = 1;

    while(!q.empty())
    {
        fro = q.front();
        q.pop();
        for(i=0; i<v[fro].size(); i++)
        {
            if(visited[v[fro][i]]==0)
            {
                visited[v[fro][i]] = 1;
                q.push(v[fro][i]);
                if(marker[fro]!=1)
                {

                    marker[v[fro][i]]=1;
                    count1++;
                }
                else
                    count0++;
            }
        }
    }

}

int main()
{
    long long int n,a,b,i,t,j,r;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        memset(visited,0,sizeof(visited));
        memset(marker,0,sizeof(marker));
        vector<long long int>v[20005];

        cin>>n;
        count0=1;
        count1=0;
        r=0;
        for(j=0; j<n; j++)
        {
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);

        }

        for(j=1; j<=20000; j++)
            if(visited[j]==0 && v[j].size()!=0)
                {
                    bfs(j,v);
                    r += max(count0,count1);
                    count0=1;
                    count1=0;
                }


        printf("Case %lld: %lld\n",i,r);


    }


    return 0;
}

