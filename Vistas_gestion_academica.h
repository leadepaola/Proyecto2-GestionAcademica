#include <stdio.h>
#include <conio.h>
#include <windows.h>



//int i;


//int vista_menu_principal1( ),vista_menu_principal2( ),vista_menu_principal3( ),vista_menu_principal4( ),vista_menu_principal5();



//int prin_notas();
//int prin_materias();
//int prin_correlativas();
//int incorrecto(); 
		
  		  
//int	baja_alum();   		
//int	consul_alum();   
//int	modif_alum();  


//int salir();
//int encendido=1;

//	Set_Mrc(5,7,75,45); // CUADRADO CENTRAL

int vista_menu_principal1(){
	
	Set_Mrc(42,8,73,25);  		// 2
	Set_Mrc(7,27,38,44); 		// 3
	Set_Mrc(42,27,73,44);		// 4
	Set_Mrc_Gru(5,7,40,26);   	// 1 Set_Mrc_Gru(5,7,40,26);  
	
	Set_Mrc(26,2,54,4); 	
	ir_cr(32, 3); printf("GESTION ACADEMICA");
	
	ir_cr(19, 16); printf("ALUMNOS");    		//1
	ir_cr(56, 16); printf("Notas");				//2
	ir_cr(19, 36); printf("Materias");			//3
	ir_cr(53, 36); printf("Correlativas");		//4		

	Set_Mrc(30,47,50,49); 						//EXIT
	ir_cr(38,48); printf("SALIR\n");	

 	for(l1=0;l1<2;l1++){
 
		cTecla = getch();
		if(cTecla==0){
			cTecla = getch();
		}
	
	//	if(cTecla!=27){
		if(cTecla==72 or cTecla==75 or cTecla==77 or cTecla==80 or cTecla==13 )	{		//CONTROLAR EN QUÉ QUEDÓ
			switch(cTecla){
				case 72:    off1a5();			vista_menu_principal5();  		/*arriba*/     	break; 
				case 75:    off1a2();  			vista_menu_principal2(); 		/*izquierda*/  	break;
				case 77:	off1a2();			vista_menu_principal2();		/*derecha*/		break;
				case 80:	off1a3();			vista_menu_principal3();		/*abajo*/		break;
				case 13: 	off_menu_alu();		prin_alum1(); 					/*enter*/       break;
			//	default:	/*	incorrecto(); 		off_cuadro();	vista_menu_principal1(); 	*/	break;
			}
		}
	}			
}

int vista_menu_principal2( ){
	
	Set_Mrc(7,8,38,25);  				// 1	
	Set_Mrc(7,27,38,44);				// 3
	Set_Mrc(42,27,73,44);				// 4
	Set_Mrc_Gru(40,7,75,26);		 	// 2	Set_Mrc_Gru(40,7,75,26);	

	Set_Mrc(26,2,54,4); 	
	ir_cr(32, 3); printf("GESTION ACADEMICA");
	ir_cr(19, 16); printf("Alumnos");    		//1
	ir_cr(56, 16); printf("NOTAS");				//2
	ir_cr(19, 36); printf("Materias");			//3
	ir_cr(53, 36); printf("Correlativas");		//4	
	Set_Mrc(30,47,50,49); 						//EXIT
	ir_cr(38,48); printf("SALIR");		
	
	for(l1=0;l1<2;l1++){
	 
	    cTecla = getch();
    	if(cTecla == 0)
       	cTecla = getch();
      	else{
			switch(cTecla){
				case 72:    	off2a5();   vista_menu_principal5();  		/*arriba*/     	break; 
				case 75:        off1a2();	vista_menu_principal1(); 		/*izquierda*/  	break;
				case 77:		off1a2();	vista_menu_principal1();		/*derecha*/		break;
				case 80:		off2a4();	vista_menu_principal4();		/*abajo*/		break;
				case 13: 													/*enter*/       break;
				
			}
		}
	}	
}

