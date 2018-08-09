#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <c:Fondo_pant.h>
#include <c:Fondo_pant_grueso.h>
#include <c:Offs.h>

//--Funciones de "vista_gestion_academica--//
int vista_menu_principal1( ),vista_menu_principal2( ),vista_menu_principal3( ),vista_menu_principal4( ),vista_menu_principal5();

//--Funciones de "Vista-alu_general--//
int prin_alum1(),prin_alum2(),prin_alum3(),prin_alum4(),prin_alum5();

//--Funciones de "Vista-alu_alta_1--//
int alta_alumnos1(),alta_alumnos2(),alta_alumnos3();

//--Funciones de "Vista-alu_alta_2--//
int alta_alum(); 

//--Funciones de "Vista-alu_alta_3--//
int confirmarAltaAlu1(),confirmarAltaAlu2();

//--Funciones de "Cargando--//
int proceso_cargando1();
int Alu_ok();

//--Funciones de "Presentacion--//
int Presentacion(), circulo();
int v1=0,v2=79,v3=0,v4=79,v5=39,v6=40,v7=40,v8=39;    	// para lineaA
int v10=26,v11=26,v12=26,v13=26,v14=0,v15=52,v16=0,v17=52,v18=26,v19=26;				// para lineaB

//--Variables usadas en todo el programa--//
int l1;
char cTecla;
int tempo(int);
int resp=0;

struct alumno{
	
	char nombre[25];
	char apellido[25];
	int  edad;
}
alumno1,alumno2;

int i;

int prin_notas();
int prin_materias();
int prin_correlativas();
int incorrecto(); 
				  		
int	consul_alum();   
 
int salir();
int encendido=1;



#include <c:Vistas_gestion_academica.h>

#include <c:Vista_alu_general.h>
#include <c:Vista_alu_alta_1.h>
#include <c:Vista_alu_alta_2.h>
#include <c:Vista_alu_alta_3.h>

#include <c:Cargando.h>
#include <c:Presentacion.h>



void IR_coord (int x, int y);
int AxTempo=100000000;

int ituom(); int ituom1();int ituom2();int ituom3();int ituom4();int ituom5();int ituom6();int ituom7();int ituom8();
int ituom9();int ituom10();int ituom11();int ituom12();int ituom13(); int ituom14(); int ituom15();int ituom16();int ituom17();
int ituom18();int ituom19();int ituom20();int ituom21();int ituom22();int ituom23();

int inicio(); int inicio2();

//char nombre[50];
//char apellido[50];
//int edad;

int on=1;
int x,z,w;

int prueba();




int main (){
	ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
	//	Set_Mrc(1,1,78,50);
	// Presentacion();
	 Presentacion2();
	 off();
	//	inicio();		//Movimiento: "Academy Control"
	// 	inicio2();		//Muestra Academy Control titilando
	
	//proceso_cargando2();
	while(encendido==1){
	
		vista_menu_principal1();
		
		if(encendido==1){
			incorrecto(); 		
			off_cuadro();
		}
	}
	return 0;	
}



salir(){
	off();
	ir_cr(35,11);    printf(" Adios! ");  
	ir_cr(10, 24);     
}


tempo(int AxTempo)
{
    for(x=0;x<=AxTempo;x++);  
}		


//-----------------------------------------------------------CARGANDO ------------------------------------------------------------//


//-----------------------------------------------------------D I B U J O S ------------------------------------------------------------//








int inicio(){
	
	int AuxX;
	int AuxP;
	int AuxResto;
	for(AuxX=1;AuxX<=30;AuxX++){
			AuxResto = AuxX % 2;
			switch(AuxX){
					case 1: 		ituom1();  tempo(20000000);     break;  
					case 2: 		ituom2();  tempo(20000000);     break; 
					case 3: 		ituom3();  tempo(20000000);     break; 
					case 4: 		ituom4();  tempo(20000000);     break; 
					case 5: 		ituom5();  tempo(20000000);     break; 
					case 6: 		ituom6();  tempo(20000000);     break; 
					case 7: 		ituom7();  tempo(20000000);     break; 
					case 8: 		ituom8();  tempo(20000000);     break; 
					case 9: 		ituom9();  tempo(20000000);     break; 
					case 10: 		ituom10(); tempo(20000000);     break; 
					case 11: 		ituom11(); tempo(20000000);     break; 
					case 12: 		ituom12(); tempo(20000000);     break; 
					case 13: 		ituom13(); tempo(20000000);     break; 
					case 14: 		ituom14(); tempo(20000000);     break;  
					case 15: 		ituom15(); tempo(20000000);     break;  
					case 16: 		ituom16(); tempo(20000000);     break;  
					case 17: 		ituom17(); tempo(20000000);     break;  
					case 18: 		ituom18(); tempo(20000000);     break;  
					case 19: 		ituom19(); tempo(20000000);     break;  
					case 20: 		ituom20(); tempo(20000000);     break;  
					case 21: 		ituom21(); tempo(20000000);     break;
					case 23: 		ituom22(); tempo(20000000);     break; 
					case 24: 		ituom23(); tempo(20000000);     break;
					case 25: 		ituom22(); tempo(30000000);     break;  
					case 26: 		ituom21(); tempo(30000000);     break;  
					case 27: 		ituom22(); tempo(30000000);     break;  
					case 28: 		ituom23(); tempo(30000000);     break;  
					case 29: 		ituom22(); tempo(30000000);     break;    
					case 30: 		ituom23(); tempo(30000000);     break; 
					 
					    
         			default:									    break;           
            }
    }
	return 0;
}



