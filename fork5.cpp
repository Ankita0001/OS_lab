#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;
int main()
{
    int p1,p2;
    cout<<"Tata"<<endl;
    p1=fork();
    cout<<"Bye :(" <<endl;
    p2=fork();
    cout<<"Yes :) " <<endl;
    return 0;
}