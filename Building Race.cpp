#include <iostream>
using namespace std;

int main(){
    int n,i,a,b;
    float c,d;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b>>c>>d;
        float x=a/c;
        float y=b/d;
        
        if(x>y){cout<<"Chefina"<<endl;}
        else if(x==y){cout<<"Both"<<endl;}
        else{cout<<"Chef"<<endl;}
    }

    return 0;
}
