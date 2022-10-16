#include <iostream>
using namespace std;

int main(){
    int i,n;
    float a,b,c,d;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b>>c>>d;
        float x=(a*a)/(c*c*c);
        float y=(b*b)/(d*d*d);
        if(x==y){
            cout<<"YES"<<endl;}
        else{
            cout<<"NO"<<endl;
        }
    }
}
