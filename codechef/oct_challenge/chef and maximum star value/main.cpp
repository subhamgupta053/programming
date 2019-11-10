  #include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {int n,q;
    int coun=0,m=-1;
    cin>>n;
         int *a=new int[n];
         //for(int i=0;i<n;i++)

        cin>>q;
        a[0]=q;
        for(int i=1;i<n;i++)
        {coun=0;
            cin>>q;
            a[i]=q;
            for(int j=0;j<i;j++)
            {
                if(a[j]%a[i]==0)
                    coun++;
            }
            if(coun>m)
                m=coun;

        }
        cout<<m<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
