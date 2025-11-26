#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    cin>>s;
    cin>>t;
    string revs=s;
    reverse(revs.begin(),revs.end());
    if(revs==t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}