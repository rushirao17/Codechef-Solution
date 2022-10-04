#include <iostream>
using namespace std;

int main() {
	int n,i,a,b,x,y;
	cin>>n;
	for(i=1;i<=n;i++){
	    cin>>a>>b;
	    
	    if(b>a){
	        cout<<"0"<<endl;
	    }
	    else{
	        cout<<a/b<<endl;
	    }
	    
	}
	return 0;
}
