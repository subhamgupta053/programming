  #include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{int T;
cin>>T;
while(T--)
{int coun=0;
    int n;
    long long int c;
    cin>>n;
    string a;
    cin>>a;
    if(n==1)
    { c=stoi(a);
    while(c!=0)
    {
        if(c%10==1)
            coun++;
            c=c/10;
    }
    }
    else
    {
    n=n-1;

    while(n--)
    {
      string b;
   cin>>b;
   long long int d,e;
   d=stoi(a);
   e=stoi(b);
   c=e^d;
   //cout<<c;

    }
    //int count=0;
    while(c!=0)
    {
        if(c%10==1)
            coun++;
            c=c/10;
    }}
    cout<<coun<<endl;
}

    return 0;
}
