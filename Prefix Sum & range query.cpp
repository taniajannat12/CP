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
    int pre[n];
    pre[0]=a[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+a[i];
        cout<<pre[i]<<endl;
    }

    int l,r,sum=0;
    cin>>l>>r;
    if(l==0)
    {
        sum=pre[r];
    }
    else
    {
        sum=pre[r]-pre[l-1];

    }
    cout<<"Range of Sum ="<<sum<<endl;
}
