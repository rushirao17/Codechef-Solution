#include <iostream>
using namespace std;

int main(){
    int n,i,a,b;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        int x=a/b;
        if(x>=0 and x%2==0 and a%b==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
