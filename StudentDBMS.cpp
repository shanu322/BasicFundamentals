#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<iomanip.h>
#include<fstream.h>
class persinfo
{protected: int roll;
	    char name[20];
	    char addr[20];
public:persinfo()
{roll=0;
strcpy(name,"\0");
strcpy(addr,"\0");
}
persinfo(int i,char*n,char*a)
{roll=i;
strcpy(name,n);
strcpy(addr,a);
}
void getdata()
{cout<<"Enter Roll No.";
cin>>roll;
cin.get();
cout<<"Enter Name";
gets(name);
cout<<"Enter Address";
gets(addr);
}};
class batch
{protected:  int batchno;
	     char batchname[20];
	     int batchdur;
	     int batchcost;
	    public:
batch()
{batchno=0;
strcpy(batchname,"\0");
batchdur=0;
batchcost=0;
}
batch(int b,char *d,int z,int f)
{batchno=b;
strcpy(batchname,d);
batchdur=z;
batchcost=f;
}
void getinfo()
{cout<<"Enter Batch No";
cin>>batchno;
cout<<"Enter Batch Name";
gets(batchname);
cout<<"Enter Batch Duration";
cin>>batchdur;
cout<<"Enter Batch Cost";
cin>>batchcost;
} };
class student:public persinfo,public batch
{protected:int trans;
	   int pend;
	  static  int tot;
public:student():persinfo(),batch()
{trans=0;
pend=0;
}
student(int i,char *n,char *a,int b,char *d,int z,int f):persinfo(i,n,a),batch(b,d,z,f)
{}
void getdata()
{persinfo::getdata();
batch::getinfo();
cout<<"Enter transaction Amount";
cin>>trans;
cout<<"Enter Pending Amount";
cin>>pend;
}
void dispdata()
{

cout<<"\n"<<roll;
cout<<"\t"<<name;
cout<<"\t\t"<<batchno;
cout<<"\t\t\t"<<trans;
tot=tot+trans;
}
int gettotal()
{return tot;
}
};
int student ::tot=0;
void main()
{student s1;
fstream stdfile;
stdfile.open("std.dat",ios::in|ios::out|ios::binary);
int n;
char wish;
clrscr();
do{

cout<<"INFORMATION ENTERING\n";
cout<<"1.ENTER INFORMATION\n";
cout<<"2.DISPLAY INFO\n";
cout<<"3.EXIT\n";
cin>>n;
switch(n)
{case 1:
do{
s1.getdata();
stdfile.write((char*)&s1,sizeof(student));
cout<<"Continue ? (Y|N)";
cin>>wish;
}
while(wish=='Y'||wish=='y');
stdfile.close();
break;

case 2:
cout<<"\t\t\tSTUDENT REPORT";
cout<<"\n------------------------------------------------------------------\n";
cout<<"Roll ";
cout<<"\t"<<"Name";
cout<<"\t\t"<<"Batch No.";
cout<<"\t\t"<<"Transaction Amount";
stdfile.open("std.dat",ios::in|ios::binary);
stdfile.read((char*)&s1,sizeof(student));
while(stdfile)
{s1.dispdata();
stdfile.read((char*)&s1,sizeof(student));
}
cout<<"\n------------------------------------------------------------------";
cout<<"\nTotal Transaction Amount="<<s1.gettotal();
cout<<"\n------------------------------------------------------------------\n";
stdfile.close();
break;
case 3:cout<<"THANKS";
break;
default:cout<<"\nInvalid Choice";
}
}while(n!=3);
getch();
}