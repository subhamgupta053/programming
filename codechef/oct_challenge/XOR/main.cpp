#include <iostream>

using namespace std;

int main()
{
    long long int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long int z=k/n;
        long long int r=k%n;
        if(z)
        {


        z=(z*2)%6;
        if(z==1)
        {
            for(int i=0;i<n/2;i++)
            {
                a[i]=a[i]^a[n-1-i];
            }

        }
         else if(z==2)
        {
            for(int i=0;i<n/2;i++)
            {long long int p=a[i];
                a[i]=a[i]^a[n-1-i];
                a[n-1-i]=p;
            }

        }
        else if(z==3)
        {
            for(int i=0;i<n/2;i++)
            {   long long int p=a[i];

                a[i]=a[n-1-i];
                a[n-1-i]=p;

            }

        }
        else if(z==4)
        {
            for(int i=0;i<n/2;i++)
            {
                 long long int p=a[i]^a[n-1-i];

                a[i]=a[n-1-i];
                a[n-1-i]=p;

                 }

        }
        else if(z==5)
        {
            for(int i=0;i<n/2;i++)
            {
                a[n-1-i]=a[i]^a[n-1-i];
            }

        }

        if(n%2!=0)
            a[n/2]=0;
        }
        for(int i=0;i<r;i++)
        {
            a[i]=a[i]^a[n-1-i];


        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }

     cout << "Hello world!" << endl;
    return 0;
}
