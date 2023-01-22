#include<bits/stdc++.h>
using namespace std;

int printmin(int arr[],int size){

    cout<<"Printing the array"<<endl;

   int mini= INT16_MAX;

    for (int i = 0; i < size; i++)
    {
    //    if(arr[i]<min)
    //       min=arr[i];

    mini=min(arr[i],mini);
    }
    
    return mini;
}

int printmax(int arr[], int size){
    cout<<"Printing the array"<<endl;

   int max= INT16_MIN;

    for (int i = 0; i < size; i++)
    {
       if(arr[i]>max)
          max=arr[i];
    }
    
    return max;
}
int main()
{
    int n=5;

    int arr[n]={1,2,3,4,5};
    
    cout<<printmin(arr,n);
    cout<<printmax(arr,n);
    return 0;
}