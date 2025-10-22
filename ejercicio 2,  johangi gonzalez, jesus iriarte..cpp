#include <iostream>
using namespace std;

int main (){
	
	int cant = 0;
	float precio = 0;
	float bajo = 0;
	float medio = 0;
	float alto = 0;
	int opcion = 0;
	
	do{
		cout<<"que cantidad de carros se vendio en el mes?"<<endl;
		cin>>cant;
		
		for(int i=0; i<cant; i++){
			
			cout<<"ingrese el precio del carro"<<endl;
		cin>>precio;
		
		if (precio <= 25000){
			bajo++;
			
		}else if (precio >= 75000 && precio <= 120000){
			medio++;
			
		} else if (precio >= 120000){
			alto++;
			
		}
		
		}
		

		cout<<" en este mes se vendieron "<<cant<<" de carros, entre esos estuvieron vendidos:"<<endl;
		cout<<bajo<<" carros con precios menores a 25mil"<<endl;
		cout<<medio<<" carros con precios entre 75mi y 120mil"<<endl;
		cout<<alto<<" carros con precios mayores a 120mil"<<endl;
		
		cout<<"ingrese 1 si desea continuar o 0 si desea culminar :)"<<endl;
		cin>>opcion;
		
	}while(opcion!=0);
	
	return 0;
}
