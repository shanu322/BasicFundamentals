#include<string.h>
#include<cstdio.h>
#include<iostream.h>
vod main()
{char str1[20];
char str2[20];
cout<<"Enter A String";
gets(str1);
strcpy(str2,str1);
strrev(str2);
if(strcmpi(str1,str2)==0)
cout<<"Palindrome:"<<str1;
else cout<<"Not Palindrome:"<<str2;
}



