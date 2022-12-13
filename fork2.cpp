#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;
int main()
{
    int seq=0;
    if (fork()==0)
    cout<<"\n Child! "<<++seq;
     else 
    cout<<"\n Parent! "<<++seq;
    cout<<"\n Both! "<<++seq;
    return 0;
}