int inicio2(){
for(w=0;w<=2;w++){                  
	ituom23();
	tempo(60000000);
	off();    
	tempo(60000000);
}
	ituom23();
	ir_cr(20,51); system("pause");
	off_inicio();
}

int ituom1(){
ir_cr(3,2);    printf("                                                                    _|_|  ");	
	
ir_cr(3,49);    printf("                                     _|                          _|       ");
return 0;
}

int ituom2(){
ir_cr(3,2);    printf("                                                                        _|");
ir_cr(3,3);    printf("                                                                    _|_|  ");	
	
ir_cr(3,48);    printf("                                     _|                          _|       ");
ir_cr(3,49);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
return 0;
}

int ituom3(){
ir_cr(3,2);    printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,3);    printf("                                                                        _|");
ir_cr(3,4);    printf("                                                                    _|_|  ");	
	
ir_cr(3,47);    printf("                                     _|                          _|       ");
ir_cr(3,48);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,49);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
return 0;
}

int ituom4(){
ir_cr(3,2);    printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,3);    printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,4);    printf("                                                                        _|");
ir_cr(3,5);    printf("                                                                    _|_|  ");	
	
ir_cr(3,46);    printf("                                     _|                          _|       ");
ir_cr(3,47);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,48);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,49);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
return 0;
}

int ituom5(){
ir_cr(3,2);    printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,3);    printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,4);    printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,5);    printf("                                                                        _|");
ir_cr(3,6);    printf("                                                                    _|_|  ");	
	
ir_cr(3,45);    printf("                                     _|                          _|       ");
ir_cr(3,46);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,47);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,48);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,49);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
return 0;
}

int ituom6(){
ir_cr(3,2);    printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,3);    printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,4);    printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,5);    printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,6);    printf("                                                                        _|");
ir_cr(3,7);    printf("                                                                    _|_|  ");	
	
ir_cr(3,44);    printf("                                     _|                          _|       ");
ir_cr(3,45);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,46);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,47);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,48);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,49);    printf("                                                                          ");
return 0;
}

int ituom7(){
ir_cr(3,2);    printf("                                    _|                                    ");
ir_cr(3,3);    printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,4);    printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,5);    printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,6);    printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,7);    printf("                                                                        _|");
ir_cr(3,8);    printf("                                                                    _|_|  ");	
	
ir_cr(3,43);    printf("                                     _|                          _|       ");
ir_cr(3,44);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,45);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,46);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,47);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,48);    printf("                                                                          ");

return 0;
}

int ituom8(){
ir_cr(3,2);    printf("                                                                          ");
ir_cr(3,3);    printf("                                    _|                                    ");
ir_cr(3,4);    printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,5);    printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,6);    printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,7);    printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,8);    printf("                                                                        _|");
ir_cr(3,9);    printf("                                                                    _|_|  ");	
	
ir_cr(3,42);    printf("                                     _|                          _|       ");
ir_cr(3,43);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,44);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,45);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,46);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,47);    printf("                                                                          ");

return 0;
}

int ituom9(){
	
ir_cr(3,3);    printf("                                                                          ");
ir_cr(3,4);    printf("                                    _|                                    ");
ir_cr(3,5);    printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,6);    printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,7);    printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,8);    printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,9);    printf("                                                                        _|");
ir_cr(3,10);   printf("                                                                    _|_|  ");	
	
ir_cr(3,41);    printf("                                     _|                          _|       ");
ir_cr(3,42);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,43);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,44);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,45);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,46);    printf("                                                                          ");

return 0;
}

int ituom10(){
	
ir_cr(3,4);    printf("                                                                          ");
ir_cr(3,5);    printf("                                    _|                                    ");
ir_cr(3,6);    printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,7);    printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,8);    printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,9);    printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,10);   printf("                                                                        _|");
ir_cr(3,11);   printf("                                                                    _|_|  ");	
	
