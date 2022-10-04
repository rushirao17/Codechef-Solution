#include <iostream>
using namespace std;

int main() {
	int n,i,d;
	int a,b,c;
	cin>>n;
	for(i=1;i<=n;i++){
	    cin>>a>>b>>c>>d;
	    if((a==c or a==d) and (b==d or b==c)){
	        cout<<"0"<<endl;
	    }
	    else if((a==c or a==d) or (b==d or b==c)){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<"2"<<endl;}
	}
	return 0;
}
