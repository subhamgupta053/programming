#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void fun(string s,int l, int r)
{//cout<<s<<l<<r<<endl;
    //cout<<"entering";
    if(l==r)
    {cout<<s<<endl;
    return;}
    for(int i=l;i<=r;i++)
    {
        swap(s[l],s[i]);
        fun(s,l+1,r);
       //
        //swap(s[l],s[i]);
        //cout<<s<<l<<r<<"end"<<endl;


    }
}
int main() {
	//code
	int n;
	cin>>n;
	string s;
	while(n--)
	{
	    cin>>s;
	    sort(s.begin(),s.end());
	    //cout<<s<<endl;
	    fun(s,0,s.length()-1);

	}
	return 0;
}
