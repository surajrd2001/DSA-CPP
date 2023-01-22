#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
}

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {

        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[7] = {6, 7, 8, 9, 4, 5, 10};

    reverseArray(arr, 5);
    reverseArray(brr, 7);

    printArray(arr, 5);
    cout<<endl;
    printArray(brr, 7);

    return 0;
}