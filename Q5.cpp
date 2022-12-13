/* Write a program to print file details including owner access permissions, file access time,
where file name is given as command line argument. */

#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
using namespace std;
int main(int argc, char*argv[])
{
    int i;
    struct stat s;
    if (argc < 2)
    {
        cout<<"\n Enter Filename. \n";
    }
    for (i=1;i<argc;i++)
    {
        cout<<"\n File : "<<argv[i]<<"\n";
        if(stat(argv[i],&s)>0)
        cout<<"\n Error in Obtaining states. \n";
        else
        {
            cout<<"\n Owner UID : ";
            cout<<s.st_uid;
            cout<<"\n";
            cout<<"\n Group UID : ";
            cout<<s.st_gid;
            cout<<"\n";
            cout<<"\n Access Permissions : ";
            cout<<s.st_mode;
            cout<<"\n";
            cout<<"\n Access Time : ";
            cout<<s.st_atime;
            cout<<"\n";
            cout<<"\n File Size : ";
            cout<<s.st_size;
            cout<<"\n";
            cout<<"\n File Size(in blocks) : ";
            cout<<s.st_blksize;
            cout<<"\n\n";
        }
    }
    return 0;
}