#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int x;
    int large=a[0][0]+a[0][1]+a[0][2]+a[1][1]+a[2][0]+a[2][1]+a[2][2];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            x=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            
            if (x>large)
            {
                large=x;
            }
        }
        
    }
    cout<<large;
    return 0;
}