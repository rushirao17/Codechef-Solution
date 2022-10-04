#include <iostream>
using namespace std;

int main() {
	int n,i;
	int a,b,c;
	cin>>n;
	for(i=1;i<=n;i++){
	    cin>>a>>b>>c;
	               
	    if((b*3)-(a-b)>=c){
	        cout<<"Pass"<<endl;}
	       
	    else {
	        cout<<"Fail"<<endl;
	    }
	}
	return 0;
}
