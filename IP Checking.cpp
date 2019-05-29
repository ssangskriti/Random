#include<bits/stdc++.h>

using namespace std;

int bintodec(long long int bin)
{
    long long int dec, i, r;
    dec=0;
    i=0;
    while(bin)
    {
        r=bin%10;
        bin/=10;
        if(r)
            dec+= (pow(2,i));
        i++;


    }
    return dec;
}

int main()
{
    long long int t,i,a,b,c,d,p,q,r,s;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        scanf("%lld.%lld.%lld.%lld",&a,&b,&c,&d);
        scanf("%lld.%lld.%lld.%lld",&p,&q,&r,&s);
        if(bintodec(p)==a&&bintodec(q)==b&&bintodec(r)==c&&bintodec(s)==d)
            printf("Case %lld: Yes\n",i);
        else
            printf("Case %lld: No\n",i);
//        cout<<bintodec(p)<<" "<<bintodec(q)<<" "<<
//            bintodec(r)<<" "<<bintodec(s)<<endl;

    }

    return 0;
}



