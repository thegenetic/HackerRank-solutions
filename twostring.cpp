#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while (a--)
    {
        string s,x;
        cin>>s>>x;
        unordered_map <char,int> u;
        stringstream ss(s);
        stringstream sa(x);
        
        char w,q;
        while (ss>>w )   
        {
            u[w]++;        
        }
        unordered_map <char , int> ::iterator i;
        
        
        unordered_map <char,int > z;
        while (sa>>q)
        {
            z[q]++;
        }
        unordered_map <char,int> ::iterator a;
        bool temp=false;
        for (i = u.begin();i!=u.end(); i++)
        {
            for ( a = z.begin(); a!= z.end() ; a++)
            {
                if (a->first==i->first)
                {
                    temp=true;
                    break;
                }
            }
            
        }
        
        // 
        
        // for (auto i_u=u.begin(), end_u=u.end(),i_z=z.begin(),
        // end_z=z.end();i_u != end_u,i_z != end_z;)
        // {
        //     
        //    ++ i_u;++i_z;
        // }
        
        
        
        if (temp)
        {
            /* code */
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;   
}