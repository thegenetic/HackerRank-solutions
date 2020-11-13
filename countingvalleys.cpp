#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<char>a;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin>>x;
        a.push_back(x);
    }
    int val=0;
    int score=0;
    for (int  i = 0; i < n; i++)
    {
        if (a[i]=='u'|| a[i]=='U')
        {
            val++;
            if (val==0)
            {
                score++;
            }
            
        }
        else if (a[i]=='d'|| a[i]=='D')
        {
            val--;
        }
        
    }
    cout<<score;
    return 0;
    
}