ir_cr(3,40);    printf("                                     _|                          _|       ");
ir_cr(3,41);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,42);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,43);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,44);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,45);    printf("                                                                          ");

return 0;
}

int ituom11(){
	
ir_cr(3,5);    printf("                                                                          ");
ir_cr(3,6);    printf("                                    _|                                    ");
ir_cr(3,7);    printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,8);    printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,9);    printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,10);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,11);   printf("                                                                        _|");
ir_cr(3,12);   printf("                                                                    _|_|  ");	
	
ir_cr(3,39);    printf("                                     _|                          _|       ");
ir_cr(3,40);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,41);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,42);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,43);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,44);    printf("                                                                          ");

return 0;
}

int ituom12(){
	
ir_cr(3,6);    printf("                                                                          ");
ir_cr(3,7);    printf("                                    _|                                    ");
ir_cr(3,8);    printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,9);    printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,10);   printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,11);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,12);   printf("                                                                        _|");
ir_cr(3,13);   printf("                                                                    _|_|  ");	
	
ir_cr(3,38);    printf("                                     _|                          _|       ");
ir_cr(3,39);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,40);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,41);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,42);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,43);    printf("                                                                          ");

return 0;
}

int ituom13(){
	
ir_cr(3,7);    printf("                                                                          ");
ir_cr(3,8);    printf("                                    _|                                    ");
ir_cr(3,9);    printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,10);   printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,11);   printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,12);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,13);   printf("                                                                        _|");
ir_cr(3,14);   printf("                                                                    _|_|  ");	
	
ir_cr(3,37);    printf("                                     _|                          _|       ");
ir_cr(3,38);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,39);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,40);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,41);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,42);    printf("                                                                          ");

return 0;
}

int ituom14(){
	
ir_cr(3,8);    printf("                                                                          ");
ir_cr(3,9);    printf("                                    _|                                    ");
ir_cr(3,10);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,11);   printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,12);   printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,13);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,14);   printf("                                                                        _|");
ir_cr(3,15);   printf("                                                                    _|_|  ");		
	
ir_cr(3,36);    printf("                                     _|                          _|       ");
ir_cr(3,37);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,38);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,39);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,40);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,41);    printf("                                                                          ");

return 0;
}

int ituom15(){
	
ir_cr(3,9);    printf("                                                                          ");
ir_cr(3,10);   printf("                                    _|                                    ");
ir_cr(3,11);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,12);   printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,13);   printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,14);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,15);   printf("                                                                        _|");
ir_cr(3,16);   printf("                                                                    _|_|  ");	
	
ir_cr(3,35);    printf("                                     _|                          _|       ");
ir_cr(3,36);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,37);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,38);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,39);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,40);    printf("                                                                          ");

return 0;
}

int ituom16(){
	
ir_cr(3,10);    printf("                                                                          ");
ir_cr(3,11);   printf("                                    _|                                    ");
ir_cr(3,12);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,13);   printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,14);   printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,15);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,16);   printf("                                                                        _|");
ir_cr(3,17);   printf("                                                                    _|_|  ");	
	
ir_cr(3,34);    printf("                                     _|                          _|       ");
ir_cr(3,35);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,36);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,37);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,38);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,39);    printf("                                                                          ");

return 0;
}

int ituom17(){
	
ir_cr(3,11);    printf("                                                                          ");
ir_cr(3,12);   printf("                                    _|                                    ");
ir_cr(3,13);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,14);   printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,15);   printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,16);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,17);   printf("                                                                        _|");
ir_cr(3,18);   printf("                                                                    _|_|  ");	
	
ir_cr(3,33);    printf("                                     _|                          _|       ");
ir_cr(3,34);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,35);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,36);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,37);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,38);    printf("                                                                          ");

return 0;
}

int ituom18(){
	
ir_cr(3,12);   printf("                                                                          ");
ir_cr(3,13);   printf("                                    _|                                    ");
ir_cr(3,14);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,15);   printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,16);   printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,17);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,18);   printf("                                                                        _|");
ir_cr(3,19);   printf("                                                                    _|_|  ");	
	
ir_cr(3,32);    printf("                                     _|                          _|       ");
ir_cr(3,33);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,34);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,35);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,36);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,37);    printf("                                                                          ");

return 0;
}

int ituom19(){
	
ir_cr(3,13);   printf("                                                                          ");
ir_cr(3,14);   printf("                                    _|                                    ");
ir_cr(3,15);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,16);   printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,17);   printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,18);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,19);   printf("                                                                        _|");
ir_cr(3,20);   printf("                                                                    _|_|  ");	
	
