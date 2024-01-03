// Swapping With Recursion
#include<iostream>
using namespace std;
void swapping(int x, int arr[], int n){
    if(x>=n/2){
        return;
    } else{
        swap(arr[x],arr[n-x-1]);
        swapping(x+1,arr,n);
    }
}
int main(void)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapping(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}