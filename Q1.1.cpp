/* Write a program (using fork() and/or exec() commands) where parent and child execute:
a) same program, same code.
b) same program, different code.
c) before terminating, the parent waits for the child to finish its task, both for above
mentioned cases a) and b) */

//a

#include<iostream>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int main()
{
	pid_t pid,p;
	p=fork();
	pid=getpid();
	if(p<0)
	{
		cout<<"\n Fork failed"<<endl;
		exit(1);
	}
	cout<<"\n Output of fork() :"<<p<<endl;
	cout<<"\n Process ID:"<<pid<<"\n\n";
	return 0;
}