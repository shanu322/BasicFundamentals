#include<iostream.h>
void main()
{int A[10][10];
int m,n,i,j,rsum,csum;
cout<<"Enter the Order of the Matrix";
cin>>m>>n;
cout<<"Enter the Elements";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>A[i][j];
for(i=0;i<m;i++)
{rsum=0;
csum=0;
for(j=0;j<n;j++)
{rsum+=A[i][j];
csum+=A[i][j];
}
cout<<"\nSum of Rows:<<i+1<<rsum;
cout<<"\nSum of Columns:<<i+1<<csum;
}}