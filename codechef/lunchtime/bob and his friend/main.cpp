  #include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    register int t;
        scanf("%d",&t);
    while(t--)
    {long long int m=100000000000;
    //cout<<m<<endl;
        long long int n,a,b,c,j;
        scanf("%lld%lld%lld%lld",&n,&a,&b,&c);
        for(long long i=0;i<n;i++)
        {scanf("%lld",&j);

            m=min(m,llabs(b-j)+llabs(a-j)+c);

        }
        printf("%lld\n",m);
    }
    //cout << "Hello world!" << endl;
    return 0;
}
