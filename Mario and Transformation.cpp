#include <iostream>
using namespace std;

int main(){
    int i,n,a;
    cin>>n;
    int v=1;
    for(i=1;i<=n;i++){
        cin>>a;
        if((v+a)%3==0){
            cout<<"SMALL"<<endl;}
        else if((v+a)%3==1){
            cout<<"NORMAL"<<endl;}
        else{cout<<"HUGE"<<endl;}
    }
    return 0;
}
