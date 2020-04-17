#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<ctype.h>

using namespace std;

class menu_principal{

protected:
 //Se heredar�n solo las variables a utilizar
 int omp;
 char oh1, ohi1, ohi2, ohi3, ohi4, ohi5, ohi6, ohi7, ohi8, ohi9;
 //declarar variables para las clases hijas
 
public:
 void mostrar(void);
 		
};

class hija_1:protected menu_principal{
	public:
		void mostrar1(void);
		void hi1(void);
		void hi2(void);
		void hi3(void);
		void hi4(void);
		void hi5(void);
		void hi6(void);
		void hi7(void);
		void hi8(void);
		void hi9(void);
};

void menu_principal::mostrar(void){
	
	hija_1 objh1;
	char rpta;
	
	do{
		
	system("cls");
	system ("color  2F");
		cout    <<endl << "\t\t\t ** INTELIGENCIAS MULTIPLES ** " <<endl <<endl<<endl
				<< " (1) "<<char(168)<<"Que son las inteligencias multiples? " <<endl <<endl
				<< " (2) "<<char(168)<<"Cuales son los hemisferios cerebrales y sus cuadrantes? " <<endl <<endl
				<< " (3) "<<char(168)<<"Que son los estilos de aprendizaje? " <<endl <<endl
				<< " (4) Realiza alguno de los test :) " <<endl <<endl
				<< " (5) Aprende a potencializar alguna de tus inteligencias " <<endl <<endl
				<< " (6) Salir "<<endl<<endl<<endl
				<<" \tINGRESE LA OPCION QUE DESEA: " ;
		
		cin     >> omp;
		switch(omp)
		{
			case 1:
				objh1.mostrar1();				
				break;
			case 2:
				system("cls");
				system ("color  5A");
				
				break;
			case 3:
				system("cls");
				system ("color  4D");
				
				break;
			case 4:
				system("cls");
				system ("color  0E");
				
				break;
			case 5:
				system("cls");
				system ("color  6F");
				
				break;
			case 6:
				system("cls");
				system ("color  7C");
				
				break;
			default:
				system("cls");
				system ("color  8B");
				cout << " \n u.u Esa opcion no existe :(" << endl << endl;
				break;
				
		}
			 
                     
        cout<<"\n\n\t"<<char(168)<<"DESEA VOLVER A UTILIZAR EL PROGRAMA?"<<endl <<"\t S/N : "<<endl;
        cin>>rpta;
        
        }while(rpta=='S'||rpta=='s');
}

