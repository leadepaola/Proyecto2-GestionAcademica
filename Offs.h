#include <stdio.h>
#include <conio.h>
#include <windows.h>

int off_inicio();
int off(), off_cuadro();
int off1a2(),off1a3(),off1a5(),off2a4(),off2a5(),off3a4(),off3a5(),off4a5();
int off_menu_alu();
int offalu_altaAlu(),offAltaAlu1a2(),offAltaAlu1a3(),offAltaAlu2a3();
int offVolverAltaAlu();
int offAltaAlu();

int offVistaAluAlta3(),offVistaAluAlta3Parte2();

int offVistaAluAlta3Parte2(){
ir_cr(15,13);    printf("                                                    ");  // 50 ESPACIOS 
ir_cr(15,14);    printf("                                                    ");
ir_cr(15,15);    printf("                                                    ");
ir_cr(15,16);    printf("                                                    ");
ir_cr(15,17);    printf("                                                    ");
ir_cr(15,18);    printf("                                                    ");	
ir_cr(15,19);    printf("                                                    ");
ir_cr(15,20);    printf("                                                    ");
ir_cr(15,21);    printf("                                                    ");
ir_cr(15,22);    printf("                                                    ");
ir_cr(15,23);    printf("                                                    ");
ir_cr(15,24);    printf("                                                    ");
ir_cr(15,25);    printf("                                                    ");
ir_cr(15,26);    printf("                                                    ");
ir_cr(15,27);    printf("                                                    ");
ir_cr(15,28);    printf("                                                    ");
ir_cr(15,29);    printf("                                                    ");
ir_cr(15,30);    printf("                                                    ");
ir_cr(15,31);    printf("                                                    ");
ir_cr(15,32);    printf("                                                    ");
ir_cr(15,33);    printf("                                                    ");	
}

int offVistaAluAlta3(){
ir_cr(18,28);    printf("                                              "); // 44 ESPACIOS
ir_cr(18,29);    printf("                                              ");
ir_cr(18,30);    printf("                                              ");
}


int offAltaAlu(){
ir_cr(15,13);    printf("                                                    ");  // 50 ESPACIOS 
ir_cr(15,14);    printf("                                                    ");
ir_cr(15,15);    printf("                                                    ");
ir_cr(15,16);    printf("                                                    ");
ir_cr(15,17);    printf("                                                    ");
	
ir_cr(15,21);    printf("                                                    ");
ir_cr(15,22);    printf("                                                    ");
ir_cr(15,23);    printf("                                                    ");
ir_cr(15,24);    printf("                                                    ");
ir_cr(15,25);    printf("                                                    ");
	
ir_cr(15,29);    printf("                                                    ");
ir_cr(15,30);    printf("                                                    ");
ir_cr(15,31);    printf("                                                    ");
ir_cr(15,32);    printf("                                                    ");
ir_cr(15,33);    printf("                                                    ");

ir_cr(28,47);   printf("                                    ");		//BORRA BOTON EL VOLVER 
ir_cr(28,48);   printf("                                    ");
ir_cr(28,49);   printf("                                    ");	
}


int offVolverAltaAlu(){
ir_cr(5,15);    printf("                                                                              "); 
ir_cr(5,16);    printf("                                                                              ");                   
ir_cr(5,17);    printf("                                                                              ");
ir_cr(5,18);    printf("                                                                              ");
ir_cr(5,19);    printf("                                                                              ");                  
ir_cr(5,20);    printf("                                                                              ");                    
ir_cr(5,21);    printf("                                                                              ");                  
ir_cr(5,22);    printf("                                                                              ");                    
ir_cr(5,23);    printf("                                                                              ");                   
ir_cr(5,24);    printf("                                                                              ");                    
ir_cr(5,25);    printf("                                                                              ");
ir_cr(5,26);    printf("                                                                              ");
ir_cr(5,27);    printf("                                                                              ");
ir_cr(5,28);    printf("                                                                              ");
ir_cr(5,29);    printf("                                                                              ");
ir_cr(5,30);    printf("                                                                              ");
ir_cr(5,31);    printf("                                                                              ");
ir_cr(5,32);    printf("                                                                              ");
ir_cr(5,33);    printf("                                                                              ");
ir_cr(5,34);    printf("                                                                              ");
ir_cr(5,35);    printf("                                                                              ");
ir_cr(5,36);    printf("                                                                              ");	
	
ir_cr(28,47);   printf("                                    ");
ir_cr(28,48);   printf("                                    ");
ir_cr(28,49);   printf("                                    ");	
}


