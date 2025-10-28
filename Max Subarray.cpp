#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

int current=a[0],maxs=a[0],s=0,e=0,temp=0;
for(int i=1;i<n;i++)
{
    if(current+a[i]<a[i])
    {
        current=a[i];
        temp=i;
    }
    else
    {
        current+=a[i];
    }
    if(current>maxs)
    {
        maxs=current;
        s=temp;
        e=i;
    }
}

cout<<"Maximum Subarray ="<<maxs<<endl;
cout<<"Subarray =";
for(int i=s;i<=e;i++)
{
    cout<<a[i]<<" ";
}
}











