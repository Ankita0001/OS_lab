// Write a program to implement first-fit, best-fit and worst-fit allocation strategies.

// best-fit

#include<bits/stdc++.h>
using namespace std;

// Function to allocate memory to blocks as per Best fit
// algorithm
void bestFit(int blockSize[], int m, int processSize[], int n)
{
    // Stores block id of the block allocated to a
    // process
    int allocation[5]={0};

    
    // pick each process and find suitable blocks
    // according to its size ad assign to it
    for (int i=0; i<n; i++)
    {
        // Find the best fit block for current process
        int bestIdx = -1;
        for (int j=0; j<m; j++)
        {
            if (blockSize[j] >= processSize[i])
            {
                if (bestIdx == -1)
                    bestIdx = j;
                else if (blockSize[bestIdx] > blockSize[j])
                    bestIdx = j;
            }
        }

        // If we could find a block for current process
        if (bestIdx != -1)
        {
            // allocate block j to p[i] process
            allocation[i] = bestIdx;

            // Reduce available memory in this block.
            blockSize[bestIdx] -= processSize[i];
        }
    }
    cout<<"\n*_* *_* *_* *_* *_* *_* *_* BEST_FIT *_* *_* *_* *_* *_* *_* *_* \n";
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

    bestFit(blockSize, m, processSize, n);

    return 0 ;
}