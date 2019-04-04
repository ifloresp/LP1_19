#include <iostream>
using namespace std;
int square(int x){
	int z=0;
	for(int i=0;i<x;i++){
		z=z+x;
	}
	return z;
}
int main(){
	int y;
	cin>>y;
	cout<<square(y)<<endl;
	return 0;
}
