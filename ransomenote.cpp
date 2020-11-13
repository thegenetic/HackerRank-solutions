#include <bits/stdc++.h>
using namespace std;

bool cons(string a[],string b[],int n,int m)
{   
    unordered_map <string, int > mag;
    for (int s=0;s<n;s++)
    {
        mag[a[s]]++;
    }    
     
    for (int i=0;i<m;i++)
    {
        if (mag[b[i]])   
        {
            mag[b[i]]--;
        }
        else
        {
            return false;
        }
    }
    return true;

}
int main()
{
    int n, m;
    cin >> n >> m;
    string a[30000];
    string b[30000];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }

    bool x=cons(a,b,n,m);
    if (x)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
    return 0;
}