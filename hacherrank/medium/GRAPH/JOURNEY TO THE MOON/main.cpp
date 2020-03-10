  #include<bits/stdc++.h>
#include <iostream>
#define in long long int

using namespace std;
in k=0,r=0;;
vector<in>visited(1000000,0);
in n;
vector<vector<in>>adj(1<<17);
void dfs(in vertex)
{

    visited[vertex]=1;
    k++;
    vector<in>::iterator it;
    for(it=adj[vertex].begin();it!=adj[vertex].end();++it)
    {
        if(!visited[*it])
            dfs(*it);

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    in m,x;
    cin>>n>>m;
    x=n
    ;

    in p=0;

    while(m--)
    {
        in u,v;
        cin>>u>>v;
        if(adj[u].size()==0)
            p++;
        if(adj[v].size()==0)
            p++;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
        //cout<<p<<endl;

        }
        //cout<<p;
          vector<in>siz;

        for(int i=0;i<n;++i)
        {if(r==p)
        break;
             if(!visited[i])
                {
                    dfs(i);
                    if(k>=2)
                    r+=k;
                 siz.emplace_back(k);
                 k=0;
                 }

        }
    in sum=0;
    for(in it2=0;it2<siz.size()-1;++it2)
    {
        sum+=siz[it2]*(n-siz[it2]);
           n=n-siz[it2];
    }
    //cout<<r<<x<<n<<endl;
    if(r<x)
    {   //cout<<"ooo"<<endl;
        sum+=siz[siz.size()-1]*(n-siz[siz.size()-1]);
    n=n-siz[siz.size()-1];
     if(n>1)
    sum+=(n*(n-1))/2;}
    cout<<sum<<endl;
    return 0;
}
