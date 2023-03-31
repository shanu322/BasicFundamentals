#include<iostream.h>
void main()
{int A[5][5];
int m,n,i,j,sym=1;
cout<<"Enter the Order of the Matrix";
cin>>m>>n;
cout<<"Enter the Elements";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>A[i][j];
if(m==n)
{for(i=0;i<m;i++)
for(j=0;j<n;j++)
if(A[i][j]!=A[i][j])
{sym=0;
break;
}
if(sym)
cout<<"Matrix is Symmetric";
else cout<<"Not Symmtreic";
}
else cout<<"Not A Square Matrix";
}