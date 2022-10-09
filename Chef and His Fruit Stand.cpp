#include <iostream>
using namespace std;

int main(){
    int n,i,j,k,a,b,x,y;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        
        if(b>=(a/2)){
            cout<<a/2<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }

    return 0;
}