int offAltaAlu2a3(){ //hacer de 2 a 3
ir_cr(40,15);    printf("                                    ");
ir_cr(40,16);    printf("                                    ");                   
ir_cr(40,17);    printf("                                    ");
ir_cr(40,18);    printf("                                    ");
ir_cr(40,19);    printf("                                    ");                  
ir_cr(40,20);    printf("                                    ");                    
ir_cr(40,21);    printf("                                    ");                  
ir_cr(40,22);    printf("                                    ");                    
ir_cr(40,23);    printf("                                    ");                   
ir_cr(40,24);    printf("                                    ");            
ir_cr(40,25);    printf("                                    ");
ir_cr(40,26);    printf("                                    ");
ir_cr(40,27);    printf("                                    ");
ir_cr(40,28);    printf("                                    ");
ir_cr(40,29);    printf("                                    ");
ir_cr(40,30);    printf("                                    ");
ir_cr(40,31);    printf("                                    ");
ir_cr(40,32);    printf("                                    ");
ir_cr(40,33);    printf("                                    ");
ir_cr(40,34);    printf("                                    ");
ir_cr(40,35);    printf("                                    ");
ir_cr(40,36);    printf("                                    ");

ir_cr(28,47);   printf("                                    ");
ir_cr(28,48);   printf("                                    ");
ir_cr(28,49);   printf("                                    ");
}


int offAltaAlu1a3(){
ir_cr(5,15);    printf("                                    ");
ir_cr(5,16);    printf("                                    ");                   
ir_cr(5,17);  	printf("                                    ");
ir_cr(5,18);    printf("                                    ");
ir_cr(5,19);    printf("                                    ");                  
ir_cr(5,20);    printf("                                    ");                    
ir_cr(5,21);    printf("                                    ");                  
ir_cr(5,22);    printf("                                    ");                    
ir_cr(5,23);    printf("                                    ");                   
ir_cr(5,24);    printf("                                    ");            
ir_cr(5,25);    printf("                                    ");
ir_cr(5,26);    printf("                                    ");
ir_cr(5,27);    printf("                                    ");
ir_cr(5,28);    printf("                                    ");
ir_cr(5,29);    printf("                                    ");
ir_cr(5,30);    printf("                                    ");
ir_cr(5,31);    printf("                                    ");
ir_cr(5,32);    printf("                                    ");
ir_cr(5,33);    printf("                                    ");
ir_cr(5,34);    printf("                                    ");
ir_cr(5,35);    printf("                                    ");
ir_cr(5,36);    printf("                                    ");

ir_cr(28,47);   printf("                                    ");
ir_cr(28,48);   printf("                                    ");
ir_cr(28,49);   printf("                                    ");
}

int offAltaAlu1a2(){
ir_cr(5,15);    printf("                                                                              "); 
ir_cr(5,16);    printf("                                                                              ");                   
ir_cr(5,17);    printf("                                                                              ");
ir_cr(5,18);    printf("                                                                              ");
ir_cr(5,19);    printf("                                                                              ");                  
ir_cr(5,20);    printf("                                                                              ");                    
ir_cr(5,21);    printf("                                                                              ");                  
ir_cr(5,22);    printf("                                                                              ");                    
ir_cr(5,23);    printf("                                                                              ");                   
ir_cr(5,24);    printf("                                                                              ");                    
ir_cr(5,25);    printf("                                                                              ");
ir_cr(5,26);    printf("                                                                              ");
ir_cr(5,27);    printf("                                                                              ");
ir_cr(5,28);    printf("                                                                              ");
ir_cr(5,29);    printf("                                                                              ");
ir_cr(5,30);    printf("                                                                              ");
ir_cr(5,31);    printf("                                                                              ");
ir_cr(5,32);    printf("                                                                              ");
ir_cr(5,33);    printf("                                                                              ");
ir_cr(5,34);    printf("                                                                              ");
ir_cr(5,35);    printf("                                                                              ");
ir_cr(5,36);    printf("                                                                              ");
}





