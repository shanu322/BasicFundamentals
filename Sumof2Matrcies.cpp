#include<iostream.h>
void main()
{int A[5][5],B[5][5],C[5][5],i,j,m,n;
cout<<"Enter Order of The Matrix";
cin>>m>>n;
cout<<"Enter the Elements of A";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>A[i][j];
cout<<"Enter the Elements of B";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>B[i][j];
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{C[i][j]=A[i][j]+B[i][j];
cout<<C[i][j]<<"\t";
}
cout<<endl;
}}