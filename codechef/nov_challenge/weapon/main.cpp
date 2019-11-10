#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int s[10];
int main()
{int t,n;
cin>>t;
while(t--)
{
    cin>>n;
    while(n--)
    {char ch;
        for(int i=0;i<10;i++)
        {
            cin>>ch;
            int a=ch-'0';
            s[i]=s[i]^a;
        }

    }
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(s[i]==1)
        {count++;
        s[i]=0;}}
cout<<count<<endl;
}
    cout << "Hello world!" << endl;
    return 0;
}
