#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<bool> visited(10005,false);
ll coun=0;
ll dfs(vector<vector<ll>>adj,ll vertex,ll parent)
{
    cout<<vertex<<"\tparent\t"<<parent<<endl;
    coun++;
//coun++;
//cout<<"coun="<<coun<<endl;
 visited[vertex]=true;
vector<ll>::iterator it;
  for(it=adj[vertex].begin();it!=adj[vertex].end();it++)
    {
                if(!visited[*it])
                {dfs(adj,*it,vertex);}
        else if(visited[*it]&&parent!=*it)
        {
            //cout<<*it<<"count_ihncrease"<<parent<<"\t";
            //coun++;
            //cout<<"coun="<<coun<<endl;
            continue;


        }

    }

        cout<<"end of v vertex"<<vertex<<endl;
return coun;
}


int main()
{



    ll n,m,u,v;

        cin>>n>>m;
        n=n+1;
        vector<vector<ll>>adj(n);
    ll mm=m;
        while(m--)
        {
            cin>>u>>v;


            adj[u].emplace_back(v);
            adj[v].emplace_back(u);
        }

        //for(ll i=1;i<n;i++)
          //  if(!visited[i])
            //{
              coun=dfs(adj,1,-1);


            //}

cout<<mm-coun+1<<endl;


    cout << "Hello world!" << endl;
    return 0;
}
