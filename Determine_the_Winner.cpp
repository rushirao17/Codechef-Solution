#include <bits/stdc++.h>


using namespace std;
int main() {
int t;
cin>>t;
while(t--){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        int p,q;
        
        if(w>=x){
            p=w;
            if(y>=z){
                q=y;
                if(p<q){
                    cout<<"p"<<endl;
                }else if(q<p){
                    cout<<"q"<<endl;}
                else{cout<<"Tie"<<endl;
                }
            }
            else{
                q=z;
                if(p<q){
                    cout<<"p"<<endl;
                }else if(q<p){
                    cout<<"q"<<endl;}
                else{cout<<"Tie"<<endl;
                }
            }}

            
        else{
            p=x;
            if(y>=z){q=y;
                if(p<q){
                    cout<<"p"<<endl;
                }else if(q<p){
                    cout<<"q"<<endl;}
                else{cout<<"Tie"<<endl;
                }
            }
            else{q=z;
            
                if(p<q){
                    cout<<"p"<<endl;
                }else if(q<p){
                    cout<<"q"<<endl;}
                else{cout<<"Tie"<<endl;
                }
            }}
}
	return 0;
}
