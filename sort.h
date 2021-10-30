// sort.h
#pragma once

#include <vector>

void heap(std::vector<int> &a, int i, int n) // +3
{
    int max = i; //+1
    while (true)
    {
        int child = 2 * i + 1; //+3
        if (child < n && a[child] > a[max]) // levi r9d
            max = child; // +1
        child++; // pravi r9d
        if (child < n && a[child] > a[max]) //+3
            max = child; //+1
        if (max == i) //+1
            break;
        else 
        {
        	int temp = a[max]; //+1
        	a[max] = a[i]; // +1
        	a[i] = temp; // +1

            i = max; // +1
        }

    }
}
void heapsort (std::vector<int> &a, int n) // +2
{
    for (int i = n / 2; i >= 0; i--)
        heap(a, i, n); // create ky4a +3
    for (int i = n - 1; i >= 1; i--)
    {
    	int temp = a[0]; //+1
    	a[0] = a[i]; //+1
    	a[i] = temp; //+1

        heap(a, 0, i); //+3
    }
}