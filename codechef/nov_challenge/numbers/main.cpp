#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        int dist[n];
        int count[n];
        n=n-1;
        memset(count,0,sizeof(count));
        memset(dist,0,sizeof(dist));
        a[0]=0;
        count[0]++;
        for(int i=1;i<=n;i++)
        {
            if(count[a[i-1]]>1)
            {
                a[i]=i-1-dist[a[i-1]];
                dist[a[i-1]]=i-1;
                if(count[a[i]]==0)
                    dist[a[i]]=i;
                count[a[i]]++;

            }
        else
            {a[i]=0;
            count[a[i]]++;}
//cout<<a[i]<<" "<<dist[i]<<" "<<count[i]<<endl;
    }
    cout<<count[a[n]]<<endl;
    for(int i=0;i<=n;i++)
        cout<<a[i]<<" " <<dist[i]<<" "<<count[i]<<endl;
        }
    cout << "Hello world!" << endl;
    return 0;
}
