#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,n,t,l,w,h,max,min,j,c;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        string s,thief, victim;
        max=0;
        min=1000001;
        c=0;
        for(j=0; j<n; j++)
        {
            cin>>s>>l>>w>>h;
            if(max<l*w*h)
            {
                max=l*w*h;
                thief=s;
                c++;
            }
            if(min>l*w*h)
            {
                min=l*w*h;
                victim=s;
                c++;
            }

        }
        if(c>2)
        cout<<"Case "<<i<<": "<<thief<<" took chocolate from "<<victim<<endl;
        else
            cout<<"Case "<<i<<": no thief"<<endl;
    }

    return 0;
}
