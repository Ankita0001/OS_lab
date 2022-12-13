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
     else 
     {
        cout<<" \n I am a child process. "<< pid<< " " <<getpid();
     }
    return 0;
}