int offalu_altaAlu(){
ir_cr(5,7);     printf("                                                                      ");                   
ir_cr(5,8);     printf("                                                                      ");
ir_cr(5,9);     printf("                                                                      ");
ir_cr(5,10);    printf("                                                                      ");                  
ir_cr(5,11);    printf("                                                                      ");                    
ir_cr(5,12);    printf("                                                                      ");                  
ir_cr(5,13);    printf("                                                                      ");                    
ir_cr(5,14);    printf("                                                                      ");                   
ir_cr(5,15);    printf("                                                                      ");                    
ir_cr(5,16);    printf("                                                                      ");
ir_cr(5,17);    printf("                                                                      ");
ir_cr(5,18);    printf("                                                                      ");
ir_cr(5,19);    printf("                                                                      ");
ir_cr(5,20);    printf("                                                                      ");
ir_cr(5,21);    printf("                                                                      ");
ir_cr(5,22);    printf("                                                                      ");
ir_cr(5,23);    printf("                                                                      ");
ir_cr(5,24);    printf("                                                                      ");
ir_cr(5,25);    printf("                                                                      ");
ir_cr(5,26);    printf("                                                                      ");
ir_cr(5,27);    printf("                                                                      ");
ir_cr(5,28);    printf("                                                                      ");
ir_cr(5,29);    printf("                                                                      ");
ir_cr(5,30);    printf("                                                                      ");
ir_cr(5,31);    printf("                                                                      ");
ir_cr(5,32);    printf("                                                                      ");
ir_cr(5,33);    printf("                                                                      ");
ir_cr(5,34);    printf("                                                                      ");
ir_cr(5,35);    printf("                                                                      ");
ir_cr(5,36);    printf("                                                                      ");
ir_cr(5,37);    printf("                                                                      ");
ir_cr(5,38);    printf("                                                                      ");
ir_cr(5,39);    printf("                                                                      ");
ir_cr(5,40);    printf("                                                                      ");
ir_cr(5,41);    printf("                                                                      ");
ir_cr(5,42);    printf("                                                                      ");
ir_cr(5,43);    printf("                                                                      ");
ir_cr(5,44);    printf("                                                                      ");
ir_cr(5,45);    printf("                                                                      ");
}

int off_menu_alu(){
ir_cr(19, 16); printf("               ");    	//1
ir_cr(56, 16); printf("               ");		//2
ir_cr(19, 36); printf("               ");		//3
ir_cr(53, 36); printf("               ");		//4	
}

int off3a5(){
ir_cr(5,26);   printf("                                    ");
ir_cr(5,27);   printf("                                    ");
ir_cr(5,28);   printf("                                    "); 
ir_cr(5,29);   printf("                                    "); 
ir_cr(5,30);   printf("                                    "); 
ir_cr(5,31);   printf("                                    "); 
ir_cr(5,32);   printf("                                    "); 
ir_cr(5,33);   printf("                                    "); 
ir_cr(5,34);   printf("                                    "); 
ir_cr(5,35);   printf("                                    "); 
ir_cr(5,36);   printf("                                    "); 
ir_cr(5,37);   printf("                                    "); 
ir_cr(5,38);   printf("                                    "); 
ir_cr(5,39);   printf("                                    "); 
ir_cr(5,40);   printf("                                    "); 
ir_cr(5,41);   printf("                                    "); 
ir_cr(5,42);   printf("                                    "); 
ir_cr(5,43);   printf("                                    "); 
ir_cr(5,44);   printf("                                    "); 
ir_cr(5,45);   printf("                                    "); 	

ir_cr(28,47);  printf("                                    ");
ir_cr(28,48);  printf("                                    ");
ir_cr(28,49);  printf("                                    ");
}