void hija_1::mostrar1(void){
	
	menu_principal objmp;
	hija_1 objh1;
	
	system("cls");
	system ("color  1B");
	
	cout    <<endl << "\t\t\t ** INTELIGENCIAS MULTIPLES ** " <<endl <<endl<<endl
	
			<< "Howard Gardner (psic"<<char(162)<<"logo, investigador y profesor de la universidad de Harvard) formula su teor"<<char(161)<<"a de las inteligencias m"<<char(163)<<"ltiples, en la cual afirma que las personas tenemos distintas inteligencias que podemos desarrollar con la adecuada pr"<<char(160)<<"ctica o ejercicio; sostiene que todas las personas tenemos diferentes combinaciones de inteligencias, es decir, algunos desarrollamos m"<<char(160)<<"s unas que otras. Tambi"<<char(130)<<"n sostiene que para que una habilidad sea considerada 'inteligencia', debe cumplir con ciertos criterios que se enumeran a continuaci"<<char(162)<<"n:"<<endl
	
<< "1.	Que corresponda a una habilidad innata." <<endl
<< "2.	Que se localice en una parte del cerebro (en caso de da"<<char(164)<<"o en esa parte, hay ausencia de la habilidad)." <<endl
<< "3.	Que tenga una funci"<<char(162)<<"n social (complementando a Gardner, dir"<<char(161)<<"amos que ecol"<<char(162)<<"gica)." <<endl
<< "4. Que los conocimientos puedan estar sistematizados y documentados." <<endl
<< "5. Que se resuelvan problemas del grupo social, o que sean productos apreciados por el grupo." <<endl

<< "Lo anterior ubica a las habilidades como inteligencias individuales y no como componentes de la inteligencia; sin embargo, lo m"<<char(160)<<"s importante en Gardner es que contradici"<<char(130)<<"ndose a este planteamiento y aunque no lo diga expl"<<char(161)<<"citamente, agrupa las habilidades en distintas inteligencias." <<endl<<endl
			
			<<"Elige la inteligencia de la que deseas conocer mas o alguna otra opcion: "<<endl<<endl
				<< " (1) Inteligencia Logico-matematica" <<endl <<endl
				<< " (2) Inteligencia Ling"<<char(129)<<"istica" <<endl <<endl
				<< " (3) Inteligencia Visual-espacial" <<endl <<endl
				<< " (4) Inteligencia Musical" <<endl <<endl
				<< " (5) Inteligencia Kinestesico-corporal" <<endl <<endl
				<< " (6) Inteligencia Interpersonal" <<endl <<endl
				<< " (7) Inteligencia Intrapersonal" <<endl <<endl
				<< " (8) Inteligencia Naturalista" <<endl <<endl
				<< " (9) Inteligencia Espiritual" <<endl <<endl<<endl
				<< " \t(A) Regresa al menu principal"<<endl <<endl
				<< " \t(B) Realiza algun test "<<endl <<endl<<endl
				<<" INGRESE LA OPCION QUE DESEA: " ;
				
	cin>>oh1;
	
	 if(oh1=='a'||oh1=='b'){
	 	
	 	char tempoh1=toupper(oh1);
	 	oh1=tempoh1;	
	 }
	 
	 switch(oh1){
	 	
	 	case '1':
	 		objh1.hi1();
	 		break;
	 	case '2':
	 		objh1.hi2();
	 		break;
	 	case '3':
	 		objh1.hi3();
	 		break;
	 	case '4':
	 		objh1.hi4();
	 		break;
	 	case '5':
	 		objh1.hi5();
	 		break;
	 	case '6':
	 		objh1.hi6();
	 		break;
	 	case '7':
	 		objh1.hi7();
	 		break;
	 	case '8':
	 		objh1.hi8();
	 		break;
	 	case '9':
	 		objh1.hi9();
	 		break;
	 		
	 	case 'A': 		
	 		objmp.mostrar();
	 		break;
	 	case 'B':
	 		
	 		break;
	 	default:
	 		system("cls");
	 		cout << " \n u.u Esa opcion no existe :(" <<endl<<endl;
			system("pause");
	 		objh1.mostrar1();
	 		break;
	 }
	
				
}

void hija_1::hi1(){

	
	hija_1 objh1;
	system ("color  B1");
	system ("cls");
	
	cout    <<endl << "\t\t\t ** INTELIGENCIA LOGICO-MATEMATICA ** " <<endl <<endl<<endl
		
			<< "" /*Informaci�n sobre esta inteligencia*/ <<endl 
				
				<< " \t(1) Regresa al menu anterior " <<endl <<endl
				<< " \t(2) Realiza algun test " <<endl <<endl
				<< " \t(3) Aprende a potencializar esta inteligencia " <<endl<<endl<<endl
				<<" INGRESE LA OPCION QUE DESEA: " ;
		
		cin     >> ohi1;

	 switch(ohi1){
	 	
	 	case '1':
	 		objh1.mostrar1();
	 		break;
	 	case '2':
	 		
	 		break;
	 	case '3':
	 		
	 		break;
	 	default:
	 		system("cls");
	 		cout << " \n u.u Esa opcion no existe :(" <<endl<<endl;
			system("pause");
	 		objh1.hi1();
	 		break;
	 }	
}

