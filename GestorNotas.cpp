#include <iostream>
#include <cmath>

using namespace std;
//variables globales
int apro=0,desap=0;
int mascul=0,femen=0;
struct alumno
{
	string codigo;
	string nombre;
	char sexo;
	float practicas;
	float parcial;
	float final;
	
};

int cantidadPerson();
float promedioNotas(float practicas, float parcial, float final);

void leerSexo(char sexo);

int main(int args, char const *argv[]){
	
	//variables
	
	//
	int cantAlumnos;
	cantAlumnos = cantidadPerson();
	
	alumno Alum[cantAlumnos];
	
	cout<<"------- INGRESE DATOS DEL ALUMNO ------- \n \n";
	
	
for (int i = 0; i < cantAlumnos; i++)
    {
        cout<<"Ingrese el Codigo del "<<i+1<<" Alumno: \n"; cin>> Alum[i].codigo;
        cout<<"Ingrese el Nombre del "<<i+1<<" Alumno: \n"; cin>> Alum[i].nombre;
        cout<<"Ingrese el Sexo del "<<i+1<<" Alumno: [M o F] \n"; cin>> Alum[i].sexo;
        cout<<"Ingrese La nota de practicas del "<<i+1<<" Alumno: \n"; cin>> Alum[i].practicas;
        cout<<"Ingrese La nota Parcial del "<<i+1<<" Alumno: \n"; cin>> Alum[i].parcial;
        cout<<"Ingrese La nota Final del "<<i+1<<" Alumno: \n"; cin>> Alum[i].final;

        

    }
	
//calcular promedio

cout<<"-------- PROMEDIO NOTAS------------ \n \n ";
for(int i =0 ; i< cantAlumnos; i++){
	
	float prom;
	
	
	prom =	promedioNotas(Alum[i].practicas,Alum[i].parcial, Alum[i].final);
	
	
	cout<<"El promedio del "<< i+1<< "  Alumno es: \n"<<prom<<endl<<endl;
	
	if(prom>=11){
		
		
		apro++;
		
	}else{
	
		desap++;
		
	}
	
	leerSexo(Alum[i].sexo);
	
	
}

cout<<"----------------- \n";

cout<<"El numero de alumnos Aprobados es:"<<apro<<endl;
cout<<"El numero de alumnos desaprobados es: \n"<< desap;
cout<<"----------------- \n";





	return 0;

}
	
	
	

int cantidadPerson(){
	int numAl;
	do{
		
	
	cout<<"Ingrese el numero de alumnos: ";
	cin>>numAl;
	
		
		
		
		
		
	}while(numAl>40 || numAl<0);
	
	return numAl;
}

float promedioNotas(float practicas, float parcial, float final){
	
	float prom;

	prom=(practicas	*2+parcial*2+final*3)/6;
	return prom;
	
}
	
	
void leerSexo(char sexo){
	
//	if(sexo == m || sexo == M){
//		mascul++;
//		
//		
//	}if else(sexo == f || sexo ==F){
//		
//		femen++;
//		
//	}
//	
	
}
	

