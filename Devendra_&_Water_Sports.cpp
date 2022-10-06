#include <iostream>
using namespace std;

int main() {
	int n,i,a,b,c,d,e,x,y;
	cin>>n;
	for(i=1;i<=n;i++){
	    cin>>a>>b>>c>>d>>e;
    	x=a-b;
    	y=(c+d+e);
        if(x>=y){
    	   cout<<"Yes"<<endl;}
    	else{
    	   cout<<"No"<<endl;
    	}
	}
	return 0;
}
