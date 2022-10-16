#include <iostream>
using namespace std;

int main(){
    int i,n,a,b,c;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b>>c;
        int x=a%c;
        int y=b%c;
        if(x==0 and y==0){
            cout<<"Yes"<<endl;}
        else{
            cout<<"No"<<endl;
        }
    }
}
