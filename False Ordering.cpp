#include<bits/stdc++.h>
using namespace std;

//vector<pair<long long int, long long int< <v(1001);
//bool compare(pair<long long int, long long int>a, pair<long long int, long long int>b)
//{
//    if(a.first<b.first)
//        return 1;
//    else if (a.first>b.first)
//        return 0;
//    else if(a.second>b.second)
//        return 1;
//}
long long int v[1001];

struct pairs{
long long int x,y;
};
pairs number[1001];


bool compare(pairs a, pairs b)
{
    if(v[a.x-1]<v[b.x-1]) return true;
    else if(v[a.x-1]>v[b.x]-1) return false;
    else if(v[a.x-1]==v[b.x-1])
        if(a.y>b.y) return true;
        else return false;
}

void order()
{
    memset(v,0,sizeof(v));
    v[0]=1;
    long long int i,j,c;
    for(i=2;i<=1000;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        v[i-1]=c;
    }

    for(i=0;i<1000;i++)
    {
        number[i].x= i+1;
        number[i].y= v[i];
    }
    for(i=0;i<1000;i++)
        for(j=i+1;j<1000;j++)
        if(compare(number[i],number[j])==false)
    {
        pairs temp=number[i];
        number[i]=number[j];
        number[j]=temp;
    }
}

int main()
{
    long long int t,i,n;

    cin>>t;
    order();
//    for(i=0;i<1000;i++)
//        cout<<number[i].x<<endl;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        cout<<"Case "<<i<<": "<<number[n-1].x<<endl;
    }



    return 0;
}
