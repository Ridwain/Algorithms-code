// Time complexity is >>> log of fi to the power minimum of (a,b)
// Euclidean method for gcd
// gcd(a,b) == gcd(a%b,b) --> (a>b)

#include<iostream>
using namespace std;
int gcdEuclidean(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        } else{
            b=b%a;
        }
    }
    if(a==0){
        return b;
    }
    return a;
}


int main(void)
{
    int a,b;
    cin>>a>>b;
    int ans = gcdEuclidean(a,b);
    cout<<ans<<endl;
    
}