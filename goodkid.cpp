#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,idx;
        cin>>n;
        long long product=1;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        idx = min_element(arr, arr + n) - arr;
        arr[idx]=arr[idx]+1;
        for(int i=0;i<n;i++){
            product*=arr[i];
        }
        cout<<product<<endl;
    }
    return 0;
}