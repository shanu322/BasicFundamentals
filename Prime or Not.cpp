#include<iostream.h>
#include<conio.h>
void main()
{int i=2,n,flag=1;
cout<<"Enter A Number";
cin>>n;
while(i<=n/2)
{if(n%1==0)
{flag=0;
break;
}i++;
}
if(flag==1)
cout<<n<<"Is Prime";
else cout<<"Not Prime";
getch();
}
