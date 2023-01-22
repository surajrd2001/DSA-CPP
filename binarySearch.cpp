#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;  //to avoid overflow condition of int

    while (start <= end)
    {

        if (key == arr[mid])
        {
            return mid;
        }

        //go to right part of mid
        if (key > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;    //go to left part of mid
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {1, 3, 6, 8, 10, 18};
    int odd[5] = {1, 2, 7, 8, 10};

    int index = binarySearch(even, 6, 40);
    cout << "index of element to be search 8 is " << index << endl;

    int index1 = binarySearch(odd, 5, 8);
    cout << "index of element to be search 8 is " << index1 << endl;

    return 0;
}