int vista_menu_principal3(){
	
	Set_Mrc(7,8,38,25);    		// 1	
	Set_Mrc(42,8,73,25);		// 2
	Set_Mrc(42,27,73,44);		// 4	
	Set_Mrc_Gru(5,26,40,45); 	// 3	Set_Mrc_Gru(5,26,40,45);
	
	Set_Mrc(26,2,54,4); 	
	ir_cr(32, 3); printf("GESTION ACADEMICA");
	
	ir_cr(19, 16); printf("Alumnos");    		//1
	ir_cr(56, 16); printf("Notas");				//2
	ir_cr(19, 36); printf("MATERIAS");			//3
	ir_cr(53, 36); printf("Correlativas");		//4	
	
	Set_Mrc(30,47,50,49); 					//EXIT
	ir_cr(38,48); printf("SALIR");	
	
	
	for(l1=0;l1<2;l1++){
	 
		cTecla = getch();
		
       	if(cTecla == 0)
        	cTecla = getch();
        	
       	else{
			switch(cTecla){
				case 72:        off1a3();	vista_menu_principal1();  		/*arriba*/     	break; 
				case 75:        off3a4();	vista_menu_principal4(); 		/*izquierda*/  	break;
				case 77:		off3a4();	vista_menu_principal4();		/*derecha*/		break;
				case 80:		off3a5();	vista_menu_principal5();		/*abajo*/		break;
				case 13: 					prin_materias(); 				/*enter*/       break;					
			}
		}
	}		
}

vista_menu_principal4( ){
	
	Set_Mrc(7,8,38,25);   		// 1	
	Set_Mrc(42,8,73,25);		// 2		
	Set_Mrc(7,27,38,44);		// 3
	Set_Mrc_Gru(40,26,75,45);	// 4		Set_Mrc_Gru(40,26,75,45);
	
	Set_Mrc(26,2,54,4); 	
	ir_cr(32, 3); printf("GESTION ACADEMICA");
	
	ir_cr(19, 16); printf("Alumnos");    		//1
	ir_cr(56, 16); printf("Notas");				//2
	ir_cr(19, 36); printf("Materias");			//3
	ir_cr(53, 36); printf("CORRELATIVAS");		//4	
	
	Set_Mrc(30,47,50,49); 					//EXIT
	ir_cr(38,48); printf("SALIR");	
	
	for(l1=0;l1<2;l1++){
	 
		cTecla = getch();
	
    	if(cTecla == 0)
     	   cTecla = getch();
        
   	 else{
			switch(cTecla){
				case 72:        off2a4();	vista_menu_principal2();  		/*arriba*/     	break; 
				case 75:       	off3a4();	vista_menu_principal3(); 		/*izquierda*/  	break;
				case 77:		off3a4();	vista_menu_principal3();		/*derecha*/		break;
				case 80:		off4a5();	vista_menu_principal5();		/*abajo*/		break;
				case 13: 					prin_materias(); 				/*enter*/       break;			
			}
		}
	}
}

vista_menu_principal5( ){
	
	Set_Mrc(7,8,38,25);   		// 1	
	Set_Mrc(42,8,73,25);		// 2		
	Set_Mrc(7,27,38,44);		// 3
	Set_Mrc(42,27,73,44);		// 4
	
	Set_Mrc(26,2,54,4); 	
	ir_cr(32, 3); printf("GESTION ACADEMICA");
	
	ir_cr(19, 16); printf("Alumnos");    		//1
	ir_cr(56, 16); printf("Notas");				//2
	ir_cr(19, 36); printf("Materias");			//3
	ir_cr(53, 36); printf("Correlativas");		//4	
	
	Set_Mrc_Gru(28,47,52,49); 					//EXIT
	ir_cr(38,48); printf("SALIR");	
	
	for(l1=0;l1<2;l1++){
	 
		cTecla = getch();
	
    	if(cTecla == 0)
     	   cTecla = getch();
        
   	 	else{
			switch(cTecla){
				case 72:    off3a5();	vista_menu_principal3();  		/*arriba*/     	break; 
				case 75:       			vista_menu_principal5(); 		/*izquierda*/  	break;
				case 77:				vista_menu_principal5();		/*derecha*/		break;
				case 80:	off1a5();	vista_menu_principal1();		/*abajo*/		break;
				case 13: 				encendido=0; salir(); 						/*enter*/       break;			 
			}
		}
	}
}



