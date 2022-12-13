/* Write a program to report behaviour of Linux kernel including information on configured memory, 
amount of free and used memory. (Memory information) */

#include<iostream>
using namespace std;

int main()
{
cout<<"\nConfigured memory is :"<<endl;
system("cat /proc/meminfo |awk 'NR==1{print $2}' \n ");
cout<<"\nAmount of free memory is :"<<endl;
system("cat /proc/meminfo |awk 'NR==2{print $2}' \n");
cout<<"\nAmount of used memory is :"<<endl;
system("cat /proc/meminfo |awk '{if (NR==1) a=$2; if (NR==2) b=$2 } END {print a-b}' \n ");
return 0;
}