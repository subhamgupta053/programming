   #include<bits/stdc++.h>

using namespace std;

 int main() {
    // your code goes here
     long long int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scanf("%lld",&t);
    //cout<<t<<endl;
    while(t--)
    {long long int  length,sum=0,n;
    scanf("%lld",&length);
    //cout<<"length="<<length<<endl;
       //cout<<"k";
       vector<long long int> a,b;
       for(long long int  i=0;i<length;i++)
       {scanf("%lld",&n);
       a.push_back(n);}
       for(long long int  i=0;i<length;i++)
       {scanf("%lld",&n);
       b.push_back(n);}
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
//cout<<length<<"leng"<<endl;
       for(auto i=0;i<length;i++)
       {sum+=min(a[i],b[i]);
       //cout<<sum<<endl;
       }
    printf("%lld\n",sum);

    }
    return 0;
}
