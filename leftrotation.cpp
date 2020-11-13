#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int b[n];
    for (int i = 0; i < n; i++)
    {
        int z=(i+n-d)%n;
        b[z]=a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    
    return 0;
}