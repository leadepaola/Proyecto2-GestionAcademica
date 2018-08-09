#include <stdio.h>
#include <conio.h>
#include <windows.h>

//int l1;
//char cTecla;
//int alta_alum(); 
//int resp=0;

//int prin_alum1(),prin_alum2(),prin_alum3(),prin_alum4(),prin_alum5();

//int alta_alumnos1(),alta_alumnos2(),alta_alumnos3();

//int confirmarAltaAlu1(),confirmarAltaAlu2();

//int Alu_ok();

//struct alumno{
//	char nombre[25];
//	char apellido[25];
//	int  edad;
//}
//alumno1,alumno2;



int prin_alum1(){
	
	Set_Mrc(42,8,73,25);  		// 2
	Set_Mrc(7,27,38,44); 		// 3
	Set_Mrc(42,27,73,44);		// 4
	Set_Mrc_Gru(5,7,40,26);   	// 1 Set_Mrc_Gru(5,7,40,26);  
	
	Set_Mrc(26,2,54,4); 	
	ir_cr(32, 3); printf("GESTION   ALUMNOS");
	
	ir_cr(21, 16); printf("ALTA");    		//1
	ir_cr(56, 16); printf("Baja");			//2
	ir_cr(19, 36); printf("Consultar");		//3
	ir_cr(53, 36); printf("Modificar");		//4		

	Set_Mrc(30,47,50,49); 						//EXIT
	ir_cr(38,48); printf("Volver");	

 	for(l1=0;l1<2;l1++){
 
		cTecla = getch();
		if(cTecla==0){
			cTecla = getch();
		}
	
		if(cTecla!=27){
			switch(cTecla){
				case 72:  	off1a5(); 			prin_alum5();  		/*arriba*/     	break; 
				case 75:   	off1a2(); 		  	prin_alum2(); 		/*izquierda*/  	break;
				case 77:	off1a2();			prin_alum2();		/*derecha*/		break;
				case 80:	off1a3();			prin_alum3();		/*abajo*/		break;
				case 13: 	offalu_altaAlu();	alta_alumnos1(); 	/*enter*/       break;				
			}
		}
	}	
}

int prin_alum2(){
	
	Set_Mrc(7,8,38,25);  				// 1	
	Set_Mrc(7,27,38,44);				// 3
	Set_Mrc(42,27,73,44);				// 4
	Set_Mrc_Gru(40,7,75,26);		 	// 2	Set_Mrc_Gru(40,7,75,26);
	
	Set_Mrc(26,2,54,4); 	
	ir_cr(32, 3); printf("GESTION   ALUMNOS");
	
	ir_cr(21, 16); printf("Alta");    		//1
	ir_cr(56, 16); printf("BAJA");			//2
	ir_cr(19, 36); printf("Consultar");		//3
	ir_cr(53, 36); printf("Modificar");		//4		

	Set_Mrc(30,47,50,49); 					//EXIT
	ir_cr(38,48); printf("Volver");	

 	for(l1=0;l1<2;l1++){
 
		cTecla = getch();
		if(cTecla==0){
			cTecla = getch();
		}
	
		if(cTecla!=27){
			switch(cTecla){
				case 72:	off2a5();	prin_alum5();  		/*arriba*/     	break; 
				case 75:	off1a2();	prin_alum1(); 		/*izquierda*/  	break;
				case 77:	off1a2();	prin_alum1();		/*derecha*/		break;
				case 80:	off2a4();	prin_alum4();		/*abajo*/		break;
			//	case 13: 				baja_alum(); 		/*enter*/       break;
				
			}
		}
	}	
}

int prin_alum3(){

	Set_Mrc(7,8,38,25);    		// 1	
	Set_Mrc(42,8,73,25);		// 2
	Set_Mrc(42,27,73,44);		// 4	
	Set_Mrc_Gru(5,26,40,45); 	// 3	Set_Mrc_Gru(5,26,40,45);
	
	Set_Mrc(26,2,54,4); 	
	ir_cr(32, 3); printf("GESTION   ALUMNOS");
	
	ir_cr(21, 16); printf("Alta");    		//1
	ir_cr(56, 16); printf("Baja");			//2
	ir_cr(19, 36); printf("CONSULTAR");		//3
	ir_cr(53, 36); printf("Modificar");		//4		

	Set_Mrc(30,47,50,49); 					//EXIT
	ir_cr(38,48); printf("Volver");	

 	for(l1=0;l1<2;l1++){
 
		cTecla = getch();
		if(cTecla==0){
			cTecla = getch();
		}
	
		if(cTecla!=27){
			switch(cTecla){
				case 72:	off1a3();	prin_alum1();  		/*arriba*/     	break; 
				case 75:	off3a4();	prin_alum4(); 		/*izquierda*/  	break;
				case 77:	off3a4();	prin_alum4();		/*derecha*/		break;
				case 80:	off3a5();	prin_alum5();		/*abajo*/		break;
				case 13: 				consul_alum(); 		/*enter*/       break;
				
			}
		}
	}	
}

