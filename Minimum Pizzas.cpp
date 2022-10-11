#include <iostream>
using namespace std;

int main(){
    int n,i,a,b;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        int x=a*b;
        if(x/4==0 and x%4<4){
            cout<<1<<endl;}
        else if(x/4>=1 and x%4==0){
            cout<<x/4<<endl;}
        else{cout<<(x/4)+1<<endl;}
    }

    return 0;
}
