#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key);
int main(void)
{
    int n,key,i;
    cout<<"Enter The Array Size :"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter The Desired Number :\n";
    cin>>key;
    cout<<linearSearch(arr,n,key)<<endl;
    return 0;

}

int linearSearch(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}