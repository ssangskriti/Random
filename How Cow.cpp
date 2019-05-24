#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,j,n,t,x1,x2,x,y,y1,y2;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        cin>>n;
        cout<<"Case "<<i+1<<":"<<endl;
        for(j=0;j<n;j++)
        {
            cin>>x>>y;
            if(x>=x1&&x<=x2&&y>=y1&&y<=y2)
                cout<<"Yes"<<endl;
            else cout<<"No"<<endl;

        }
    }

    return 0;
}
