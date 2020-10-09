#include<bits/stdc++.h>

using namespace std;

vector<long long int>v[101];
long long int visited[101], marker[101],counts=0;

void bfs(long long int node)
{
    queue<long long int> q;
    q.push(node);

    long long int i,fro;

    visited[node] = 1;

    while(!q.empty())
    {
        fro = q.front();
        q.pop();



        for(i=0;i<v[fro].size();i++)
        {
            if(visited[v[fro][i]]==0)
            {
                visited[v[fro][i]] = 1;
                q.push(v[fro][i]);
                if(marker[fro]!=1)
                {
                    marker[v[fro][i]]=1;
                    counts++;
                }
            }
        }
    }

}

int main()
{
    long long int n,a,b,i,j;
    memset(visited,0,sizeof(visited));
    memset(marker,0,sizeof(marker));
    cin>>n;
    i=0;

        while(i<n)
        {
            cin>>b;
        if(b)
            v[i+1].push_back(b);
        else
        {
            i++;
//            printf("right\n");
        }
        }
        for(i=1;i<=n;i++)
            if(visited[i]==0)
            bfs(i);
        cout<< counts<<endl;;
        for(i=1; i<=n;i++)
        {
            if(marker[i]==1)
            {
                cout<<i;
                if(counts) printf(" ");
                    counts--;

            }

        }
    return 0;
}
