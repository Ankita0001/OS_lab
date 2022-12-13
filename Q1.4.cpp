/* Write a program (using fork() and/or exec() commands) where parent and child execute:
a) same program, same code.
b) same program, different code.
c) before terminating, the parent waits for the child to finish its task, both for above
mentioned cases a) and b) */

//c.2

#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
using namespace std;
int main()
{
	pid_t p;
	p=fork();
	if(p<0)
	{
		cout<<"\n Fork failed"<<endl;
		exit(1);
	}
	else if(p==0)
	{
		cout<<"\n Hello, I am a child process"<<endl;
		cout<<"\n (Child)My pid is :"<<getpid()<<endl;
	}
	else
	{
		cout<<"\n Hello, I am a parent process"<<endl;
		cout<<"\n (Parent)My pid is :"<<getpid()<<endl;
		wait(NULL);
		cout<<"\n Parent process is terminating now."<<endl;
		
	}
	return 0;
}