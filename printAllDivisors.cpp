// Time complexity O(sqrt(n))
#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if((n/i)!=i){
                cout<<n/i<<" ";   // Important Line 
            }
        }
    }
}