#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    char s[100];
    gets(s);
    long long int n,x;
    cin>>n;
    int a=strlen(s),p=0;

    for (int long long i = 0; s[i]!='\0'; i++)
    {
        if (s[i]=='a')
        {
            p++;
        }
        
    }
    x=n/a;
    x=x*p;
    n=n%a;

    for (int long long i = 0; i < n; i++)
    {
        if (s[i]=='a')
        {
            x++;
        }
        
    }
    cout<<x;
    
    return 0;
}