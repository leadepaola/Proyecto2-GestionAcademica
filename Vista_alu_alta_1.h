#include <stdio.h>
#include <conio.h>
#include <windows.h>

//int l1;
//char cTecla;

//int prin_alum1(),prin_alum2(),prin_alum3(),prin_alum4(),prin_alum5();


int alta_alumnos1(){

	Set_Mrc_Gru(5,15,40,35);					// 1 GRUESO
	Set_Mrc(42,16,73,35);						// 2
	
	ir_cr(16, 26); printf("CARGAR UN ALUMNO");    						//1
	ir_cr(45, 26); printf("Cargar lista predeterminada");				//2
	
	Set_Mrc(30,47,50,49); 						//EXIT
	ir_cr(38,48); printf("Volver");	
	
	for(l1=0;l1<2;l1++){
	 
		cTecla = getch();
	
    	if(cTecla == 0)
     	   cTecla = getch();
        
   	 else{	
			switch(cTecla){
				case 72:	offAltaAlu1a3();	alta_alumnos3();  				/*arriba*/     	break; 
				case 75:	offAltaAlu1a2();	alta_alumnos2(); 				/*izquierda*/  	break;
				case 77:	offAltaAlu1a2();	alta_alumnos2();				/*derecha*/		break;
				case 80:	offAltaAlu1a3();	alta_alumnos3();				/*abajo*/		break;
				case 13: 	offAltaAlu1a2();	alta_alum();					/*enter*/       break;			 
			}
		}
	}
}

int alta_alumnos2(){			
	Set_Mrc(7,16,38,35);    					// 1	
	Set_Mrc_Gru(40,15,75,36);					// 2  GRUESO
	
	ir_cr(16, 26); printf("Cargar un alumno");    						//1
	ir_cr(45, 26); printf("CARGAR LISTA PREDETERMINADA");				//2
	
	Set_Mrc(30,47,50,49); 						//EXIT
	ir_cr(38,48); printf("Volver");	
	
	for(l1=0;l1<2;l1++){
	 
		cTecla = getch();
	
    	if(cTecla == 0)
     	   cTecla = getch();
        
   	 else{
			switch(cTecla){
				case 72:	offAltaAlu2a3();	alta_alumnos3();  				/*arriba*/     	break; 
				case 75:	offAltaAlu1a2();	alta_alumnos1(); 				/*izquierda*/  	break;
				case 77:	offAltaAlu1a2();	alta_alumnos1();				/*derecha*/		break;
				case 80:	offAltaAlu2a3();	alta_alumnos3();				/*abajo*/		break;
			//	case 13: 	off1a5();			vista_menu_principal1();		/*enter*/       break;			 
			}
		}
	}
}

int alta_alumnos3(){
	Set_Mrc(7,16,38,35);    					// 1	
	Set_Mrc(42,16,73,35);						// 2
	
	ir_cr(16, 26); printf("Cargar un alumno");    						//1
	ir_cr(45, 26); printf("Cargar lista predeterminada");				//2
	
	Set_Mrc_Gru(28,47,52,49); 					//EXIT GRUESO
	ir_cr(38,48); printf("VOLVER");	
	
	for(l1=0;l1<2;l1++){
	 
		cTecla = getch();
	
    	if(cTecla == 0)
     	   cTecla = getch();
        
   	 else{
			switch(cTecla){
				case 72:	offAltaAlu1a3();		alta_alumnos1();  				/*arriba*/     	break; 
				case 75:							alta_alumnos3(); 				/*izquierda*/  	break;
				case 77:							alta_alumnos3();				/*derecha*/		break;
				case 80:	offAltaAlu1a3();		alta_alumnos1();				/*abajo*/		break;
				case 13: 	offVolverAltaAlu();		prin_alum1();					/*enter*/       break;			 
			}
		}
	}
}


