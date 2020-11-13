#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int bribes=0;
        int x=0;
        
        for (int i = n; i >0; i--)
        {
            if (i!=a[i-1])
            {
                if (i-1>0 && a[i-2]==i)
                {
                    a[i-2]=a[i-1];
                    a[i-1]=i;
                    
                    bribes+=1;
                }
                else if (i-2>0 && a[i-3]==i)
                {
                    a[i-3]=a[i-2];
                    a[i-2]=a[i-1];
                    a[i-1]=i;
                    
                    bribes+=2;
                }
                else
                {
                    x=1;
                    break;
                }
                
            }
            
                        
        }
        if (x==0)
        {
            cout<<bribes<<endl;
        }
        else 
        {
            cout<<"Too chaotic"<<endl;
            
        }
        
        

    }
    return 0;
}