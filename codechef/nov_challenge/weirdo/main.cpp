    #include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n],A=0,sca[26],scb[26],fa[26],fb[26],B=0;
        double a=0,b=0;
        memset(sca,0,sizeof(sca));
        memset(scb,0,sizeof(scb));
        memset(fa,0,sizeof(fb));
        memset(fb,0,sizeof(fb));
        for(int t=0;t<n;t++)
        {   string s;
            cin>>s;
            int sa[26],sb[26];
            memset(sa,0,sizeof(sa));
            memset(sb,0,sizeof(sb));
            bool flag=false;
            int j=0,index=0,vowels=0;
            // to find the first index of consonant
            while(j<s.length())
            {
                if(s[j]!='a' && s[j]!='e' && s[j]!='i' &&s[j]!='o' && s[j]!='u' )
                {
                    index=j;
                    break;
                }
                j++;
            }
            for(int i=j+1;i<s.length();i++)
            {
                char ch=s[i];
                if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
                    vowels++;
                    else
                    {
                        if(vowels<2)
                        {flag=true;
                            B++;
                            arr[t]=2;

                                break;
                        }
                        else
                            {index=i;
                            vowels=0;}

                    }
            }
            if(flag!=true)
            {
                A++;
                arr[t]=1;
            }
        /*for(int z=0;z<n;z++)
        {if(arr[z]==1)
            cout<<"Alice"<<endl;
            else
                cout<<"BOb"<<endl;
cout<<"Alice no.="<<A<<endl;
        cout<<"Boob no.="<<B<<endl;
    }*/

for(int z=0;z<s.length();z++)
{char ch=s[z];
int num=ch-'a';
    if(arr[t]==1)
        {
            if((sa[num]==0))
            {sca[num]++;
         sa[num]=1;
         fa[num]++;
        }
        else
        fa[num]++;
    }
    else
    {
       if(sb[num]==0)
        {scb[num]++;
         sb[num]=1;
         fb[num]++;
        }
        else
        fb[num]++;

    }
}
        }
  for(int z=0;z<26;z++)
    {
        if(sca[z]>0)
            //cout<<"sca="<<sca[z]<<"   fa="<<fa[z]<<endl;
            a+=log10(sca[z])-(A*log10(fa[z]));
        if(scb[z]>0)
        //cout<<"scb="<<scb[z]<<"   fb="<<fb[z]<<endl;
            b+=log10(scb[z])-(B*log10(fb[z]));
    }
   // cout<<pow(10,a)<<" "<<pow(10,b);
     double ans=a-b;
    if(ans>7)
        cout<<"Infinity"<<endl;
    else
        cout<<pow(10,ans)<<setprecision(17)<<endl;
}//completion of test case
     //cout << "Hello world!" << endl;
    return 0;
}
