#include <iostream>
using namespace std;

int main() {
	int n,i,a,b,c,d,e,f;
	cin>>n;
	for(i=1;i<=n;i++){
	    cin>>a>>b>>c>>d>>e>>f;
	    
	    if((a<=b and c<=d and e>=f)){
	        cout<<"YES"<<endl;}
	    
	    else{
	        cout<<"NO"<<endl;}
	}
	return 0;
}
