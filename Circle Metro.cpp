#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,a,b,x,y;
    cin>>n>>a>>x>>b>>y;
    while(a!=x && b!=y)
    {
        if(a==b)
            break;

        if(a==n)
            a=1;
        else
            a++;
        if(b==1)
            b=n;
        else
            b--;
        if(a==b)
            break;


    }
    if(a==b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
