#include <iostream>
using namespace std;

int main() {
	int n,i,j,a,b,c,d,e,x,y;
	cin>>a;
    for(j=10;j>=1;--j){
        y=a%j;
        if(y==0){
            cout<<j<<endl;
            break;}
    }
	return 0;
}
