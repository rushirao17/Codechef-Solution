#include <iostream>
using namespace std;

int main() {
	int n,i,w,z,x,y;
	cin>>n;
	for(i=1;i<=n;i++){
	    cin>>w;
	    int count10=0;
	    int count5=0;
	    int a=w/10;
	    if(w>=10 and w/10>=0 and w%10==0){
	        cout<<w/10<<endl;
	    }
	    else if( w>=5 and w/5>=0 and w%5==0){
	        cout<<a + (w-(a*10))/5<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	    
	    
	    
	  
	    
	}
	return 0;
}
