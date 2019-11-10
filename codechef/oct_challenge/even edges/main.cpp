#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t;//,m,n,u,v;
    cin>>t;
    while(t--)
    {int ne=0,no=0,p=1,m,n,u,v;
        cin>>n>>m;
        vector<int> odd();
        vector<vector <int> >a(n+1);
        for(int i=0;i<m;i++)
            {cin>>u>>v;
            a[u].push_back(v);
            a[v].push_back(u);
            }
            vector<int> deg(n+1);
            for(int i=1;i<a.size();i++)
               {
                   deg[i]=a[i].size();
                   if(deg[i]%2==0)
                    ne++;
                   else
                    {no++;
                    odd.push_back(i);
               }}
               if(m%2==0)
               {
                   cout<<p<<endl;
                   for(int i=0;i<n;i++)
                    cout<<p<<" ";
                   cout<<endl;
               }
               else if(no>0 && m%2!=0)
               {
                   p++;
                   cout<<p<<endl;
                   for(int i=1;i<n+1;i++)
                   {
                       if(odd[0]==i)
                        cout<<p<<" ";
                       else
                        cout<<p-1<<" ";
                   }
                   cout<<endl;


               }
               else if(no==0 && m%2!=0)
               {cout<<3<<endl;
               //cout<<"c"<<endl;

                   cout<<2<<" ";
                     for(int i=2;i<=n;i++)
                     {
                         if(i==a[1][0])
                            cout<<3<<" ";
                            else
                                cout<<p<<" ";

                     }
                     cout<<endl;
               }


for(int j=0;j<odd.size();j++)
    cout<<odd[j]<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
