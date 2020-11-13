#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    
    long long *arr=new long long [n+2];

    while(m--)
    {
        long long a,b,k;
        cin>>a>>b>>k;
        arr[a]+=k;
        arr[b+1]-=k;
    }

    long long temp=0,r=0;

    for (int i = 1; i <= n; i++)
    {
        temp+=arr[i];
        if (r<temp)
        {
            r=temp;
        }
        
    }
    cout<<r;
    return 0;
}