int off4a5(){
ir_cr(40,26);   printf("                                    ");
ir_cr(40,27);   printf("                                    ");
ir_cr(40,28);   printf("                                    "); 
ir_cr(40,29);   printf("                                    "); 
ir_cr(40,30);   printf("                                    "); 
ir_cr(40,31);   printf("                                    "); 
ir_cr(40,32);   printf("                                    "); 
ir_cr(40,33);   printf("                                    "); 
ir_cr(40,34);   printf("                                    "); 
ir_cr(40,35);   printf("                                    "); 
ir_cr(40,36);   printf("                                    "); 
ir_cr(40,37);   printf("                                    "); 
ir_cr(40,38);   printf("                                    "); 
ir_cr(40,39);   printf("                                    "); 
ir_cr(40,40);   printf("                                    "); 
ir_cr(40,41);   printf("                                    "); 
ir_cr(40,42);   printf("                                    "); 
ir_cr(40,43);   printf("                                    "); 
ir_cr(40,44);   printf("                                    "); 
ir_cr(40,45);   printf("                                    "); 

ir_cr(28,47);   printf("                                    ");
ir_cr(28,48);   printf("                                    ");
ir_cr(28,49);   printf("                                    ");
}

int off2a5(){
ir_cr(40,7);	printf("                                    ");                   
ir_cr(40,8);    printf("                                    ");
ir_cr(40,9);    printf("                                    ");
ir_cr(40,10);   printf("                                    ");                  
ir_cr(40,11);   printf("                                    ");                    
ir_cr(40,12);   printf("                                    ");                  
ir_cr(40,13);   printf("                                    ");       
ir_cr(40,14);   printf("                                    ");                    
ir_cr(40,15);   printf("                                    ");                     
ir_cr(40,16);   printf("                                    "); 
ir_cr(40,17);   printf("                                    "); 
ir_cr(40,18);   printf("                                    "); 
ir_cr(40,19);   printf("                                    "); 
ir_cr(40,20);   printf("                                    "); 
ir_cr(40,21);   printf("                                    "); 
ir_cr(40,22);   printf("                                    ");
ir_cr(40,23);   printf("                                    ");
ir_cr(40,24);   printf("                                    ");
ir_cr(40,25);   printf("                                    ");
ir_cr(40,26);   printf("                                    ");

ir_cr(28,47);   printf("                                    ");
ir_cr(28,48);   printf("                                    ");
ir_cr(28,49);   printf("                                    ");
}


int off1a5(){
ir_cr(5,7);    	printf("                                    ");                
ir_cr(5,8);     printf("                                    ");
ir_cr(5,9);     printf("                                    ");
ir_cr(5,10);    printf("                                    ");                  
ir_cr(5,11);    printf("                                    ");                    
ir_cr(5,12);    printf("                                    ");                  
ir_cr(5,13);    printf("                                    ");                    
ir_cr(5,14);    printf("                                    ");                   
ir_cr(5,15);    printf("                                    ");                    
ir_cr(5,16);    printf("                                    ");
ir_cr(5,17);    printf("                                    ");
ir_cr(5,18);    printf("                                    ");
ir_cr(5,19);    printf("                                    ");
ir_cr(5,20);    printf("                                    ");
ir_cr(5,21);    printf("                                    ");
ir_cr(5,22);    printf("                                    ");
ir_cr(5,23);    printf("                                    ");
ir_cr(5,24);    printf("                                    ");
ir_cr(5,25);    printf("                                    ");
ir_cr(5,26);    printf("                                    ");

ir_cr(28,47);   printf("                                    ");
ir_cr(28,48);   printf("                                    ");
ir_cr(28,49);   printf("                                    ");
}



