#include<iostream.h>
void main()
{int A[3][3],ud=0,ld=0,i,j,m,n;
cout<<"Enter Order of The Matrix";
cin>>m>>n;
cout<<"Enter the Elements";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>A[i][j];
if(m==n)
{for(i=0;i<m;i++)
for(j=0;j<n;j++)
if(i<j)
{ud+=A[i][j];
else if(i>j)
ld+=A[i][j];
cout<<"Sum of Upper Diagonal Elements"<<ud;
cout<<"Sum of Lower Diagonal Elements"<<ld;
}
