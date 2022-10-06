#include <iostream>
using namespace std;

int main() {
	int n,i,a,b,x,y;
	cin>>a>>b;
	x=a*b;
	y=(a+b)*2;
    if(x>y){
	   cout<<"Area"<<endl;
       cout<<x<<endl;
    }
	else if(x<y){
	   cout<<"Peri"<<endl;
	   cout<<y<<endl;
	}
	else{
	   cout<<"Eq"<<endl;
	   cout<<x<<endl;
	}
	return 0;
}
