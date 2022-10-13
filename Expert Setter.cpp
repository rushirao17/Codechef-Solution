#include <iostream>
using namespace std;

int main() {
	int n,i;
	float a,b;
	cin>>n;
	for(i=1;i<=n;i++){
	    cin>>a>>b;
	    if(b/a>=0.5){
	        cout<<"YES"<<endl;}
	    else{cout<<"No"<<endl;}
	}
	return 0;
}
