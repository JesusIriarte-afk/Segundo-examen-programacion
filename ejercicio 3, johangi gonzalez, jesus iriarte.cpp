#include <iostream>
using namespace std;

int main (){
	char nombre;
	int cant = 0;
	int total = 0;
	float peso = 0;
	float menor = 999999;
	float mayor = 0;
	int opcion = 0;
	float suma = 0;
	
	do{
		cout<<"que cantidad de deportistas hay?"<<endl;
		cin>>cant;
		
		for (int i=0; i<cant; i++){
			cout<<"ingrese el nombre"<<endl;
			cin>>nombre;
			
			cout<<"ingrese el peso"<<endl;
			cin>>peso;
			
			suma += peso;
			
			if (peso < menor){
				menor = peso;
				
			}else if(peso > mayor){
				mayor = peso;
			}
		}
		
		total = suma / cant;
		
		cout<<"el promedio de pesos es de = "<<total<<endl;
		cout<<"el peso menor es de = "<<menor<<endl;
		cout<<"el peso mayor es de = "<<mayor<<endl;
		cout<<"ingrese 1 si desea continuar o 0 si deswa finalizar"<<endl;
		
	}while (opcion!=0);
}