int off1a3(){
ir_cr(5,7);	   printf("                                    ");                   
ir_cr(5,8);    printf("                                    ");
ir_cr(5,9);    printf("                                    ");
ir_cr(5,10);   printf("                                    ");                  
ir_cr(5,11);   printf("                                    ");                    
ir_cr(5,12);   printf("                                    ");                  
ir_cr(5,13);   printf("                                    ");       
ir_cr(5,14);   printf("                                    ");                    
ir_cr(5,15);   printf("                                    ");                     
ir_cr(5,16);   printf("                                    "); 
ir_cr(5,17);   printf("                                    "); 
ir_cr(5,18);   printf("                                    "); 
ir_cr(5,19);   printf("                                    "); 
ir_cr(5,20);   printf("                                    "); 
ir_cr(5,21);   printf("                                    "); 
ir_cr(5,22);   printf("                                    ");
ir_cr(5,23);   printf("                                    ");
ir_cr(5,24);   printf("                                    ");
ir_cr(5,25);   printf("                                    ");
ir_cr(5,26);   printf("                                    ");
ir_cr(5,27);   printf("                                    ");
ir_cr(5,28);   printf("                                    "); 
ir_cr(5,29);   printf("                                    "); 
ir_cr(5,30);   printf("                                    "); 
ir_cr(5,31);   printf("                                    "); 
ir_cr(5,32);   printf("                                    "); 
ir_cr(5,33);   printf("                                    "); 
ir_cr(5,34);   printf("                                    "); 
ir_cr(5,35);   printf("                                    "); 
ir_cr(5,36);   printf("                                    "); 
ir_cr(5,37);   printf("                                    "); 
ir_cr(5,38);   printf("                                    "); 
ir_cr(5,39);   printf("                                    "); 
ir_cr(5,40);   printf("                                    "); 
ir_cr(5,41);   printf("                                    "); 
ir_cr(5,42);   printf("                                    "); 
ir_cr(5,43);   printf("                                    "); 
ir_cr(5,44);   printf("                                    "); 
ir_cr(5,45);   printf("                                    "); 	
}


int off2a4(){
ir_cr(40,7);	printf("                                    ");                   
ir_cr(40,8);    printf("                                    ");
ir_cr(40,9);    printf("                                    ");
ir_cr(40,10);   printf("                                    ");                  
ir_cr(40,11);   printf("                                    ");                    
ir_cr(40,12);   printf("                                    ");                  
ir_cr(40,13);   printf("                                    ");       
ir_cr(40,14);   printf("                                    ");                    
ir_cr(40,15);   printf("                                    ");                     
ir_cr(40,16);   printf("                                    "); 
ir_cr(40,17);   printf("                                    "); 
ir_cr(40,18);   printf("                                    "); 
ir_cr(40,19);   printf("                                    "); 
ir_cr(40,20);   printf("                                    "); 
ir_cr(40,21);   printf("                                    "); 
ir_cr(40,22);   printf("                                    ");
ir_cr(40,23);   printf("                                    ");
ir_cr(40,24);   printf("                                    ");
ir_cr(40,25);   printf("                                    ");
ir_cr(40,26);   printf("                                    ");
ir_cr(40,27);   printf("                                    ");
ir_cr(40,28);   printf("                                    "); 
ir_cr(40,29);   printf("                                    "); 
ir_cr(40,30);   printf("                                    "); 
ir_cr(40,31);   printf("                                    "); 
ir_cr(40,32);   printf("                                    "); 
ir_cr(40,33);   printf("                                    "); 
ir_cr(40,34);   printf("                                    "); 
ir_cr(40,35);   printf("                                    "); 
ir_cr(40,36);   printf("                                    "); 
ir_cr(40,37);   printf("                                    "); 
ir_cr(40,38);   printf("                                    "); 
ir_cr(40,39);   printf("                                    "); 
ir_cr(40,40);   printf("                                    "); 
ir_cr(40,41);   printf("                                    "); 
ir_cr(40,42);   printf("                                    "); 
ir_cr(40,43);   printf("                                    "); 
ir_cr(40,44);   printf("                                    "); 
ir_cr(40,45);   printf("                                    "); 
}


int off3a4(){
ir_cr(1,26);    printf("                                                                              ");                   
ir_cr(1,27);    printf("                                                                              ");
ir_cr(1,28);    printf("                                                                              ");
ir_cr(1,29);    printf("                                                                              ");                  
ir_cr(1,30);    printf("                                                                              ");                    
ir_cr(1,31);    printf("                                                                              ");                  
ir_cr(1,32);    printf("                                                                              ");                    
ir_cr(1,33);    printf("                                                                              ");                   
ir_cr(1,34);    printf("                                                                              ");                    
ir_cr(1,35);    printf("                                                                              ");
ir_cr(1,36);    printf("                                                                              ");
ir_cr(1,37);    printf("                                                                              ");
ir_cr(1,38);    printf("                                                                              ");
ir_cr(1,39);    printf("                                                                              ");
ir_cr(1,40);    printf("                                                                              ");
ir_cr(1,41);    printf("                                                                              ");
ir_cr(1,42);    printf("                                                                              ");
ir_cr(1,43);    printf("                                                                              ");
ir_cr(1,44);    printf("                                                                              ");
ir_cr(1,45);    printf("                                                                              ");
}
		

