// Time Complexity is big O of sqrt of n

#include<iostream>
using namespace std;
int main(void)
{
    int n,count=0;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if((n/i)!=i){
                count++;
            }
        }
    }
    if(count==2){
        cout<<"Yes Prime"<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }

}