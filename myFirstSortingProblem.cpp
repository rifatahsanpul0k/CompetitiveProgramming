#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    vector<int> arr(2*n);
    for (int i = 0; i < 2*n ; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 2*n-1; i+=2)
    {   
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    for (int i = 0; i < 2*n ; i++)
    {
        cout<<arr[i]<<" ";
        if (i%2!=0)
        {
            cout<<"\n";
        }
    }
    
}