#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	     char n;
	    cin>>n;
	    if(n=='b' || n=='B'){
	        cout<<"BattleShip";
	    }
	    else if(n=='c' || n=='C'){
	        cout<<"Cruiser";
	    }
	    else if(n=='d' || n=='D'){
	        cout<<"Destroyer";
	    }
	    else if(n=='f' || n=='F'){
	        cout<<"Frigate";
	    }
	    cout<<endl;
	}
	return 0;
}
