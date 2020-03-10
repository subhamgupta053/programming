  #include<bits/stdc++.h>
 using namespace std;
 int year(long long int  i)
 {if((i%4==0 && i%100!=0) ||(i%100==0 && i%400==0) )
         return 1;
  return 0;}
 int main()
 {
    long long int t;
    //printf("hello");
    scanf("%lld",&t);
    printf("%lld",t);
    while(t--)
    {
    long long int m1,y1,d=0,sum=0,leap,y3;
        scanf("%lld%lld",&m1,&y1);
         long long int m2,y2;
        scanf("%lld%lld",&m2,&y2);
        printf("%lld %lld",m1,y1);
         printf("%lld %lld\n",m2,y2);

    y3=y1-1;
    int a=y3%400;
    int b=a/100;
    int c=a%100;
    if(b==1)
    d=(5+((c/4)*2)+(c-(c/4)))%7;
    if(b==2)
    d=(3+((c/4)*2)+(c-(c/4)))%7;
    if(b==3)
    d=(1+((c/4)*2)+(c-(c/4)))%7;
    if(b==4 || b==0)
    d=(0+((c/4)*2)+(c-(c/4)))%7;
    if(d==2  && !year(y1) && m1<=2)
    {sum+=1;
    d++;    }
    else if(d==2  && year(y1) && m1<=2)
    {sum+=1;
    d+=2;}
    else if(d==3 && !year(y1) && m1<=2){
       sum+=1;
       d+=1;
    }

    else
    {
       if(year(y1))
    d+=2;
    else
    d++;}
     d=d%7;

      for(long long int i=y1+1;i<y2;i++)
      {leap=year(i);
          if((d==2 || d==3 )&& !leap)
         {sum+=1;
         d++;}
         else if(d==2 && year(i))
         {sum+=1;
         d+=2;}
         else if(leap)
         d+=2;
         else
         d++;

         d=d%7;


      } if((d==2 || d==3 )&& !year(y2)&& m2>=2 && y1!=y2)
         sum+=1;

       if(d==2 && year(y2)&& m2>=2 && y1!=y2)
         sum+=1;


      printf("%lld\n",sum);

         }

   return 0; }
