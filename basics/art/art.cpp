#include <iostream>
using namespace std;
int main(){
	int N;
	string R="\nno\n";
	int cases;
	cin>>cases;
	for(int i=0;i<100;i++){
	cin>>N;
	int C;
	int l[N];
	while(N<3){
	cin>>N;
}
   for(int i=0;i<N;i++){
    cin>>C;
	l[i]=C;
   }
   for(int i=0;i<N;i++){
    cout<<l[i];
   }
   for(int i=0;i<N-2;i++){
    if(l[i+1]==l[i] && l[i+1]==l[i+2]){
        R="\nsi\n";
    }
   }
   if(R=="si"){
   	cout<<R;
   }
   else{
   	cout<<R;
   }
}
}
