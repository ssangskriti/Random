#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c)
    {
        cout<<4*a<<endl;
    }
    else
    {
       c*=2;
       if(a==b) c+=2*a;
       else c+=2*min(a,b)+1;
       cout<<c<<endl;
    }

    return 0;

}
