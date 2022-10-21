#include <iostream>
using namespace std;

int main(){
    int n,i,a,b,c;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b>>c;
        if((a+b)%2==1 or (b+c)%2==1 or (a+c)%2==1){
            cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }

    return 0;
}
