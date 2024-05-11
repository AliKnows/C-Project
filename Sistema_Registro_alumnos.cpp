#include <iostream>

using namespace std;
int main() {
	
	 char escala;
	 int alumnosTotal;
	int alumnosA ,alumnosB = 0, alumnosC;
	double importTotal;
	double importeA ,importeB,importeC; 
	 
	 while(true){
	 	while (true) {
	 	
	cout<<"Consejo: Ingrese los numeros correspondientes"<<endl;
	 cout<<"MENU DE OPCIONES \n 1. Escala A \n 2. Escala B \n 3. Escala C \n 4. Reportes  \n 5. Salir \n ";cin>>escala;
	  
	  
	
      if (escala != '1' && escala != '2' && escala != '3' && escala != '4' && escala != '5') {
      cout << "ERROR: Escala no valida. Intente nuevamente." << endl;
    } else {
      
      switch (escala) {
        case '1':
        alumnosA = alumnosA +1;
        importeA = 20 *alumnosA;
        
        cout << "Numero de alumnos en la escala A: " << alumnosA << endl;
         cout << "Importe recaudado por la escala A: " << importeA << endl;
        
        
          break;
        case '2':
    	alumnosB = alumnosB +1;
         importeB = 30 * alumnosB;
    
        
         cout << "Numero de alumnos en la escala B: " << alumnosB << endl;
         cout << "Importe recaudado por la escala B: " << importeB << endl;
         
          break;
        case '3':
        
		alumnosC = alumnosC +1;
      	importeC = 50*alumnosC;
		
        
        cout << "Numero de alumnos en la escala C: " << alumnosC << endl;
        cout << "Importe recaudado por la escala C: " << importeC << endl;
          break;
  
		case'4':
		alumnosTotal = alumnosA+alumnosB+alumnosC;
		importTotal = importeA +importeB +importeC;
		
	cout << "Resumen de matriculas:" << endl;
   cout << "Numero de alumnos en la escala A: " << alumnosA << endl;
   cout << "Numero de alumnos en la escala B: " << alumnosB << endl;
   cout << "Numero de alumnos en la escala C: " << alumnosC << endl;
   cout << "Total de alumnos matriculados: " << alumnosTotal << endl;
   cout<<"   "<<endl;
   
   
    cout << "Total del importe recaudado: " << importTotal << endl;
    cout << "Importe recaudado por la escala A: " << importeA << endl;
    cout << "Importe recaudado por la escala B: " << importeB << endl;
    cout << "Importe recaudado por la escala C: " << importeC << endl;
       cout<<"   "<<endl;
 
 	if(alumnosA>alumnosB && alumnosA >alumnosC){
 		
 		 cout << "Los que mas se matricularon fueron los de la escala A con " << alumnosA <<" Matriculados"<< endl;
	 }else if(alumnosB>alumnosA && alumnosB>alumnosC){
	 	 cout << "Los que mas se matricularon fueron los de la escala B con " << alumnosB <<" Matriculados"<< endl;
	 	
	 }else{
	 	cout << "Los que mas se matricularon fueron los de la escala C con " << alumnosC <<" Matriculados" << endl;
	 }
        break;

        case '5':
        return 0;
        break;
	  }
      break;
           }
               }

	 }
        
    
}