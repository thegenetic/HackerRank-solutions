#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int two=0,one=0;
    cin>>s;
    stringstream ss(s);
    char w;
    unordered_map <char, int> m;
    while (ss>>w)
    {
        m[w]++;
    }
    unordered_map <char,int>:: iterator i;
    for ( i = m.begin(); i!=m.end() ; i++)
    {
        if(i->second==2)
        {
            two++;
        }
        else if (i->second==1)
        {
            one++;
        }
        else
        {
            cout<<"NO";
            return 0;
        }
        
        
    }
    if (two > 1 && one > 1)
    {
        cout<<"NO"<<endl;
    }
    else if (one>1 && two>1 )
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
    return 0;
}