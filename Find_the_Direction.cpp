#include <iostream>
using namespace std;

int main(){
    int n,i,a,b,c,d,x,y;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a;
        x=(a%4);
        if(x==1){cout<<"East"<<endl;}
        else if(x==2){cout<<"South"<<endl;}
        else if(x==3){cout<<"West"<<endl;}
        else{cout<<"North"<<endl;}
}
    return 0;
}
