#include <iostream>
using namespace std;

int main(){
    int i,n,a1,b1,c1,a,b,c,T;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a1>>b1>>c1>>T>>a>>b>>c;
        if(a1<=a and b1<=b and c1<=c and T<=(a+b+c)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
