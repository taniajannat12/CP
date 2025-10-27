#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int pre[n];
    pre[0]=v[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+v[i];
    }


    int u[n];
    for(int i=0;i<n;i++)
    {
        u[i]=v[i];}
        sort(u,u+n);
int pre1[n];
    pre1[0]=u[0];
  for(int i=1;i<n;i++)
  {

       pre1[i]=pre1[i-1]+u[i];}

     int m;
     cin>>m;
     for(int q=0;q<m;q++)
     {
         int t,l,r;
         cin>>t>>l>>r;
         l--;
         r--;
         if(t==1)
         {
             long long ans=pre[r];
             if(l>0)
                ans -=pre[l-1];
             cout<<ans<<endl;
         }
         else{
            long long ans=pre1[r];
            if(l>0)
                ans -=pre1[l-1];
            cout<<ans<<endl;
         }
     }
}
