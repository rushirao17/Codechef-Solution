#include <iostream>
using namespace std;
 
int main () {
    int num,a,b,c;
    cin >> num;
    for (int i = 1; i <= num; i++){
        cin>>a>>b>>c;
        int z=b-a;
        cout<<z/c<<endl;
    }

}


