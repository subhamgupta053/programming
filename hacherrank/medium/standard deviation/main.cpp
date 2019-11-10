#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a[7];int num;
    float  s=0.0,sd;
    for(int i=0;i<7;i++)
    {
        cin>>num;
        int sum=0,coun=0;
        while(num>0)
        {
            int r=num%10;

            //cout<<r;
            if(r==1)
            sum++;
            num=num/10;
        }
        a[i]=sum;
        s+=a[i];
    }
    float mean=s/7;
    for(int j=0;j<7;j++)
    {
     sd=sd+pow((mean-a[j]),2);
    }
    sd=sd/7;
    sd=sqrt(sd);
    printf("%.4f",sd);
    return 0;
}
