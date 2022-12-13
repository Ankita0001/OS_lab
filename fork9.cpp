#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;
int main()
{
    int ID1=fork();
    int ID2=fork();

    if(ID1<0)
    cout<<"\n Unsuccessful \n";
    if(ID1==0)
    cout<<"\n I am Child pid = "<<getpid()<<" return ID1:"<<ID1<<endl;
    else
    cout<<"\n I am Parent pid = "<<getpid()<<" return ID1:"<<ID1<<endl;
     if(ID2<0)
    cout<<"\n Unsuccessful \n";
    if(ID2==0)
    cout<<"\n I am Child pid = "<<getpid()<<" return ID2:"<<ID2<<endl;
    else
    cout<<"\n I am Parent pid = "<<getpid()<<" return ID2:"<<ID2<<endl;
    return 0;
}