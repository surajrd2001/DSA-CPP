#include <bits/stdc++.h>
using namespace std;

bool LinerSearch(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
            break;
        }
    }

    return 0;
}

int main()
{
    int size = 10;
    int key;
    int arr[10] = {1, 32, 45, 2, 8, 9, 0, 55, 6, 43};

    cout << "Enter the key you want to search" << endl;
    cin >> key;

    bool find = LinerSearch(arr, size, key);

    if (find)
        cout << "element is present" << endl;

    else
        cout << "element is absent" << endl;
    return 0;
}