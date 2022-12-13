/* Write a program to report behaviour of Linux kernel including kernel version, 
CPU type and model. (CPU information) */


#include<iostream>
using namespace std;
int main()
{
cout<<"\nKernel version is: \n";

system("uname -s");

cout<<"\nCPU SPACE: \n";
system("cat /proc/cpuinfo |awk 'NR==3,NR==4{print}' \n");
cout<<"\n\n";
return 0;
}