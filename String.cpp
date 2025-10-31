#include<bits/stdc++.h>
using namespace std;
int main()
{   //Substring
   /* string s;
    cin>>s;
    string sub=s.substr(2,3);
    cout<<sub<<endl;


    //Subsequence
    string s,t;
    cin>>s>>t;
    int i=0;
    for(int j=0;j<t.size();j++)
    {
        if(s[i]==t[j])
        {
            i++;
        }
        if(i==s.size())
        {
            break;
        }
    }
    if(i==s.size())
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    //stringstream

string s;
getline(cin,s);
stringstream ss(s);
string w;
while(ss>>w)
{
    cout<<w<<endl;
}




//substring checking
string s;
getline(cin,s);
string t;
getline(cin,t);
if(s.find(t)!=string::npos)
{
    cout<<"Found"<<endl;

}
else
{
    cout<<"NO"<<endl;
}

#include <bits/stdc++.h>
using namespace std;


    // String input
    string s, t;
    cout << "Enter first string: ";
    getline(cin, s);
    cout << "Enter second string: ";
    getline(cin, t);

    // Length
    cout << "Length of first string: " << s.size() << endl;
    cout << "Length of second string: " << t.length() << endl;

    // Substring
    cout << "Substring of first string (1,3): "
         << s.substr(1, min(3, (int)s.size()-1)) << endl;

    // Substring check
    if(s.find(t) != string::npos)
        cout << "FOUND" << endl;
    else
        cout << "NOT FOUND" << endl;

    // String to number
    string numStr;
    cout << "Enter a number as string: ";
    cin >> numStr;
    int n = stoi(numStr);
    cout << "String to number: " << n << endl;

    // Number to string
    int m;
    cout << "Enter a number: ";
    cin >> m;
    cout << "Number to string: " << to_string(m) << endl;

    cin.ignore(); // clear newline from buffer before getline

    // Reverse string
    string r;
    cout << "Enter a string to reverse: ";
    getline(cin, r);
    string rev = r;
    reverse(rev.begin(), rev.end());
    cout << "Reversed string: " << rev << endl;

    // Palindrome check
    string p;
    cout << "Enter a string for palindrome check: ";
    getline(cin, p);
    string revP = p;
    reverse(revP.begin(), revP.end());
    if(p == revP)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    // Lexicographical analysis
*/


    int n1;
    cin>>n1;
  vector<string>w(n1);
    for(int i=0;i<n1;i++)
    {
        cin>>w[i];
    }



    sort(w.begin(),w.end());
    cout<<"SORTED ORDERS ="<<" ";
    for(int i=0;i<n1;i++)
    {
        cout<<w[i]<<" ";
    }
    cout<<endl;


}