int prin_alum4(){
	
	Set_Mrc(7,8,38,25);   		// 1	
	Set_Mrc(42,8,73,25);		// 2		
	Set_Mrc(7,27,38,44);		// 3
	Set_Mrc_Gru(40,26,75,45);	// 4		Set_Mrc_Gru(40,26,75,45);
	
	Set_Mrc(26,2,54,4); 	
	ir_cr(32, 3); printf("GESTION   ALUMNOS");
	
	ir_cr(21, 16); printf("Alta");    		//1
	ir_cr(56, 16); printf("Baja");			//2
	ir_cr(19, 36); printf("Consultar");		//3
	ir_cr(53, 36); printf("MODIFICAR");		//4		

	Set_Mrc(30,47,50,49); 					//EXIT
	ir_cr(38,48); printf("Volver");	

 	for(l1=0;l1<2;l1++){
 
		cTecla = getch();
		if(cTecla==0){
			cTecla = getch();
		}
	
		if(cTecla!=27){
			switch(cTecla){
				case 72:	off2a4();       prin_alum2();  		/*arriba*/     	break; 
				case 75:	off3a4();       prin_alum3(); 		/*izquierda*/  	break;
				case 77:	off3a4();		prin_alum3();		/*derecha*/		break;
				case 80:	off4a5();		prin_alum5();		/*abajo*/		break;
			//	case 13: 					modif_alum(); 		/*enter*/       break;
				
			}
		}
	}	
}

int prin_alum5( ){
	
	Set_Mrc(7,8,38,25);   		// 1	
	Set_Mrc(42,8,73,25);		// 2		
	Set_Mrc(7,27,38,44);		// 3
	Set_Mrc(42,27,73,44);		// 4
	
	Set_Mrc(26,2,54,4); 	
	ir_cr(32, 3); printf("GESTION   ALUMNOS");
	
	ir_cr(21, 16); printf("Alta");    		//1
	ir_cr(56, 16); printf("Baja");			//2
	ir_cr(19, 36); printf("Consultar");		//3
	ir_cr(53, 36); printf("Modificar");		//4	
	
	Set_Mrc_Gru(28,47,52,49); 					//EXIT
	ir_cr(38,48); printf("VOLVER");	
	
	for(l1=0;l1<2;l1++){
	 
		cTecla = getch();
	
    	if(cTecla == 0)
     	   cTecla = getch();
        
   	 else{
			switch(cTecla){
				case 72:	off3a5();	prin_alum3();  				/*arriba*/     	break; 
				case 75:				prin_alum5(); 				/*izquierda*/  	break;
				case 77:				prin_alum5();				/*derecha*/		break;
				case 80:	off1a5();	prin_alum1();				/*abajo*/		break;
				case 13: 	off1a5();	vista_menu_principal1();		/*enter*/       break;			 
			}
		}
	}
}







//---------------------------PARA PONER EN VISTA CONSULTA---------------------------// 

consul_alum(){
	
	off();
	ir_cr(32, 3); printf("Alumnos");
	struct alumno alu;
//	ir_cr(10, 17); printf("Nombre: %s",alu.nombre);
//	ir_cr(10, 18); printf("Apellido: %s",alu.apellido);
//	ir_cr(10, 19); printf("Edad: %i",alu.edad);
	
	ir_cr(10, 17); printf("Nombre: %s",alumno1.nombre);
	ir_cr(10, 18); printf("Apellido: %s",alumno1.apellido);
	ir_cr(10, 19); printf("Edad: %i",alumno1.edad);
	
	
	ir_cr(10, 21); system("Pause");
	off();
	prin_alum1();
}
















