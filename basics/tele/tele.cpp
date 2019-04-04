#include <iostream>
#include <string>

using namespace std;
int main()
{
	int jug=0;
	int num=0;
	int z = 1;
	int contador = 0;
	int cambio = 0;
	cout<<"Ingrese la cantidad de jugadores \n";
	cin>>jug;
	cout<<"Ingrese los numeros: \n";
	for (int x=1;x <=jug;x++){
		cin>>num;
		if (x > 1){
			if (num != z){
				if (cambio == 0){
					contador = contador + 2;
					cambio = 1;
				} else {
					contador = contador +1;
				}
			} else {
				cambio = 0;
			}
		} 
		z = num;
	}
	cout<<"Sospechosos: "<<contador<<endl;
}
