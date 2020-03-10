    #include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{long long int ans=0;
    int T;
    scanf("%d",&T);
    while(T--)
    {//cout<<T;
           char ch;
            int sum=0,N,m,indexi,indexj,price=100,ar[4][4];
            memset(ar,0,sizeof(ar));
            scanf("%d",&N);
         //   cout<<T<<endl;
            while(N--)
            {//cout<<"N="<<T<<endl;
                cin>>ch;
               // cout<<"ch==="<<T<<endl;
                                scanf("%d",&m);
                //cout<<"m=="<<T<<endl;
                ar[ch-'A'][(int)((m/3)-1)]++;
            }//end of N while
            //cout<<"N="<<T<<endl;
            /*for(int i=0;i<4;i++)
            {
                for(int j=0;j<4;j++)
                printf("%d\t",ar[i][j]);
                printf("\n");
            }*/
        int z=4,movie[4],show[4];
        memset(movie,0,sizeof(movie));
        memset(show,0,sizeof(show));
        //cout<<"mem="<<T<<endl;
        while(z--)
        {
            int me=0;
            for(int i=0;i<4;i++)
            {
                for(int j=0;j<4;j++)
                    {
                        if(!movie[i] && !show[j] && me<ar[i][j])
                            { me=ar[i][j];
                                indexi=i;
                                indexj=j;
                            }
                    }}
           //         cout<<"zzzz="<<T<<endl;
                    if(me>0)
                    {//printf("indexi=%d\n",indexi);
                    //printf("indexj=%d\n",indexj);
                    //printf("value=%d\n",me);
                movie[indexi]=1;
                show[indexj]=1;
                sum+=ar[indexi][indexj]*price;
                price-=25;
                    }
        }//end of z
//cout<<T<<endl;
     for(int i=0;i<4;i++)
        if(movie[i]==1)
        continue;
     else
        sum-=100;
    /* for(int i=0;i<4;i++)
     {for(int j=0;j<4;j++)
       cout<<ar[i][j];
      cout<<endl;}
      */
                printf("%d\n",sum);
                ans+=sum;
                //cout<<T;
    }
    cout<<ans;
    return 0;
}