void hija_1::hi2(){
	
	hija_1 objh1;
	system ("color  B1");
	system ("cls");
	
	cout    <<endl << "\t\t\t ** INTELIGENCIA LING"<<char(154)<<"ISTICA ** " <<endl <<endl<<endl
		
			<< "" /*Informaci�n sobre esta inteligencia*/ <<endl 
				
				<< " \t(1) Regresa al menu anterior " <<endl <<endl
				<< " \t(2) Realiza algun test " <<endl <<endl
				<< " \t(3) Aprende a potencializar esta inteligencia " <<endl<<endl<<endl
				<<" INGRESE LA OPCION QUE DESEA: " ;
		
		cin     >> ohi1;

	 switch(ohi1){
	 	
	 	case '1':
	 		objh1.mostrar1();
	 		break;
	 	case '2':
	 		
	 		break;
	 	case '3':
	 		
	 		break;
	 	default:
	 		system("cls");
	 		cout << " \n u.u Esa opcion no existe :(" <<endl<<endl;
			system("pause");
	 		objh1.hi2();
	 		break;	
      }
}

void hija_1::hi3(){
	
	hija_1 objh1;
	system ("color  B1");
	system ("cls");
	
	cout    <<endl << "\t\t\t ** INTELIGENCIA VISUAL-ESPACIAL ** " <<endl <<endl<<endl
		
			<< "" /*Informaci�n sobre esta inteligencia*/ <<endl 
				
				<< " \t(1) Regresa al menu anterior " <<endl <<endl
				<< " \t(2) Realiza algun test " <<endl <<endl
				<< " \t(3) Aprende a potencializar esta inteligencia " <<endl<<endl<<endl
				<<" INGRESE LA OPCION QUE DESEA: " ;
		
		cin     >> ohi1;

	 switch(ohi1){
	 	
	 	case '1':
	 		objh1.mostrar1();
	 		break;
	 	case '2':
	 		
	 		break;
	 	case '3':
	 		
	 		break;
	 	default:
	 		system("cls");
	 		cout << " \n u.u Esa opcion no existe :(" <<endl<<endl;
			system("pause");
	 		objh1.hi2();
	 		break;	
      }
	
}

void hija_1::hi4(){
	
	hija_1 objh1;
	system ("color  B1");
	system ("cls");
	
	cout    <<endl << "\t\t\t ** INTELIGENCIA MUSICAL ** " <<endl <<endl<<endl
		
			<< "" /*Informaci�n sobre esta inteligencia*/ <<endl 
				
				<< " \t(1) Regresa al menu anterior " <<endl <<endl
				<< " \t(2) Realiza algun test " <<endl <<endl
				<< " \t(3) Aprende a potencializar esta inteligencia " <<endl<<endl<<endl
				<<" INGRESE LA OPCION QUE DESEA: " ;
		
		cin     >> ohi1;

	 switch(ohi1){
	 	
	 	case '1':
	 		objh1.mostrar1();
	 		break;
	 	case '2':
	 		
	 		break;
	 	case '3':
	 		
	 		break;
	 	default:
	 		system("cls");
	 		cout << " \n u.u Esa opcion no existe :(" <<endl<<endl;
			system("pause");
	 		objh1.hi2();
	 		break;	
      }
	
}

void hija_1::hi5(){
	
	hija_1 objh1;
	system ("color  B1");
	system ("cls");
	
	cout    <<endl << "\t\t\t ** INTELIGENCIA KINESTESICO-CORPORAL ** " <<endl <<endl<<endl
		
			<< "" /*Informaci�n sobre esta inteligencia*/ <<endl 
				
				<< " \t(1) Regresa al menu anterior " <<endl <<endl
				<< " \t(2) Realiza algun test " <<endl <<endl
				<< " \t(3) Aprende a potencializar esta inteligencia " <<endl<<endl<<endl
				<<" INGRESE LA OPCION QUE DESEA: " ;
		
		cin     >> ohi1;

	 switch(ohi1){
	 	
	 	case '1':
	 		objh1.mostrar1();
	 		break;
	 	case '2':
	 		
	 		break;
	 	case '3':
	 		
	 		break;
	 	default:
	 		system("cls");
	 		cout << " \n u.u Esa opcion no existe :(" <<endl<<endl;
			system("pause");
	 		objh1.hi2();
	 		break;	
      }
	
}

