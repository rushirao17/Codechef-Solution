#include <iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        int h,s;
        float c;
        cin>>h>>c>>s;
        if(h>50 and c<0.7 and s>5600){cout<<10<<endl;}
        else if(h>50 and c<0.7 and(s>5600 or s<=5600)){cout<<9<<endl;}
        else if((h>50 or h<=50) and c<0.7 and s>5600){cout<<8<<endl;}
        else if(h>50 and (c<0.7 or c>=0.7) and s>5600){cout<<7<<endl;}
        else if(h>50 or c<0.7 or s>5600){cout<<6<<endl;}
        else{cout<<5<<endl;}
    }

    return 0;
}
