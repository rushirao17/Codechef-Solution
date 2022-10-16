#include <iostream>
using namespace std;

int main(){
    int i,n,a,b,c,d,e,f;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b>>c>>d>>e>>f;
        int x=a+b;
        int y=c+d;
        int z=e+f;
        if(x>y and x>z){
            cout<<x<<endl;}
        else if(y>x and y>z){
            cout<<y<<endl;}
        else{
            cout<<z<<endl;
        }
    }
}
