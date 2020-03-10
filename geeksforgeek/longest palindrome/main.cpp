
#include<bits/stdc++.h>
using namespace std;
int main() {
	//code
	int n;
	string s,sub,rev,ans;

	cin>>n;
while(n--)
{int len=0;
cin>>s;
	for(int i=0;i<s.length();i++)
	{
	    for(int j=0;j<=s.length();j++)
	    {
	        sub=s.substr(i,j);
	        //cout<<sub<<endl;
	        rev=sub;
	        reverse(rev.begin(),rev.end());
	        if(sub==rev && sub.length()>len)
	        {
	            len=sub.length();
	            ans=sub;

	        }
	    }


	}
	cout<<ans<<endl;
}
	return 0;
}
