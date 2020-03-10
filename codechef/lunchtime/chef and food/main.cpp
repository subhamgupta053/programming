#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--)
	{
	   int f,s,p,v;
	   cin>>f;
	   int result=0;
	   while(f--)
	   {cin>>s>>v>>p;
	       int val=floor(v/(s+1));
	       //cout<<"floor"<<val<<endl;
            if(val>0)
            result=max(result,val*p);
            //cout<<"result"<<result<<endl;

            }


	      	    cout<<result<<endl;

	}
	return 0;
}
