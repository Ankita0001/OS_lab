#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;
int main()
{
    int code=fork();
    int status,x;
    if (code<0)
    {
        cout<<"\n Unsuccessful\n";
    }
     else 
     {
        x= wait(&status);
        cout<<"\n pid = " <<getpid<<"\n return code\n "<<code<<"\n x = "<<x<<"\n";
     }
    return 0;
}