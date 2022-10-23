#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t,a,b;
	int arr[10]={6,2,5,5,4,5,6,3,7,6};
	cin>>t;
	while(t--)
	{   
	    cin>>a>>b;
	    int z=a+b;
	    int count=0;
	    int size = trunc(log10(z)) + 1;
	    for(int i=0;i<size;i++){
	        int w=z%10;
	        count=count+arr[w];
	        z=z/10;
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
