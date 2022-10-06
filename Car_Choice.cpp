#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        float a,b,c,d;
        double x,y;
        cin>>a>>b>>c>>d;
        x=c/a;
        y=d/b;
        if(x<y){
            cout<<-1<<endl;}
        else if(x>y){
            cout<<1<<endl;}
        else{
            cout<<0<<endl;
        }
    }
	return 0;
}
