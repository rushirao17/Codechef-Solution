#include <iostream>
using namespace std;

int main(){
    int n,i,a,b,c;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b>>c;
        if(c/b <=a){
            cout<<c/b<<endl;
        }
        else if(c/b>a){
            cout<<a<<endl;
        }else{
            cout<<a<<endl;
        }
    }

    return 0;
}
