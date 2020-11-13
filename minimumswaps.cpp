#include <bits/stdc++.h>
using namespace std;

long minswap(long long int a[], long long int n)
{
    long count = 0;
    for (long long i = n - 1; i >= 0; i--)
    {
        if (a[i] != i + 1)
        {
            for (long long j = i; j >= 0; j--)
            {
                if (a[j] == (i + 1))
                {
                    long long x = a[i];
                    a[i] = a[j];
                    a[j] = x;
                    count++;
                }
            }
        }
    }
    return count;
}


int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c=0;
    while (n >= 0)
    {
        c+=minswap(a,n);
        n--;
    }
    cout << c;
    return 0;
}