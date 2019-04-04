#include <iostream>
using namespace std;
int main(){
	int x, y, z;
	int mayor=z, medio=y, menor=x;
	cin>>x;
	cin>>y;
	cin>>z;
	if(x>y){
		menor=y;
		medio=x;
	}
	if(x>z){
		mayor=x;
		menor=z;
	}
	if(y>z){
		mayor=y;
		medio=z;
	}
	cout<<mayor<<", "<<medio<<", "<<menor<<endl;
	return 0;
}
