#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n);
int main(void)
{
    int i,n;
    cout<<"Enter The Array Size :"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Elements :"<<" ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sorted Array :"<<" ";
    bubbleSort(arr,n);
    cout<<"\n"<<endl;
    return 0;

}

void bubbleSort(int arr[],int n)
{
    int counter=1,i,temp;
    while(counter<n)
    {
        for(i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}