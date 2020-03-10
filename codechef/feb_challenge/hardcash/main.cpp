 #include <iostream>
#include<bits/stdc++.h>
using namespace std;
int fun(int cr,int ccol,vector<int>row,int val,vector<int>col,int mul,vector<vector<int>>&a,int&ans);
int main()
{long long int ans=0;
    int T;
    scanf("%d",&T);
    while(T--)
    {
           char ch;
            int sum=INT_MIN,N,m,indexi,indexj,price=100;
            vector<vector<int>>ar(4,vector<int>(4,0));

            scanf("%d",&N);
            while(N--)
           {
                cin>>ch;

               scanf("%d",m);

                ar[ch-'A'][(int)((m/3)-1)]++;

  for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
               { vector<int>row(4,0);
                 vector<int>col(4,0);

                  fun(i,j,row,0,col,1,ar,sum);}
                printf("%d\n",sum);
                ans+=sum;

    }}
    cout<<ans;
    return 0;

}
int fun(int cr,int ccol,vector<int>row,int val,vector<int>col,int mul,vector<vector<int>>&a,int&ans)
{  row[cr]=1;
   col[ccol]=1;

         if(mul==1)
             {   if(a[cr][ccol]>0)
                 val+=100*(a[cr][ccol]);
                 else
                 val-=100;
                 }
         else if(mul==2)
             {
               if(a[cr][ccol]>0)
                 val+=75*(a[cr][ccol]);
                 else
                 val-=100;

             }
          else if(mul==3)
          {
              if(a[cr][ccol]>0)
                 val+=50*(a[cr][ccol]);
                 else
                 val-=100;
          }
         else if(mul==4)
         {
             if(a[cr][ccol]>0)
                 val+=25*(a[cr][ccol]);
                 else
                 val-=100;

            ans=max(val,ans);
         return 0;
         }

    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
          { if(row[i]==0&&col[j]==0)

              fun(i,j,row,val,col,mul+1,a,ans);
          }
}
