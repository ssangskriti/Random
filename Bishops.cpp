#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i,x,y,x1,x2,y1,y2,moves;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        y=abs(y1-y2);
        x=abs(x1-x2);
//        if(x1==x2 && y%2==0) moves=2;
//        else if(y1==y2 && x%2==0) moves=2;
//        else if(x==y) moves=1;
//        else if((x%2!=0&&y2%2==0) || (x%2==0&&y2%2!=0))
//            moves=2;

        if(x==y)
            moves= 1;
        else if(x%2==y%2)
            moves = 2;

        else moves=0;

        if(moves)
            printf("Case %lld: %lld\n",i,moves);
        else printf("Case %lld: impossible\n",i);
    }

    return 0;
}
