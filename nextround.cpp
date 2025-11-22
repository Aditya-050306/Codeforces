#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int count=0;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        
    }
    for(int i=1;i<=n;i++){
        
        if(arr[k]<=arr[i]){
            if(arr[i]>0){
            count++;
            }
        }
        
    }
    cout<<count;
    return 0;
}