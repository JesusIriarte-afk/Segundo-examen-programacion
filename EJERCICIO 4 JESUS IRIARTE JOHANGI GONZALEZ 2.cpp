#include <iostream>
using namespace std;
int main(){
	int numero = 0;
	int suma = 0;
	float opcion;
do{
suma = 0;

	cout <<"ingrese un numero entero positivo: ";
	cin>> numero;
	
	for (int i = 1; i < numero; i++ ){
		
		if (numero % i == 0){
			
			suma = suma+ i;
			
		}
	}
	
	if(suma == numero){
		
		cout<< numero << " Es un numero perfecto "<< endl;
		
	} else {
		
		cout<< numero << " es es un numero imperfecto " << endl;

}

cout <<" coloque 0 para culminar o cualquier numero para seguir"<< endl;
cin >> opcion;


} while (opcion != 0);
return 0;
}
