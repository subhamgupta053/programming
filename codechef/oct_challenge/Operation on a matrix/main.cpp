#include <iostream>

using namespace std;

int main()
{int t,n,m,q;
cin>>t;
while(t--)
{int r,c,ae=0,ao=0,anull=0,bo=0,be=0,bnull=0;
    long long coun=0;
    cin>>n>>m>>q;
    cout<<n<<m<<q;
    //int arr[n+1][m+1];
    //for(int z=0;z<n+1;z++)
      //  for(int p=0;p<m+1;p++)
        //arr[z][p]=0;
    //cout<<n<<" "<<m<<" "<<q<<endl;
    long long int *a=new long long int[n+1];
    int *b=new int[m+1];
for(int i=1;i<n+1;i++)
a[i]=0;
for(int i=1;i<m+1;i++)
b[i]=0;
        //cout<<"i="<<i<<"="<<a[i]<<endl;

        //cout<<"i="<<i<<"="<<a[i]<<endl;

    //for(int i=0;i<m+1;i++)
      //  cout<<"i="<<i<<"="<<b[i]<<endl;
    for(int i=0;i<q;i++)
    {
        cin>>r>>c;
        //for(int p=1;p<m+1;p++)
        //arr[r][p]++;
        //for(int p=1;p<n+1;p++)
        //arr[p][c]++;
        //cout<<r<<" "<<c<<endl;
        a[r]++;

        b[c]++;
        //cout<<i<<endl;
        //cout<<r<<" "<<c<<endl;

    }
    for(int i=1;i<n+1;i++)
    {if(a[i]==0)
    anull++;
    else if(a[i]%2==0)
        ae++;
    else
        ao++;
    }
         for(int i=1;i<m+1;i++)
    {if(b[i]==0)
    bnull++;
    else if(b[i]%2==0)
        be++;
    else
        bo++;

    }
coun=(ae*bo)+(ao*bnull)+(ao*be)+(bo*anull);
    cout<<coun<<endl;
/*for(int z=0;z<n+1;z++)
        {for(int p=0;p<m+1;p++)
        cout<<arr[z][p]<<" ";
    cout<<endl;
        }*/
 //for(int i=0;i<m+1;i++)
   //     cout<<"i="<<i<<"="<<b[i]<<endl;
    //for(int i=0;i<n+1;i++)
      //  cout<<"i="<<i<<"="<<a[i]<<endl;
}


    //cout << "Hello world!" << endl;
    return 0;
}
