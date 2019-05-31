#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int  i,t;
    double a,b,c;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(a*a+b*b==c*c || b*b+c*c==a*a ||a*a+c*c==b*b)
            printf("Case %lld: yes\n",i+1);
        else printf("Case %lld: no\n",i+1);
    }

    return 0;
}
