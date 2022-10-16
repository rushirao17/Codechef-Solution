#include <iostream>
using namespace std;

int main(){
    int i,n,a,b,c;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b>>c;
        int x=2*(180+a);
        int y=b+c;
        cout<<x-y<<endl;
    }
}
