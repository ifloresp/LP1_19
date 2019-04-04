#include <iostream>
using namespace std;

int main() 
{
   const double cm_per_inch=2.54 ;
   int length=1;
   char unit='a';
   cout<<"Porfavor ingrese una longitud y su unidad(c o i):\n";
   cin>>length>>unit;
   if (unit=='i')
    cout<<length<<"in--"<<cm-per-inch*length<<”cm\n”
   else if (unit=='c')
    cout<<length<<"cm--"<<length/cmperinch<< "in/n”;
   else  
    cout<<"Lo siento, no conozco una unidad llamada"<<unit<<"\n";
}
