#include<iostream>
using namespace std;
int main(){
    int t;
    
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n>2){
            cout<<(n-1)/2<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }   
    return 0;  
}