int off1a2(){
ir_cr(1,7);     printf("                                                                              ");                   
ir_cr(1,8);     printf("                                                                              ");
ir_cr(1,9);     printf("                                                                              ");
ir_cr(1,10);    printf("                                                                              ");                  
ir_cr(1,11);    printf("                                                                              ");                    
ir_cr(1,12);    printf("                                                                              ");                  
ir_cr(1,13);    printf("                                                                              ");                    
ir_cr(1,14);    printf("                                                                              ");                   
ir_cr(1,15);    printf("                                                                              ");                    
ir_cr(1,16);    printf("                                                                              ");
ir_cr(1,17);    printf("                                                                              ");
ir_cr(1,18);    printf("                                                                              ");
ir_cr(1,19);    printf("                                                                              ");
ir_cr(1,20);    printf("                                                                              ");
ir_cr(1,21);    printf("                                                                              ");
ir_cr(1,22);    printf("                                                                              ");
ir_cr(1,23);    printf("                                                                              ");
ir_cr(1,24);    printf("                                                                              ");
ir_cr(1,25);    printf("                                                                              ");
ir_cr(1,26);    printf("                                                                              ");
}
		

int off(){
ir_cr(2,1);     printf("                                                                            ");
ir_cr(2,2);     printf("                                                                            ");
ir_cr(2,3);     printf("                                                                            ");                   
ir_cr(2,4);     printf("                                                                            ");                  
ir_cr(2,5);     printf("                                                                            ");                  
ir_cr(2,6);     printf("                                                                            ");                   
ir_cr(2,7);     printf("                                                                            ");                   
ir_cr(2,8);     printf("                                                                            ");
ir_cr(2,9);     printf("                                                                            ");
ir_cr(2,10);    printf("                                                                            ");                  
ir_cr(2,11);    printf("                                                                            ");                    
ir_cr(2,12);    printf("                                                                            ");                  
ir_cr(2,13);    printf("                                                                            ");                    
ir_cr(2,14);    printf("                                                                            ");                   
ir_cr(2,15);    printf("                                                                            ");                    
ir_cr(2,16);    printf("                                                                            ");
ir_cr(2,17);    printf("                                                                            ");
ir_cr(2,18);    printf("                                                                            ");
ir_cr(2,19);    printf("                                                                            ");
ir_cr(2,20);    printf("                                                                            ");
ir_cr(2,21);    printf("                                                                            ");
ir_cr(2,22);    printf("                                                                            ");
ir_cr(2,23);    printf("                                                                            ");
ir_cr(2,24);    printf("                                                                            ");
ir_cr(2,25);    printf("                                                                            ");
ir_cr(2,26);    printf("                                                                            ");
ir_cr(2,27);    printf("                                                                            ");
ir_cr(2,28);    printf("                                                                            ");
ir_cr(2,29);    printf("                                                                            ");
ir_cr(2,30);    printf("                                                                            ");
ir_cr(2,31);    printf("                                                                            ");
ir_cr(2,32);    printf("                                                                            ");
ir_cr(2,33);    printf("                                                                            ");
ir_cr(2,34);    printf("                                                                            ");
ir_cr(2,35);    printf("                                                                            ");
ir_cr(2,36);    printf("                                                                            ");
ir_cr(2,37);    printf("                                                                            ");
ir_cr(2,38);    printf("                                                                            ");
ir_cr(2,39);    printf("                                                                            ");
ir_cr(2,40);    printf("                                                                            ");
ir_cr(2,41);    printf("                                                                            ");
ir_cr(2,42);    printf("                                                                            ");
ir_cr(2,43);    printf("                                                                            ");
ir_cr(2,44);    printf("                                                                            ");
ir_cr(2,45);    printf("                                                                            ");
ir_cr(2,46);    printf("                                                                            ");
ir_cr(2,47);    printf("                                                                            ");
ir_cr(2,48);    printf("                                                                            ");
ir_cr(2,49);    printf("                                                                            ");

ir_cr(2,51);    printf("                                                                            ");
return 0;
} 


