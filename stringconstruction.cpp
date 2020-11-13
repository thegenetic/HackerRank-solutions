#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        string a;
        cin>>a;
        unordered_map <char ,int> m;
        stringstream s(a);
        char w;
        while (s>>w)
        {
            m[w]++;
        }
        int temp=0;
        unordered_map <char ,int> :: iterator p;
        for ( p = m.begin(); p!=m.end(); p++)
        {
            temp++;
        }
        cout<<temp<<endl;
    }
    return 0;
}