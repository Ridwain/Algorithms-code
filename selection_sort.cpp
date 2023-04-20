#include<iostream>
using namespace std;
int main(void)
{
    int n,i,j,temp;
    cout<<"Enter The Array Size"<<":";
    cin>>n;
    int arr[n];
    cout<<"Enter The Elements :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"Sorted Array:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<endl;
    return 0;
}