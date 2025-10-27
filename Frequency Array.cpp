#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxv=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxv)
        {
            maxv=a[i];
        }
    }
    int fre[maxv+1];
    for(int i=0;i<=maxv;i++)
    {
        fre[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        fre[a[i]]++;
    }

    for(int i=0;i<=maxv;i++)
    {
        if(fre[i]!=0)
        {
            cout<<i<<" counts = "<<fre[i]<<endl;
        }
    }
}
