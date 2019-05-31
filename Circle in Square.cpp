#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,t;
    double pi,area,r;
    pi=2*acos(0.0);
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>r;
        area = pow((2.0*r),2) - (pi*r*r);
        printf("Case %lld: %.2f\n",i,area);
    }

    return 0;
}
