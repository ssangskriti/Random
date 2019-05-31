#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i,a,b;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a>b)
            printf("Case %lld: %lld\n",i+1,19+(a-b+a)*4);
        else
            printf("Case %lld: %lld\n",i+1,19+b*4);
    }

    return 0;
}
