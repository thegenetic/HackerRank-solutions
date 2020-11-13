#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int count=0;
    int currentcloud=0;
    while (currentcloud<n)
    {
        if(currentcloud+1==n-1)
        {
            currentcloud++;
        }
        else if (a[currentcloud+2]==0)
        {
            currentcloud+=2;
        }
        else
        {
            currentcloud++;
        }
        count++;
    }
    
    cout<<count-1;
    return 0;
}