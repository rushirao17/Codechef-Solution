#include <iostream>
using namespace std;

int main(){
    int n,i,a,b,c;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b>>c;
        
        if(a>=b and a>=c){
            cout<<a<<endl;
        }
        else if(b>=a and b>=c){
            cout<<b<<endl;
        }else{
            cout<<c<<endl;
        }
    }

    return 0;
}
