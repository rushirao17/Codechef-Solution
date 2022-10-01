//List_of_Book Solution

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<long long int> arr;
	for(int i=0;i<n;i++){
	    long long int t;
	    cin>>t;
	    arr.push_back(t);
	}
	int m=0;
	cin>>m;
	vector<int> temp;
	for(int i=0;i<m;i++){
	    int t;
	    cin>>t;
	    temp.push_back(t);
	}
	for(int i=0;i<m;i++){
	    cout<<arr[temp[i]-1]<<endl;
	    for(int j=temp[i]-1;j<n-i;j++){
	        arr[j]=arr[j+1];
	    }
	}
	return 0;
}
