#include <iostream>
using namespace std;

int main(){
    int n,i,a,b,c;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b>>c;
        if(a<=(b*c)){
            cout<<1<<endl;}
        else if(a%(b*c)==0){
            cout<<a/(b*c)<<endl;
        }
        else{
            cout<<a/(b*c) + 1<<endl;}
    }

    return 0;
}
