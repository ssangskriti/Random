#include<bits/stdc++.h>

#define  ll  long long
using namespace std;

ll int ncr[51][4];

ll int combo()
{
    for(ll int i=1;i<=50;i++)
        for(ll int j=0;j<=50;j++)
    {
        if(j>i) ncr[i][j]=0;
        else if (j==i || j==0) ncr[i][j]=1;
        else ncr[i][j]=ncr[i-1][j-1]+ncr[i-1][j];
    }

}
//ll int combo()
//{
//    for(ll int i=1;i<=50;i++)
//        for(ll int j=0;j<=3;j++)
//    {
//        if(j>i) ncr[i][j]=0;
//        else if (j==i ) ncr[i][j]=1;
//        else ncr[i][j]=ncr[i-1][j-1]+ncr[i-1][j];
//    }
//
//}


int main()

{
    ll int i,n,c,m[27],pairs;
    string name;

    cin>>n;
    pairs=0;
    memset(m,0,sizeof(m));
    for(i=0;i<n;i++)
    {
        cin>>name;
        c = name[0]-96;
        //cout<<c<<endl;
        m[c]++;
    }

    combo();

    for(i=1;i<=26;i++)
    {
        if(m[i]>2)
        {
            //cout<<m[i]<<endl;
            if(m[i]%2==0)
                {
                    ll int temp=m[i]/2;
                    temp= ncr[temp][2];
                    temp*=2;
                    pairs+=temp;
                }
                if(m[i]%2!=0)
                {
                    ll int temp=m[i]/2;

                    ll int cola= ncr[temp][2];
                    pairs+=cola;

                    cola= ncr[temp+1][2];
                    pairs+=cola;
                    //cout<<pairs<<endl;
                }
        }
    }

    cout<<pairs<<endl;
    return 0;
}
