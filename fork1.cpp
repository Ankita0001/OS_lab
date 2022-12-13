#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;
int main()
{
    int x;
    x=fork();
    if( x==0)
    cout<<"\n I am a Child! "<<x;
    else if (x>0)
    cout<<"\n I am a Parent! "<<x;
    else 
    exit(0);
    return 0;
}