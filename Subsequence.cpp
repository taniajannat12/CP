#include<bits/stdc++.h>
using namespace std;
int main()
{  /*string s,t;
cin>>s>>t;
int i=0;
for(int j=0;j<t.size();j++)
{
    if(s.size()==t.size())
    {
        i++;
    }
    if(i=s.size())
    {
        break;
    }
}

if(i=s.size())
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}*/

int a,b;
cin>>a>>b;
string s=to_string(a);
string t=to_string(b);
int i=0;
for(int j=0;j<t.size();j++)
{
    if(s.size()==t.size())
    {
        i++;
    }
    if(i==s.size())
    {
        break;
    }
}
if(i=s.size())
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}
}


























