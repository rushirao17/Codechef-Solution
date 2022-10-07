#include <iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        int count0 = 0; 
		int count1 = 0; 
		for(int i = 0;i < 7; i++){
		    int x;
		    cin>>x;
	        if(x==0){
	            count0++;}
          	else{
          	    count1++;}
		}  	    
          	    
		if(count1>count0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
    }

    return 0;
}
