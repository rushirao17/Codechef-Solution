#include <iostream>
using namespace std;

int main(){
    int i,n,a,b,c,d,s,t;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b>>c;
        if(a!=b or b!=c or c!=a){
            cout<<1<<endl;
        }
        else{cout<<0<<endl;}
    }

    return 0;
}
