#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t,n;
    long long int m,sum,ma;
    while(t--)
    {int o;
         string  s;
        cin>>o>>s;
    //cout<<s;
    vector<long long int> a(36,0);
    if(o==-1)
    {
        for(int i=2;i<36;i++)
        {//cout<<i<<"i"<<endl;
                m=i;
                sum=0;ma=0;

        for(int j=s.length()-1;j>=0;j--)
        {
          int k=int(s[j]);
            //cout<<"k"<<k<<endl;
            if(k>=48 && k<=57)
                k=k-48;
            else
                k=k-55;
                if(ma<k)
                    ma=k;
                if(sum<pow(10,12) && j<i)
                {sum+=(k*m);
                m*=m;}
                else
                    break;
                    }
                if(ma<i)
                    a[i]=sum;
                    else
                        a[i]=-1;
    }
    }
    else
    {m=o;
        for(int j=s.length()-1;j>=0;j--)
        {
          int k=int(s[j]);
            //cout<<"k"<<k<<endl;
            if(k>=48 && k<=57)
                k=k-48;
            else
                k=k-55;
                if(sum<pow(10,12))
                {sum+=(k*m);
                m*=m;}
                else
                    break;
                    }
                    if(sum<pow(10,12))
                    a[0]=sum;
    }

        vector<int> ne;
    vector<int>::iterator it;
    n=n-1;
     while(n--)
     {
         cin>>s;
         for(int i=2;i<36;i++)
    {//cout<<i<<"i"<<endl;
        m=i;sum=0;ma=0;
        for(int j=s.length()-1;j>=0;j--)
        {

            int k=int(s[j]);
            //cout<<"k"<<k<<endl;
            if(k>=48 && k<=57)
                k=k-48;
            else
                k=k-55;
                if(ma<k)
                    ma=k;
                if(sum<pow(10,12) && j<i)
                {sum+=(k*m);
                m*=m;}
                else
                    break;
       if(m<i && sum>0 && sum<pow(10,12))
                {it = find (a.begin(), a.end(), sum);
    if (it != a.end() )
    {        ne.push_back(sum);
    }
    }}
    vector<int>::iterator it1,it2;
    for(int j=0;j<ne.size();j++)
     {
         a[j]=ne[j];
     }

     a.erase(ne.size(),a.end());




     }
     if(a.size()>0)
        cout<<a[0];
     else
        cout<<-1;

    }
    cout << "Hello world!" << endl;
    return 0;
}
