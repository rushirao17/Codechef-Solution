//Lead-Game Solution

#include <iostream>
using namespace std;
int
main ()
{
  int n,b,c,dif,max=0,sum1=0,sum2=0,winr,temp;
  cin>>n;
  while(n--)
    {
        cin>>b>>c;
        sum1 = sum1 + b;
        sum2 = sum2 + c;
        if(sum1>sum2){
	        dif = sum1 - sum2;
	        temp = 1;
        }
        else{
	        dif = sum2 - sum1;
	        temp = 2;
        }
        if (dif>max){
	        max = dif;
	        winr = temp;
	    }
    }
    cout<<winr<<" "<<max;
    return 0;
}