void hija_1::hi6(){
	
	hija_1 objh1;
	system ("color  B1");
	system ("cls");
	
	cout    <<endl << "\t\t\t ** INTELIGENGIA INTERPERSONAL ** " <<endl <<endl<<endl
		
			<< "" /*Informaci�n sobre esta inteligencia*/ <<endl 
				
				<< " \t(1) Regresa al menu anterior " <<endl <<endl
				<< " \t(2) Realiza algun test " <<endl <<endl
				<< " \t(3) Aprende a potencializar esta inteligencia " <<endl<<endl<<endl
				<<" INGRESE LA OPCION QUE DESEA: " ;
		
		cin     >> ohi1;

	 switch(ohi1){
	 	
	 	case '1':
	 		objh1.mostrar1();
	 		break;
	 	case '2':
	 		
	 		break;
	 	case '3':
	 		
	 		break;
	 	default:
	 		system("cls");
	 		cout << " \n u.u Esa opcion no existe :(" <<endl<<endl;
			system("pause");
	 		objh1.hi2();
	 		break;	
      }
	
}

void hija_1::hi7(){
		
	hija_1 objh1;
	system ("color  B1");
	system ("cls");
	
	cout    <<endl << "\t\t\t ** INTELIGENCIA INTRAPERSONAL ** " <<endl <<endl<<endl
		
			<< "" /*Informaci�n sobre esta inteligencia*/ <<endl 
				
				<< " \t(1) Regresa al menu anterior " <<endl <<endl
				<< " \t(2) Realiza algun test " <<endl <<endl
				<< " \t(3) Aprende a potencializar esta inteligencia " <<endl<<endl<<endl
				<<" INGRESE LA OPCION QUE DESEA: " ;
		
		cin     >> ohi1;

	 switch(ohi1){
	 	
	 	case '1':
	 		objh1.mostrar1();
	 		break;
	 	case '2':
	 		
	 		break;
	 	case '3':
	 		
	 		break;
	 	default:
	 		system("cls");
	 		cout << " \n u.u Esa opcion no existe :(" <<endl<<endl;
			system("pause");
	 		objh1.hi2();
	 		break;	
      }
	
}

void hija_1::hi8(){
	
	hija_1 objh1;
	system ("color  B1");
	system ("cls");
	
	cout    <<endl << "\t\t\t ** INTELIGENCIA NATURALISTA ** " <<endl <<endl<<endl
		
			<< "" /*Informaci�n sobre esta inteligencia*/ <<endl 
				
				<< " \t(1) Regresa al menu anterior " <<endl <<endl
				<< " \t(2) Realiza algun test " <<endl <<endl
				<< " \t(3) Aprende a potencializar esta inteligencia " <<endl<<endl<<endl
				<<" INGRESE LA OPCION QUE DESEA: " ;
		
		cin     >> ohi1;

	 switch(ohi1){
	 	
	 	case '1':
	 		objh1.mostrar1();
	 		break;
	 	case '2':
	 		
	 		break;
	 	case '3':
	 		
	 		break;
	 	default:
	 		system("cls");
	 		cout << " \n u.u Esa opcion no existe :(" <<endl<<endl;
			system("pause");
	 		objh1.hi2();
	 		break;	
      }
	
}

void hija_1::hi9(){
	
	hija_1 objh1;
	system ("color  B1");
	system ("cls");
	
	cout    <<endl << "\t\t\t ** INTELIGENCIA ESPIRITUAL ** " <<endl <<endl<<endl
		
			<< "" /*Informaci�n sobre esta inteligencia*/ <<endl 
				
				<< " \t(1) Regresa al menu anterior " <<endl <<endl
				<< " \t(2) Realiza algun test " <<endl <<endl
				<< " \t(3) Aprende a potencializar esta inteligencia " <<endl<<endl<<endl
				<<" INGRESE LA OPCION QUE DESEA: " ;
		
		cin     >> ohi1;

	 switch(ohi1){
	 	
	 	case '1':
	 		objh1.mostrar1();
	 		break;
	 	case '2':
	 		
	 		break;
	 	case '3':
	 		
	 		break;
	 	default:
	 		system("cls");
	 		cout << " \n u.u Esa opcion no existe :(" <<endl<<endl;
			system("pause");
	 		objh1.hi2();
	 		break;	
      }
	
}
main(){
	menu_principal objmp;
	
	objmp.mostrar();
	getch();
}

