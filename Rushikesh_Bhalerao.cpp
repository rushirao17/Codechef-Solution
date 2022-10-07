#include <iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        int a,b,m,x,y;
	    cin>>a>>b>>m;
	    x = abs(b-a);
	    y = m-abs(a-b);
	    if(x <= y)
	    cout<<x<<endl;
	    else
	    cout<<y<<endl;
    }

    return 0;
}
