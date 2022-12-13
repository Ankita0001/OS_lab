/* Write a program (using fork() and/or exec() commands) where parent and child execute:
a) same program, same code.
b) same program, different code.
c) before terminating, the parent waits for the child to finish its task, both for above
mentioned cases a) and b) */

// Variation(using execlp)


#include<sys/types.h>
#include<iostream>
#include<unistd.h>
#include<sys/wait.h>
using namespace std;
int main()
{
	int pid=fork();
	if(pid<0)
	{
		cout<<"\n Fork failed"<<endl;
		return 1;
	}
	else if(pid==0)
	{
		execlp("/bin/ls","prog2.cpp",NULL);
		cout<<"\n LINE J"<<endl;
		
	}
	else
	{
		wait(NULL);
		cout<<"\n Child complete"<<"\n\n";
		
	}
	return 0;
}