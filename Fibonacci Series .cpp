#include<iostream.h>
#include<conio.h>
void main()
{int F1=0,F2=0,F3,n,i;
cout<<"Enter The Number of Terms in Series";
cin>>n;
cout<<"Fibonacci Series"<<F1<<"\t"<<F2;
for(i=3;i<=n;i++)
{F3=F1+F2;
cout<<"\t"<<F3;
F1=F2;
F2=F3;
}
getch();
}