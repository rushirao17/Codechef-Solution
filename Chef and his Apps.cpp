#include <iostream>
using namespace std;

int main() {
	int t,s,a,b,c,sum,sub1,sub2;
	cin>>t;
	while(t){
	    cin>>s>>a>>b>>c;
	    sum=a+b+c;
	    sub1=s-a;
	    sub2=s-b;
        if(s>=sum){
            cout<<0<<endl;}
        else if(sub1>=c ||sub2>=c){
            cout<<1<<endl;
        }
        else if(sum>s){
            cout<<2<<endl;
        }
	    t--;
	}
	return 0;
}
