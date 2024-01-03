// String palindrome with recursion
// Time Complexity O(n/2)

#include<iostream>
using namespace std;
bool palin(string str,int i){
    int n = str.size();
    if(i>=n/2){
        return true;
    }
    if(str[i]!=str[n-i-1]){
        return false;
    }
    return palin(str,i+1);
}
int main(void)
{
    string str;
    cin>>str;
    bool ans = palin(str,0);
    if(ans){
        cout<<"Yes"<<endl;
    } else{
        cout<<"No"<<endl;
    }
}