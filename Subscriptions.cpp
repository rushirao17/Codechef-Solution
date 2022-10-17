#include <iostream>
using namespace std;

int main(){
    int i,n,a,b;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        if(a==1){
            cout<<b<<endl;}
        else if(a>1 and a%6==0){
            cout<<(a/6)*b<<endl;}
        else{
            cout<<((a/6)+1)*b<<endl;}
    }
    return 0;
}
