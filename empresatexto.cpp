#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdlib.h>

/*datos que debe llevar el programa Codigo Empleado,
Nombre Empleado,
Puesto,
Departamento,
Salario*/

using namespace std;
struct empresa{
	int codigo;
	string nombre;
	string puesto;
	string departamento;
	float salario;
	
};

//void escribir_datos_archivo();
//void read_file();
void escribir();
//void mp();//menu principal
//std::string escribir;
int main(){
	
		ofstream archivo;
		string nombrearchivo;
		fflush(stdin);//borra el buffer existente
		cout<<"Indique el nombre del archivo: ";
		getline(cin,nombrearchivo);
		
		//comprobar archivo
		if(archivo.fail()){
			cout<<"No se pudo abrir el archivo";
			exit(1);
		}
		system("CLS");
			int codigo;
			string nombre;
			string puesto;
			string departamento;
			float salario;
				//Ingreso de datos
					cout<<"Ingrese el codigo de empleado: "<<endl;
					cin>>codigo;
					fflush(stdin);
					cout<<"Ingrese el nombre del empleado: "<<endl;
					cin>>nombre;
					cout<<"Ingrese el nombre del puesto que ocupa: "<<endl;
					cin>>puesto;
					cout<<"Ingrese el salario devengado: "<<endl;
					cin>>salario;
					cout<<"Ingrese el nombre del departamento donde trabaja: "<<endl;
					cin>>departamento;
					
					//graba datos a la estructura
					/*	ingreso.codigo = codigo;
						ingreso.nombre = nombre;
						ingreso.puesto = puesto;
						ingreso.salario = salario;
						ingreso.departamento = departamento;*/
					//abrir, grabar datos al archivo y cerrarlo
				
		archivo.open("nombrearchivo.txt", ios::app);
					archivo<<codigo<<"\t"<<nombre<<"\t"<<puesto<<"\t"<<salario<<"\t"<<departamento<<endl;
					archivo.close();
}

