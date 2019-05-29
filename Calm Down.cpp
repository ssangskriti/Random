#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,t;

    double pi,R,r,n;
    pi=acos(-1.0);
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>R>>n;

        r=(R*sin(pi/n))/(1+sin(pi/n));

        printf("Case %lld: %.10f\n",i,r);
    }

    return 0;
}
