#include<bits/stdc++.h>

int main()
{
    long long int t,i,j,n,p,q,c,sum,w[40];
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld%lld",&n,&p,&q);
        sum=c=0;
        for(j=0;j<n;j++)
        {
            scanf("%lld",&w[j]);
        }
        j=0;
           while(j+1<=p && j+1<=n && sum<q)
           {
               sum+=w[j];
               c++;
               j++;
           }
           if(sum<=q) printf("Case %lld: %lld\n",i,c);
           else printf("Case %lld: %lld\n",i,c-1);

    }

    return 0;
}
