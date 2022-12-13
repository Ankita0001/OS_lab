// Write a program to implement first-fit, best-fit and worst-fit allocation strategies.


// first-fit 


#include<bits/stdc++.h>
using namespace std;

void implimentFirstFit(int blockSize[], int blocks, int processSize[], int processes)
{
    // This will store the block id of the allocated block to a process
    int allocate[processes];
    int occupied[blocks];

    // initially assigning -1 to all allocation indexes
    // means nothing is allocated currently
    memset(allocate, -1, sizeof(allocate));
	
	for(int i = 0; i < blocks; i++){
        occupied[i] = 0;
    }
	
    // take each process one by one and find
    // first block that can accomodate it
    for (int i = 0; i < processes; i++)
    {
        for (int j = 0; j < blocks; j++) 
        { 
        if (!occupied[j] && blockSize[j] >= processSize[i])
            {
                // allocate block j to p[i] process
                allocate[i] = j;
                occupied[j] = 1;
 
                break;
            }
        }
    }
    cout<<"\n*_* *_* *_* *_* *_* *_* *_* FIRST_FIT *_* *_* *_* *_* *_* *_* *_* \n"; 
    cout<<"\nProcess No.\tProcess Size\t\tBlock no.\n";
    for (int i = 0; i < processes; i++)
    {
        cout << i + 1 << "\t\t\t" << processSize[i] << "\t\t\t";
        if (allocate[i] != -1)
            cout << allocate[i] + 1 << endl;
        else
            cout << "Not Allocated" << endl;
    }
     cout<<"\n\n";
}

int main()
{
    int blockSize[] = {100, 50, 30, 120, 35};
    int processSize[] = {20, 60, 70, 40};
    int m = sizeof(blockSize)/sizeof(blockSize[0]);
    int n = sizeof(processSize)/sizeof(processSize[0]);
    
    implimentFirstFit(blockSize, m, processSize, n);
    
    return 0;
}