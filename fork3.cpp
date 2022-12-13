#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;
int main()
{
    int p1,p2,p3;
    p1=fork();
    p2=fork();
    p3=fork();
    cout<<"hello!"<<endl;
    return 0;
}