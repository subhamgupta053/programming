 #include <iostream>
using namespace std;

int main() {
	// your code goes here
int t,N,P;
cin>>t;
while(t--)
{int ac=0;
int a[100]={0};
                 cin>>N;
                 for(int i=0;i<N;i++)
                 {cin>>P;
                 int coun=0;
                 a[i]=P;
                 //cout<<a[i]<<"  "<<P<<endl;
                 if(i<5)
                 {
                     for(int j=0;j<i;j++)
                     {
                           if(P<a[j])
                           coun++;
                           //cout<<coun<<"a"<<endl;
                    }
                    if(coun==i)
                           {ac++;
                           //cout<<ac<<endl;}

                 }
                 else
                 {
                                  for(int j=i-5;j<i;j++)
                                  {
                                                   if(P<a[j])
                                                   coun++;
                                                   if(coun==5)
                                                   ac++;
                                  }
                 }}
                 cout<<ac<<endl;
}
	return 0;
}
