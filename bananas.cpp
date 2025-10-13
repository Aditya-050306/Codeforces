#include<iostream>
using namespace std;
int main(){
    int a,b,i=1;
    cin>>a>>b;
    do{
        a*=3*i;
        b*=2*i;
        i++;
    }while(a<=b);
    
    cout<<i-1<<endl;
    return 0;
}