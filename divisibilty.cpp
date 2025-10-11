#include<iostream>
using namespace std;
int main(){
    int t;
    
    cin>>t;
    while(t--){
        long long a,b,count=0;
        cin>>a>>b;
        count=a%b;
        if(count==0){
            cout<<0<<endl;              //Given numbers satisfies the required condition
        }
        else{
            cout<<b-count<<endl;        //Minimum number of test cases required
        }
 
    }
    return 0;
}