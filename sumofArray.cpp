#include<bits/stdc++.h>
using namespace std;

int arrySum(int arr[],int n)
{
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }

    return sum;
    
}
int main()
{
    int t;
    // cout<<"enter array size";
    // cin>>t;
    int arr[5]={1,2,3};
    
    cout<<arr[2];
    //  cout<<"enter array elements";
    // for (int i = 0; i <t ; i++)
    // {
    //     cin>>arr[i];
    // }

 

    // cout<<arrySum(arr,t);
    
   
   
    return 0;
}