int off_cuadro(){
ir_cr(1,1);     printf("                                                                              ");
ir_cr(1,2);     printf("                                                                              ");
ir_cr(1,3);     printf("                                                                              ");                   
ir_cr(1,4);     printf("                                                                              ");                  
ir_cr(1,5);     printf("                                                                              ");                  
ir_cr(1,6);     printf("                                                                              ");                   
ir_cr(1,7);     printf("                                                                              ");                   
ir_cr(1,8);     printf("                                                                              ");
ir_cr(1,9);     printf("                                                                              ");
ir_cr(1,10);    printf("                                                                              ");                  
ir_cr(1,11);    printf("                                                                              ");                    
ir_cr(1,12);    printf("                                                                              ");                  
ir_cr(1,13);    printf("                                                                              ");                    
ir_cr(1,14);    printf("                                                                              ");                   
ir_cr(1,15);    printf("                                                                              ");                    
ir_cr(1,16);    printf("                                                                              ");
ir_cr(1,17);    printf("                                                                              ");
ir_cr(1,18);    printf("                                                                              ");
ir_cr(1,19);    printf("                                                                              ");
ir_cr(1,20);    printf("                                                                              ");
ir_cr(1,21);    printf("                                                                              ");
ir_cr(1,22);    printf("                                                                              ");
ir_cr(1,23);    printf("                                                                              ");
ir_cr(1,24);    printf("                                                                              ");
ir_cr(1,25);    printf("                                                                              ");
ir_cr(1,26);    printf("                                                                              ");
ir_cr(1,27);    printf("                                                                              ");
ir_cr(1,28);    printf("                                                                              ");
ir_cr(1,29);    printf("                                                                              ");
ir_cr(1,30);    printf("                                                                              ");
ir_cr(1,31);    printf("                                                                              ");
ir_cr(1,32);    printf("                                                                              ");
ir_cr(1,33);    printf("                                                                              ");
ir_cr(1,34);    printf("                                                                              ");
ir_cr(1,35);    printf("                                                                              ");
ir_cr(1,36);    printf("                                                                              ");
ir_cr(1,37);    printf("                                                                              ");
ir_cr(1,38);    printf("                                                                              ");
ir_cr(1,39);    printf("                                                                              ");
ir_cr(1,40);    printf("                                                                              ");
ir_cr(1,41);    printf("                                                                              ");
ir_cr(1,42);    printf("                                                                              ");
ir_cr(1,43);    printf("                                                                              ");
ir_cr(1,44);    printf("                                                                              ");
ir_cr(1,45);    printf("                                                                              ");
ir_cr(1,46);    printf("                                                                              ");
ir_cr(1,47);    printf("                                                                              ");
ir_cr(1,48);    printf("                                                                              ");
ir_cr(1,49);    printf("                                                                              ");
ir_cr(1,50);    printf("                                                                              ");
ir_cr(1,51);    printf("                                                                              ");
return 0;
} 


int off_inicio(){	
ir_cr(3,18);    printf("                                                                          ");
ir_cr(3,19);    printf("                                                                          ");
ir_cr(3,20);    printf("                                                                          ");
ir_cr(3,21);    printf("                                                                          ");
ir_cr(3,22);    printf("                                                                          ");
ir_cr(3,23);    printf("                                                                          ");
ir_cr(3,24);    printf("                                                                          ");
ir_cr(3,25);    printf("                                                                          ");	

ir_cr(3,26);    printf("                                                                          ");	
ir_cr(3,27);    printf("                                                                          ");
ir_cr(3,28);    printf("                                                                          ");
ir_cr(3,29);    printf("                                                                          ");
ir_cr(3,30);    printf("                                                                          ");
ir_cr(3,31);    printf("                                                                          ");

ir_cr(20,51); 	printf("                                               ");
}
