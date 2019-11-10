  #include <iostream>
#include<math.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a[1000001]={0};
        long long int n,d,star=0;
        cin>>n;
        while(n--)
        {cin>>d;
        if(a[d]>star)
            star=a[d];
            for(int i=1;i<=sqrt(d);i++)
            {
                if(d%i==0 && d/i!=i)
                {
                    a[i]++;
                    a[d/i]++;
                }
                else if(d%i==0 && d/i==i)
                {
                    a[i]++;
                }
            }

        }
    cout<<star<<endl;
    }
    //cout << "Hello world!" << endl;
    return 0;
    }
