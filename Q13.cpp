// Write a program to calculate sum of n numbers using thread library.



// Write a program to calculate sum of n numbers using thread library.

#include<iostream>
#include<pthread.h>
#include<sys/types.h>
#include<unistd.h>

using namespace std;
int sum;
void * runner(void *param)
{
int size=atoi((const char*)param);
sum=0;
if(size>0)
{
for(int i=1;i<=size;i++)
{
sum+=i;
}}
pthread_exit(0) ;
}
int main(int argc,char * argv[])
{
pthread_t thread_id1;
cout<<"\n Thread Operation"<<endl;
cout<<"\n Input Thread"<<endl;
if(argc != 2)
{
cout<<"\n Error"<<endl;
return 1;
}
if(atoi(argv[1])<0)
{
cout<<"Number should be Positive"<<endl;
return 1;
}
pthread_attr_t attr;
pthread_attr_init(&attr);
pthread_create(&thread_id1,&attr,runner,argv[1]);
pthread_join(thread_id1,NULL);

cout<<"\n Sum :"<<sum<<endl;
cout<<"\n After thread"<<"\n\n";
return 0;
}