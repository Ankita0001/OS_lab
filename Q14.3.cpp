// Write a program to implement first-fit, best-fit and worst-fit allocation strategies.

// worst-fit

#include<bits/stdc++.h>
using namespace std;
 
// Function to allocate memory to blocks as per worst fit
// algorithm
void worstFit(int blockSize[], int m, int processSize[], int n)
{
    // Stores block id of the block allocated to a
    // process
    int allocation[5]={0};
    for (int i=0; i<n; i++)
    {
        // Find the best fit block for current process
        int wstIdx = -1;
        for (int j=0; j<m; j++)
        {
            if (blockSize[j] >= processSize[i])
            {
                if (wstIdx == -1)
                    wstIdx = j;
                else if (blockSize[wstIdx] < blockSize[j])
                    wstIdx = j;
            }
        }
 
        // If we could find a block for current process
        if (wstIdx != -1)
        {
            // allocate block j to p[i] process
            allocation[i] = wstIdx;
 
            // Reduce available memory in this block.
            blockSize[wstIdx] -= processSize[i];
        }
    }
    cout<<"\n*_* *_* *_* *_* *_* *_* *_* WORST_FIT *_* *_* *_* *_* *_* *_* *_* \n";
    cout << "\nProcess No.\tProcess Size\tBlock no.\n";
    for (int i = 0; i < n; i++)
    {
        cout << "   " << i+1 << "\t\t" << processSize[i] << "\t\t";
        if (allocation[i] != 0)
            cout << allocation[i] + 1;
        else
            cout << "Not Allocated";
        cout << endl;
    }
    cout<<"\n\n";
}
 
// Driver code
int main()
{
    int blockSize[] = {100, 500, 200, 300, 600};
    int processSize[] = {212, 417, 112, 426};
    int m = 5;
    int n = 4;
 
    worstFit(blockSize, m, processSize, n);
 
    return 0 ;
}