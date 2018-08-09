#include <stdio.h>
#include <conio.h>
#include <windows.h>



int confirmarAltaAlu1(){
	Set_Mrc(15,13,65,33); 		//Cuadro

	struct alumno;

	ir_cr(23,15); printf("Los siguientes datos son correctos?");
	ir_cr(28,18); printf("Nombre:        %s",alumno1.nombre);
	ir_cr(28,20); printf("Apellido:      %s",alumno1.apellido);
	ir_cr(28,22); printf("Edad:          %i",alumno1.edad);

	
	Set_Mrc(18,28,38,30);	//Confirmar GRUESO
	Set_Mrc(45,28,59,30);		//Modificar
	ir_cr(24,29); printf("CONFIRMAR");
	ir_cr(48,29); printf("Modificar");
	
	for(l1=0;l1<2;l1++){
	 
	    cTecla = getch();
    	if(cTecla == 0)
       	cTecla = getch();
      	else{
			switch(cTecla){
				case 77:	offVistaAluAlta3();		confirmarAltaAlu2();					/*derecha*/		break;
				case 75:    offVistaAluAlta3();    	confirmarAltaAlu2(); 					/*izquierda*/  	break;
				case 13: 	off();					proceso_cargando1();	Alu_ok();	prin_alum1();	/*enter*/       break;				
			}
		}
	}	
}



int confirmarAltaAlu2(){
	
	Set_Mrc(21,28,35,30);			//Confirmar 
	Set_Mrc(42,28,62,30);		//Modificar	GRUESO
	ir_cr(24,29); printf("Confirmar");
	ir_cr(48,29); printf("MODIFICAR");
	
	for(l1=0;l1<2;l1++){
	 
	    cTecla = getch();
    	if(cTecla == 0)
       	cTecla = getch();
      	else{
			switch(cTecla){
				case 77:	offVistaAluAlta3();		confirmarAltaAlu1();		/*derecha*/		break;
				case 75:    offVistaAluAlta3();    	confirmarAltaAlu1(); 		/*izquierda*/  	break;
				case 13: 	offVistaAluAlta3Parte2();	alta_alum();				/*enter*/       break;				
			}
		}
	}
}

