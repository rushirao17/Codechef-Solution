#include <iostream>
using namespace std;

int main(){
    int i,n,A,B,a1,a2,a3,a4,a5,b1,b2,b3,b4,b5;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a1>>b1>>a2>>b2>>a3>>b3>>a4>>b4>>a5>>b5;
        A=a1+a2+a3+a4+a5;
        B=b1+b2+b3+b4+b5;
        
        if(A>B){
            cout<<1<<endl;}
        else if(A==B){cout<<0<<endl;}
        else{
            cout<<2<<endl;
        }
    }

    return 0;
}
