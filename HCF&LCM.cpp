#include<iostram.h>
#include<conio.h>
void main()
{int a,b,m,n,lcm,hcf;
cout<<"\nEnter 2 No.s";
cin>>a>>b;
m=a;
n=b;
while(a!=b)
{if(a>b)
a=a-b;
else b=b-a;
}
hcf=a;
lcm=m*n/hcf;
cout<<"\nHCF="<<hcf;
cout<<"\nLCM="<<lcm;
getch();
}