//----------------ACA COMINEZA LAS DEMAS VISTAS, NOTAS, MATERIAS Y CORRELATIVAS. Ir haciendo sus respesctivos .h -----------------//

prin_notas(){
	
	off();

	ir_cr(32, 3); printf("Notas");
	
	ir_cr(10, 8); printf("1. Dar de alta");
	ir_cr(10, 10); printf("2. Dar de baja");
	ir_cr(45, 8); printf("3. Consultar");
	ir_cr(45, 10); printf("4. Modificar");
	ir_cr(32, 12); printf("5. Volver");
	
	ir_cr(10, 15); printf("Ingresa un numero para ingresar a las opciones:");
	ir_cr(58, 15); scanf("%i",&i);
	
}

prin_materias(){

	off();

	ir_cr(32, 3); printf("Materias");
	
	ir_cr(10, 8); printf("1. Dar de alta");
	ir_cr(10, 10); printf("2. Dar de baja");
	ir_cr(45, 8); printf("3. Consultar");
	ir_cr(45, 10); printf("4. Modificar");
	ir_cr(32, 12); printf("5. Volver");
	
	ir_cr(10, 15); printf("Ingresa un numero para ingresar a las opciones:");
	ir_cr(58, 15); scanf("%i",&i);
	

}

prin_correlativas(){
	
	off();
	
	ir_cr(32, 3); printf("Correlativas");
	
	ir_cr(10, 8); printf("1. Dar de alta");
	ir_cr(10, 10); printf("2. Dar de baja");
	ir_cr(45, 8); printf("3. Consultar");
	ir_cr(45, 10); printf("4. Modificar");
	ir_cr(32, 12); printf("5. Volver");
	
	ir_cr(10, 15); printf("Ingresa un numero para ingresar a las opciones:");
	ir_cr(58, 15); scanf("%i",&i);
	

}



int incorrecto(){
	Set_Mrc(50,17,54,19);
	Set_Mrc(54,17,58,19);
	
	Set_Mrc(18,17,62,31);
	ir_cr(50,17);    printf("%c",194);
	ir_cr(54,17);    printf("%c",194);
	ir_cr(58,17);    printf("%c",194);
	
	ir_cr(18,19);    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
	195,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,
	196,196,196,196,196,196,196,196,196,196,196,196,196,196,180);

	ir_cr(50,19);    printf("%c",193);
	ir_cr(54,19);    printf("%c",193);
	ir_cr(58,19);    printf("%c",193);
	
	ir_cr(52,18);    printf("-");
	ir_cr(56,18);    printf("%c",254);
	ir_cr(60,18);    printf("x");
	ir_cr(19,18);    printf("Ingreso incorrecto             ");
	
	ir_cr(19,20); printf("                                           ");
	ir_cr(19,21); printf("                                           ");
	ir_cr(19,22); printf("       El dato %c no es valido.            ",cTecla);
	ir_cr(19,23); printf("                                           ");
	ir_cr(19,24); printf("       Se reiniciara el sistema            ");
	ir_cr(19,25); printf("                                           ");
	ir_cr(19,26); printf("                                           ");
	ir_cr(19,27); printf("                                           ");
	ir_cr(19,28); printf("                                           ");
	ir_cr(19,29); printf("                                           ");
	ir_cr(19,30); printf("                                           ");

	ir_cr(19,51);  system("pause");
}




