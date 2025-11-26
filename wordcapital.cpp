#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=97;i<=122;i++){
        if(s.front()==i){
            s.front()=s.front()-32;
        }
    }
    cout<<s;
    return 0;
}