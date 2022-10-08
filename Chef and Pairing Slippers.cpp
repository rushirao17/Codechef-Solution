#include <iostream>
using namespace std;

int main() {
	int i,n,a,b,c;
	cin>>n;
	for(i=1;i<=n;i++){
	    cin>>a>>b>>c;
	    int x=a-b;
	    if(x<b){
	        cout<<x*c<<endl;
	    }else{cout<<b*c<<endl;}
	}
	return 0;
}
