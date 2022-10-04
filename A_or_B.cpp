#include <iostream>
using namespace std;

int main() {
	int n,i;
	int a,b;
	cin>>n;
	for(i=1;i<=n;i++){
	    cin>>a>>b;
	    
	    
	    
	    int x=a+b;
	    int y=500-(a*2);
	    int z=1000-(x*4);
	    int p=y+z;
	    
	    
	    int k=a+b;
	    int l=1000-(b*4);
	    int m=500-(k*2);
	    int o=l+m;
	    
	    if(p>=o){
	        cout<<p<<endl;}
	    else{
	        cout<<o<<endl;}
	}
	return 0;
}
