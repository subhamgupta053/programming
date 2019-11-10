//#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{unsigned long long  int n,Q,a,b,q,w,r,bacteria,p=0;
char ch;

cin>>n>>Q;
    vector<vector<unsigned long long int>> ar(n+1);
        for(int i=1;i<n;i++)
    {
        cin>>a>>b;
        if(a<b)
            ar[a].push_back(b);
        else
            ar[b].push_back(a);

    }

   /* for(int i=0;i<ar.size();i++)
    {
        for(int j=0;j<ar[i].size();j++)
        {
            cout<<ar[i][j];
        }
        cout<<endl;

    }*/



    vector< unsigned long long int> bact(n+1);
     for(int i=1;i<=n;i++)
        {cin>>bacteria;
       // cout<<bacteria<<endl;
        bact[i]=bacteria;}
        //for(int i=1;i<=n;i++)
          //  cout<<bact[i]<<" ";
     while(Q--)
     {cin>>ch;
         if(ch=='+')
            {cin>>q>>w;
            //bact[q]=w;
            //cout<<ch<<q<<w;
            }
         else
            {cin>>r;
            //cout<<ch<<r;
            }

          //cout<<ch<<q;
         for(int i=ar.size()-1;i>=1;i--)
         {//cout<<"i:";
             for(int j=0;j<ar[i].size();j++)
             {
                 bact[ar[i][j]]=bact[i]+bact[ar[i][j]];
                 //bact[i]=0;

             }
             if(ar[i].size()>0)
             bact[i]=0;


         }

            if(ch=='?')
            cout<<bact[r]<<endl;
            else
                bact[q]=bact[q]+w;
                cout<<"after"<<p++<<" sec"<<endl;
                for(int i=1;i<=n;i++)
                    cout<<bact[i]<<" ";
                    cout<<endl;
                }






     return 0;
}
