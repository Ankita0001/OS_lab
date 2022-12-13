// Write a program to show how multiple fork() system calls work.


#include<iostream>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int n1,n2;
	n1=fork();
	n2=fork();
	if(n1>0 && n2>0)
	{
		wait(0);
		cout<<"Parent Process"<<endl;
		cout<<"(0)N1 :"<<n1<<" N2 :"<<n2<<endl;
		cout<<"Parent Process ID :"<<getpid()<<endl;
	}
	else if(n1==0 && n2>0)
	{
		wait(0);
		cout<<"Child1 Process"<<endl;
		cout<<"(1)N1 :"<<n1<<" N2 :"<<n2<<endl;
		cout<<"Child1 Process ID :"<<getpid()<<endl;
		
	}
	else if(n2==0 && n1>0)
	{
		cout<<"Child2 Process"<<endl;
		cout<<"(2)N1 :"<<n1<<" N2 :"<<n2<<endl;
		cout<<"Child2 Process ID :"<<getpid()<<endl;
	}
	else
	{
		cout<<"Child3 Process"<<endl;
		cout<<"(3)N1 :"<<n1<<" N2 :"<<n2<<endl;
		cout<<"Child3 Process ID :"<<getpid()<<endl;
	}
	return 0;
}