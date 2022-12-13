#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;
int main()
{
    int pid=fork();
    if (pid<0)
    {
        cout<<"\n Unsuccessful\n";
        return -1;
    }
     else if (pid==0)
     {
        cout<<" \n I am a child process. "<< pid<< " " <<getpid();
     }
     else 
     {
        sleep(0.5);
        cout<<"\n I am a parent process. "<< pid<< " "<<getpid();
     }
    return 0;
}