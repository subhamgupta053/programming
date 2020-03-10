 #include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,l;
	string s;
	cin>>t;
	while(t--)
	{bool flag=false;
	    cin>>l>>s;
	    vector<int>a(26);
	    queue<char>q;
	    for(int i=0;i<l;i++)
	    {
	        a[s[i]-'a']++;
	        if(a[s[i]-'a']==1)
	        q.push(s[i]);


	    }
	    while(!q.empty())
	    {char ch=q.front();
	    q.pop();
	        if(a[ch-'a']==1)
	        {cout<<ch<<endl;
	        flag=true;
	    break;     }

	    }
	    if(q.empty())
	    cout<<-1<<endl;}
	return 0;
}
