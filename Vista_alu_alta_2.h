#include <stdio.h>
#include <conio.h>
#include <windows.h>

alta_alum(){
	Set_Mrc(26,2,54,4); 	
	ir_cr(32, 3); printf("GESTION   ALUMNOS");
	
	Set_Mrc(15,13,65,17);  //Nombre
	Set_Mrc(15,21,65,25);  //Apellido
	Set_Mrc(15,29,65,33);  //Edad
	
	ir_cr(27, 15); printf("Nombre: ");
	ir_cr(27, 23); printf("Apellido: ");
	ir_cr(29, 31); printf("Edad: ");
	
	Set_Mrc(30,47,50,49); 						//EXIT
	ir_cr(38,48); printf("Volver");	
	
	fflush( stdin );
	struct alumno alu;
	ir_cr(45,15);  scanf("%[^\n]%*c",&alumno1.nombre);
	ir_cr(45, 23); scanf("%[^\n]%*c",&alumno1.apellido);
	ir_cr(45, 31); scanf("%i",&alumno1.edad);
		
	ir_cr(27,15); printf("                          ");	
	ir_cr(27,23); printf("                          ");	
	ir_cr(29,31); printf("                          "); 
	
	offAltaAlu(); confirmarAltaAlu1();

}
