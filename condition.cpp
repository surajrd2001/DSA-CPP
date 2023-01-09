#include<bits/stdc++.h>

using namespace std;

int main(){

    char A;
    cout<<"enter value of A"<<endl;
    cin>>A;

    if ((A>=48)&&(A<=57)){
        cout<<"A is Integer"<<endl;
    }
    else if ((A>=65)&&(A<=90))
    {
        cout<<"A is upper case character"<<endl;
    }
    else if ((A>=97)&&(A<=122))
    {
        cout<<"A is lower case character"<<endl;
    }
    
    return 0;
    
}