#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;
int main()
{
    int p1,p2,p3;
    p1=fork();
    cout<<"Greetings!" <<endl;
    p2=fork();
    cout<<"Good Day!" <<endl;
    p3=fork();
    cout<<"Sayonera!"<<endl;
    return 0;
}