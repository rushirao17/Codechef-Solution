#include <bits/stdc++.h>
using namespace std;

class Main {
public:
    int getSum(int n)
    {
        int sum;
        for (sum = 0; n > 0; sum += n % 10, n /= 10);
        return sum;
    }
};
 
 
int main(){
    
    int number;
    cin>>number;
    for(int i=1;i<=number;i++){
        Main g;
        int n;
        cin>>n;
 
        cout << g.getSum(n)<<endl;
    }
}