ir_cr(3,31);    printf("                                     _|                          _|       ");
ir_cr(3,32);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,33);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,34);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,35);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,36);    printf("                                                                          ");

return 0;
}

int ituom20(){
	
ir_cr(3,14);   printf("                                                                          ");
ir_cr(3,15);   printf("                                    _|                                    ");
ir_cr(3,16);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,17);   printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,18);   printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,19);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,20);   printf("                                                                        _|");
ir_cr(3,21);   printf("                                                                    _|_|  ");	
	
ir_cr(3,30);    printf("                                     _|                          _|       ");
ir_cr(3,31);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,32);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,33);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,34);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,35);    printf("                                                                          ");

return 0;
}

int ituom21(){
	
ir_cr(3,15);   printf("                                                                          ");
ir_cr(3,16);   printf("                                    _|                                    ");
ir_cr(3,17);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,18);   printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,19);   printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,20);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,21);   printf("                                                                        _|");
ir_cr(3,22);   printf("                                                                    _|_|  ");	
ir_cr(3,23);    printf("                                                                          ");
	
ir_cr(3,28);    printf("                                                                          ");	
ir_cr(3,29);    printf("                                     _|                          _|       ");
ir_cr(3,30);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,31);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,32);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,33);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,34);    printf("                                                                          ");

return 0;
}

int ituom22(){
	
ir_cr(3,16);   printf("                                                                          ");
ir_cr(3,17);   printf("                                    _|                                    ");
ir_cr(3,18);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,19);   printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,20);   printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,21);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,22);   printf("                                                                        _|");
ir_cr(3,23);   printf("                                                                    _|_|  ");
ir_cr(3,24);   printf("                                                                          ");	
	
ir_cr(3,27);    printf("                                                                          ");	
ir_cr(3,28);    printf("                                     _|                          _|       ");
ir_cr(3,29);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,30);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,31);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,32);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,33);    printf("                                                                          ");

return 0;
}

int ituom23(){
	
ir_cr(3,17);   printf("                                                                          ");
ir_cr(3,18);   printf("                                    _|                                    ");
ir_cr(3,19);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|    _|_|_|  _|_|    _|    _|");
ir_cr(3,20);   printf("_|    _|  _|        _|    _|  _|    _|  _|_|_|_|  _|    _|    _|  _|    _|");
ir_cr(3,21);   printf("_|    _|  _|        _|    _|  _|    _|  _|        _|    _|    _|  _|    _|");
ir_cr(3,22);   printf("  _|_|_|    _|_|_|    _|_|_|    _|_|_|    _|_|_|  _|    _|    _|    _|_|_|");
ir_cr(3,23);   printf("                                                                        _|");
ir_cr(3,24);   printf("                                                                    _|_|  ");
ir_cr(3,25);    printf("                                                                          ");	

ir_cr(3,26);    printf("                                                                          ");	
ir_cr(3,27);    printf("                                     _|                          _|       ");
ir_cr(3,28);    printf("       _|_|_|    _|_|    _|_|_|    _|_|_|_|  _|  _|_|    _|_|    _|       ");
ir_cr(3,29);    printf("     _|        _|    _|  _|    _|    _|      _|_|      _|    _|  _|       ");
ir_cr(3,30);    printf("     _|        _|    _|  _|    _|    _|      _|        _|    _|  _|       ");
ir_cr(3,31);    printf("       _|_|_|    _|_|    _|    _|      _|_|  _|          _|_|    _|       ");
ir_cr(3,32);    printf("                                                                          ");

return 0;
}











prueba(){
 //while(cTecla != 27)
 for(l1=0;l1<2;l1++)
    {
       cTecla = getch();
       printf("\r\n 1.Presiono - %c\n",cTecla);
       if(cTecla == 0){
	   
           cTecla = getch();
         printf("\r\n 2.Presiono - %c\n",cTecla);
   }
	   else{
	   
           switch(cTecla)
           {
            case 13: 				 printf("\r\n 3.Presiono ENTER");            break;
            
            case 9:             	printf("\r\n 3.Presiono TAB");            break;
            
            case 72:       printf(" 3.Presiono arriba - %c\n",cTecla);      /*  vista_menu_principal1();  /*arriba*/         break;
            
            case 80:       printf("\r\n 3.Presiono abajo - %c\n",cTecla);     /*   vista_menu_principal4(); /*abajo*/          break;
        
            case 75:           printf("\r\n 3.Presiono izquierda- %c\n",cTecla);      /* vista_menu_principal3(); /*izquierda*/         break;
            
            case 77:         printf("\r\n 3.Presiono derecha- %c\n",cTecla);      /* vista_menu_principal2(); /*derecha*/           break;
            }
        }
    }
}
