#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    long a[n];
    for (long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (long i = 0; i < n; i++)
    {
          
        if (abs(a[i] - a[i+1]) == 1 || a[i]==a[i+1])
        {
            count++;
        }
               
        
    }
    cout << count;
    return 0;
}