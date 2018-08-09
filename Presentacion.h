#include <stdio.h>
#include <conio.h>
#include <windows.h>



int q1,q2=0,q3=0,q4=10,q5=20,q6=30,q7=40,q8=50,q9=60;
int matrix();
int a, b, c;
int lineaA(int,int,int), lineaB(),lineaC(int,int,int);
int linea1(int,int,int),linea2(int,int,int),linea3(int,int,int),linea4(int,int,int),linea5(int,int,int),linea6(int,int,int);
int aaa=20;
int bbb=2000000;
int ccc=800000;

int e=109;
//	if(q1>=242){	
//		ir_cr(20,51); system("pause");
//		}




int Presentacion(){
	
/*	for(q1=1;q1<=302;q1++){
	//	lineaA(25,26,27);
	//	linea2();
		linea1(1,2,3);	
		linea1(49,50,51);
		
		linea2(5,6,7);	
		linea2(45,46,47);
		
		linea3(9,10,11);
		linea3(41,42,43);
		
		linea4(13,14,15);
		linea4(37,38,39);
		
		linea5(17,18,19);
		linea5(33,34,35);
		
		linea6(21,22,23);
		linea6(29,30,31);
		//	ir_cr(20,51); system("pause");
	}
*/	
	for(q1=1;q1<=300;q1++){
		lineaA(25,26,27);
		lineaB();

	}
		for(q1=1;q1<=300;q1++){
	
		lineaC(1,2,3);
		lineaC(49,50,51);
	}
			//	ir_cr(20,51); system("pause");
		ir_cr(4,3);printf("%c%c%c",219,219,219);	
		ir_cr(73,3);printf("%c%c%c",219,219,219);	
		ir_cr(4,49);printf("%c%c%c",219,219,219);	
		ir_cr(73,49);printf("%c%c%c",219,219,219);
				
		
	ir_cr(20,52); system("pause");
}



int circulo(){
/*	int o1=47;
	
	if(q1==286){
		ir_cr(73,48);printf("%c%c%c",223,223,223);		//			1° PINTA 			ESQUINA INFERIOR DERECHA
	}
	
	
	if(q1>=287 & q1<=332 ){
		ir_cr(73,o1);printf("%c%c%c",219,219,219);		//47		1° PINTA 			DERECHA					HACIA ARRIBA 
		o1--;
	}*/
}


int Presentacion2(){
	int p1=0,p2=0,p3=26,p4=27,p5=72,p6=3,p7=7,p8=47;
	int b3=75,b4=1,b5=4,b6;
	int asc1=10,asc2=20,asc3=30,asc4=40,asc5=50,asc6=60,asc7=70,asc8=80,asc9=90,asc10=0,asc11=15,asc12=25,asc13=35,asc14=45,asc15=55;
	int asc16=65,asc17=75,asc18=85,asc19=95;
	
	for(q1=0;q1<=1750;q1++){
		tempo(ccc);
		
		if(q1>=0 & q1<=75){
							 
			ir_cr(p1,25);printf("%c",220);		//0
			ir_cr(p1,26);printf("%c",219);		//0						1° PINTA		 	MEDIO HORIZONTAL 		HACIA DERECHA
			ir_cr(p1,27);printf("%c",223);		//0												
			p1++;																				
		}
		
		if(q1>=50 & q1<=122 ){					

			
			
			
		/*	
			if(q1==84){ir_cr(33,26);printf("e");	}	if(q1==85){ir_cr(34,26);printf("s");	}
			if(q1==86){ir_cr(35,26);printf("t");	}	if(q1==87){ir_cr(36,26);printf("i");	}	if(q1==88){ir_cr(37,26);printf("o");	}
			if(q1==89){ir_cr(38,26);printf("n");	}
			
			
			
				if(q1==91){ir_cr(40,26);printf("A");	}	if(q1==92){ir_cr(41,26);printf("c");	}
				if(q1==94){ir_cr(43,26);printf("d");	}	if(q1==95){ir_cr(44,26);printf("e");	}
			if(q1==96){ir_cr(45,26);printf("m");	}	if(q1==97){ir_cr(46,26);printf("i");	}	if(q1==98){ir_cr(47,26);printf("c");	}
			if(q1==99){ir_cr(48,26);printf("a");	}
		*/	
			
			ir_cr(p2,25);printf(" ");			//0
			ir_cr(p2,26);printf(" ");			//0						1° BORRA 			MEDIO HORIZONTAL 		HACIA DERECHA
			ir_cr(p2,27);printf(" ");			//0												
			p2++;																							 
		}
					//LETRAS
						//G
						if(q1>=83 & q1<=626){	if(asc1==250){asc1=0;} 		ir_cr(32,26);printf("%c",asc1);asc1++;		}
						//e
						if(q1>=84 & q1<=688){	if(asc2==250){asc2=0;}		ir_cr(33,26);printf("%c",asc2);asc2++;		}
						//s
						if(q1>=85 & q1<=762){	if(asc3==250){asc3=0;}		ir_cr(34,26);printf("%c",asc3);asc3++;		}
						//t
						if(q1>=86 & q1<=835){	if(asc4==250){asc4=0;}		ir_cr(35,26);printf("%c",asc4);asc4++;		}
						//i DESDE ACA
						if(q1>=87 & q1<=907){	if(asc5==250){asc5=0;}		ir_cr(36,26);printf("%c",asc5);asc5++;		}
						//o	
						if(q1>=88 & q1<=975){	if(asc6==250){asc6=0;}		ir_cr(37,26);printf("%c",asc6);asc6++;		}
						//n
						if(q1>=89 & q1<=1047){	if(asc7==250){asc7=0;}		ir_cr(38,26);printf("%c",asc7);asc7++;		}
						
						//A
						if(q1>=91 & q1<=1115){	if(asc8==250){asc8=0;}		ir_cr(40,26);printf("%c",asc8);asc8++;		}
						//c
						if(q1>=92 & q1<=1187){	if(asc9==250){asc9=0;}		ir_cr(41,26);printf("%c",asc9);asc9++;		}
						//a
						if(q1>=93 & q1<=1255){	if(asc10==250){asc10=0;}	ir_cr(42,26);printf("%c",asc10);asc10++;	}
						//d
						if(q1>=94 & q1<=1327){	if(asc11==250){asc11=0;}	ir_cr(43,26);printf("%c",asc11);asc11++;	}
						//e
						if(q1>=95 & q1<=1395){	if(asc12==250){asc12=0;}	ir_cr(44,26);printf("%c",asc12);asc12++;	}
						//m
						if(q1>=96 & q1<=1467){	if(asc13==250){asc13=0;}	ir_cr(45,26);printf("%c",asc13);asc13++;	}
						//i
						if(q1>=97 & q1<=1535){	if(asc14==250){asc14=0;}	ir_cr(46,26);printf("%c",asc14);asc14++;	}
						//c
						if(q1>=98 & q1<=1607){	if(asc15==250){asc15=0;}	ir_cr(47,26);printf("%c",asc15);asc15++;	}
						//a
						if(q1>=99 & q1<=1675){	if(asc16==250){asc16=0;}	ir_cr(48,26);printf("%c",asc16);asc16++;	}
						
				
						
						
						
						
		
		
		if(q1>=76 & q1<=100 ){
			ir_cr(73,p3);printf("%c%c%c",219,219,219);		//	26		2° PINTA 			DERECHA					HACIA ARRIBA 
			p3--;
		}
		
		if(q1==101){
			ir_cr(73,1);printf("%c%c%c",220,220,220);			//		2° PINTA 			ESQUINA SUPERIOR DERECHA
		}
		
		
		if(q1>=123 & q1<=146 ){
			ir_cr(73,p4);printf("   ");						//	26		2° BORRA 			DERECHA					HACIA ARRIBA 
			p4--;
					
		}
		if(q1==147){
			ir_cr(73,3);printf("%c%c%c",223,223,223);			//		2° PINTA 			ESQUINA SUPERIOR DERECHA
		}
		
		
		if(q1>=102 & q1<=170){
							 
			ir_cr(p5,1);printf("%c",220);		//72
			ir_cr(p5,2);printf("%c",219);		//72					3° PINTA 			ARRIBA 					HACIA IZQUIERDA
			ir_cr(p5,3);printf("%c",223);		//72											
			p5--;																			
		}
		
		if(q1>=147 & q1<=215){
							 
			ir_cr(b3,1);printf(" ");			//75
			ir_cr(b3,2);printf(" ");			//75					3° BORRA 			ARRIBA 					HACIA IZQUIERDA
			ir_cr(b3,3);printf(" ");			//75											
			b3--;																			
		}
		
		
		
		if(q1>=171 & q1<=215 ){
			ir_cr(4,p6);printf("%c%c%c",219,219,219);		//	4		4° PINTA 			IZQUIERDA				HACIA ABAJO 
			p6++;
		}
		
		if(q1==216){
			ir_cr(4,48);printf("%c%c%c",223,223,223);		//			4° PINTA 			ESQUINA INFERIOR IZQUIERDA
		}
		
		if(q1>=216 & q1<=260 ){
			ir_cr(4,b4);printf("   ");						//	1		4° BORRA 			IZQUIERDA				HACIA ABAJO 
			b4++;
		}
		
		if(q1==261){
			ir_cr(4,46);printf("%c%c%c",220,220,220);		//			4° PINTA 			ESQUINA INFERIOR IZQUIERDA
		}
		
		
		if(q1>=217 & q1<=285){
							 
			ir_cr(p7,46);printf("%c",220);		//7
			ir_cr(p7,47);printf("%c",219);		//7						5° PINTA		 	ABAJO 					HACIA DERECHA
			ir_cr(p7,48);printf("%c",223);		//7												
			p7++;																				
		}
		
		if(q1>=261 & q1<=329){				//68
							 
			ir_cr(b5,46);printf(" ");		//4
			ir_cr(b5,47);printf(" ");		//4						5° BORRA		 	ABAJO 					HACIA DERECHA
			ir_cr(b5,48);printf(" ");		//4												
			b5++;																				
		}
		
		
		// COMIENZA CIRCULO	
	
		if(q1>=286 & q1<=331 ){
			ir_cr(73,p8);printf("%c%c%c",219,219,219);		//47		1° PINTA 			DERECHA					HACIA ARRIBA 
			p8--;
		}
		
		if(q1==332){
			ir_cr(73,1);printf("%c%c%c",220,220,220);			//		1° PINTA 			ESQUINA SUPERIOR DERECHA alto
		}
		
		if(q1>=333 & q1<=401){					//68
			if(q1==333){p5=72;	}				 
			ir_cr(p5,1);printf("%c",220);		//72
			ir_cr(p5,2);printf("%c",219);		//72							2° PINTA 			ARRIBA 					HACIA IZQUIERDA
			ir_cr(p5,3);printf("%c",223);		//72											
			p5--;																			
		}
		
		if(q1>=402 & q1<=446 ){					//44
			if(q1==402){p6=3;}
			ir_cr(4,p6);printf("%c%c%c",219,219,219);		//3								3° PINTA 			IZQUIERDA				HACIA ABAJO 
			p6++;
		}
		
		if(q1==447){
			ir_cr(4,48);printf("%c%c%c",223,223,223);		//								3° PINTA 			ESQUINA INFERIOR IZQUIERDA
		}	
			
	/*	if(q1>=448 & q1<=516){					//68	APAGO ESTA PARA TENER CUADRO SIN MOVIMIENTO
			if(q1==448){p7=7;}				 
			ir_cr(p7,46);printf("%c",220);		//7
			ir_cr(p7,47);printf("%c",219);		//7								4° PINTA		 	ABAJO 					HACIA DERECHA
			ir_cr(p7,48);printf("%c",223);		//7												
			p7++;																				
		}
	*/	
		if(q1>=448 & q1<=513){					//68	MODIFIVACION PARA CUADRO SIN MOVIMIENTO
			if(q1==448){p7=7;}				 
			ir_cr(p7,46);printf("%c",220);		//7
			ir_cr(p7,47);printf("%c",219);		//7								4° PINTA		 	ABAJO 					HACIA DERECHA
			ir_cr(p7,48);printf("%c",223);		//7												
			p7++;																				
		}
		
				
				//BORRAR
/*				
				if(q1>=447 & q1<=491 ){				//45
					if(q1==447){p8=48;}	
					ir_cr(73,p8);printf("   ");		//48				1° BOORA 			DERECHA					HACIA ARRIBA 
					p8--;
				}

				if(q1==491){
					ir_cr(73,3);printf("%c%c%c",223,223,223);	//		2° PINTA 			ESQUINA SUPERIOR DERECHA
				}
		
				if(q1>=492 & q1<=560){				//68
				if(q1==492){b3=75;}					 
				ir_cr(b3,1);printf(" ");			//75
				ir_cr(b3,2);printf(" ");			//75					3° BORRA 			ARRIBA 					HACIA IZQUIERDA
				ir_cr(b3,3);printf(" ");			//75											
				b3--;																			
				}
		
				if(q1>=561 & q1<=605 ){				//44
				if(q1==561){b4=1;}	
				ir_cr(4,b4);printf("   ");			//1						4° BORRA 			IZQUIERDA				HACIA ABAJO 
				b4++;
				}
		
				if(q1==607){
				ir_cr(4,46);printf("%c%c%c",220,220,220);		//			5° PINTA 			ESQUINA INFERIOR IZQUIERDA
				}
		
		
				if(q1>=608 & q1<=676){				//68
				if(q1==608){b5=4;}			 
				ir_cr(b5,46);printf(" ");		//4
				ir_cr(b5,47);printf(" ");		//4						5° BORRA		 	ABAJO 					HACIA DERECHA
				ir_cr(b5,48);printf(" ");		//4												
				b5++;																				
				}
		//CIRCULO 2
		
		if(q1>=517 & q1<=562 ){							//45
		if(q1==517){p8=47;}	
		ir_cr(73,p8);printf("%c%c%c",219,219,219);		//47		1° PINTA 			DERECHA					HACIA ARRIBA 
		p8--;
		}
		
		if(q1==563){
		ir_cr(73,1);printf("%c%c%c",220,220,220);			//		1° PINTA 			ESQUINA SUPERIOR DERECHA alto
		}
		
		if(q1>=564 & q1<=632){					//68
		if(q1==564){p5=72;	}				 
		ir_cr(p5,1);printf("%c",220);		//72
		ir_cr(p5,2);printf("%c",219);		//72							2° PINTA 			ARRIBA 					HACIA IZQUIERDA
		ir_cr(p5,3);printf("%c",223);		//72											
		p5--;																			
		}
*/		
				//LINEA de LETRA 1 - 605
		
				if(q1>=604 & q1<=648 ){				//44
				if(q1==604){p6=3;}
				ir_cr(32,p6);printf("%c",219);		//3					PINTA 							HACIA ABAJO 
				p6++;
				}
								
				if(q1>=626 & q1<=667 ){				//44    41
				if(q1==626){b6=4;}	
				ir_cr(32,3);printf("%c",223);//corrige linea sobrante arriba 						
				ir_cr(32,b6);printf(" ");			//3					BORRA 							HACIA ABAJO 
				b6++;
				}
				if(q1==667){	ir_cr(32,46);printf("%c",220);}//  = de fin borrar  corrige linea sobrante abajo
								
					//LETRA G	- 649
					if(q1==649){ir_cr(32,26);printf("G");	}// +1 de fin fintar
							
								
								//LINEA de  LETRA 2 - 
								if(q1>=668 & q1<=713 ){				//45
								if(q1==668){p8=47;}	
								ir_cr(33,p8);printf("%c",219);		//47		 PINTA 								HACIA ARRIBA 
								p8--;
								}
								
								if(q1>=690 & q1<=731 ){				//41
								if(q1==690){b6=45;ir_cr(33,46);printf("%c",220);	}	//corrige linea sobrante abajo					
								ir_cr(33,b6);printf(" ");		//47		 PINTA 								HACIA ARRIBA 
								b6--;					
								}
								if(q1==732){	ir_cr(33,3);printf("%c",223);		}	//corrige linea sobrante arriba 

									//LETRA a  - 709
									if(q1==710){ir_cr(33,26);printf("e");	}


				//LINEA de LETRA 3 - 740
		
				if(q1>=740 & q1<=784 ){				//44
				if(q1==740){p6=3;}
				ir_cr(34,p6);printf("%c",219);		//3					PINTA 							HACIA ABAJO 
				p6++;
				}
								
				if(q1>=762 & q1<=803 ){				//+22   -   41
				if(q1==762){b6=4;}	
				ir_cr(34,3);printf("%c",223);//corrige linea sobrante arriba 						
				ir_cr(34,b6);printf(" ");			//3					BORRA 							HACIA ABAJO 
				b6++;
				}
				if(q1==803){	ir_cr(34,46);printf("%c",220);}//  = de fin borrar  corrige linea sobrante abajo
						
						//LETRA G	- 649
						if(q1==784){ir_cr(34,26);printf("s");	}// +1 de fin fintar

								
								//LINEA de LETRA 4 - 815
								
								if(q1>=815 & q1<=860 ){									//45
								if(q1==815){p8=47;}	
								ir_cr(35,p8);printf("%c",219);							//47 -PINTA-HACIA ARRIBA 
								p8--;
								}
								
								if(q1>=837 & q1<=878 ){									//41
								if(q1==837){b6=45;ir_cr(35,46);printf("%c",220);	}	//corrige linea sobrante abajo					
								ir_cr(35,b6);printf(" ");								//47 -PINTA-HACIA ARRIBA 
								b6--;					
								}
								if(q1==879){	ir_cr(35,3);printf("%c",223);		}	//corrige linea sobrante arriba 

									//LETRA a  - 709
									if(q1==857){ir_cr(35,26);printf("t");	}

				
				//LINEA de LETRA 5 - 885
			
				if(q1>=885 & q1<=929 ){							//44
				if(q1==885){p6=3;}
				ir_cr(36,p6);printf("%c",219);						//3					PINTA 							HACIA ABAJO 
				p6++;
				}
								
				if(q1>=907 & q1<=948 ){							//+22   -   41
				if(q1==907){b6=4;}				
				ir_cr(36,3);printf("%c",223);						//corrige linea sobrante arriba 						
				ir_cr(36,b6);printf(" ");							//3					BORRA 							HACIA ABAJO 
				b6++;
				}
				if(q1==948){	ir_cr(36,46);printf("%c",220);}		//  = de fin borrar  corrige linea sobrante abajo
						
						//LETRA G	- k + 23 = 908
						if(q1==929){ir_cr(36,26);printf("i");	}	// +1 de fin fintar



								//LINEA de LETRA 6 - 955
							
								if(q1>=955 & q1<=1000 ){									//45
								if(q1==955){p8=47;}	
								ir_cr(37,p8);printf("%c",219);							//47 -PINTA-HACIA ARRIBA 
								p8--;
								}
								
								if(q1>=977 & q1<=1018 ){							//41
								if(q1==977){b6=45;ir_cr(37,46);printf("%c",220);	}	//corrige linea sobrante abajo					
								ir_cr(37,b6);printf(" ");								//47 -PINTA-HACIA ARRIBA 
								b6--;					
								}
								if(q1==1019){	ir_cr(37,3);printf("%c",223);		}	//corrige linea sobrante arriba 

									//LETRA a  - 709
									if(q1==997){ir_cr(37,26);printf("o");	}

				//LINEA de LETRA 7 - 1025
				
				if(q1>=1025 & q1<=1069 ){							//44
				if(q1==1025){p6=3;}
				ir_cr(38,p6);printf("%c",219);						//3		-PINTA-	HACIA ABAJO 
				p6++;
				}
								
				if(q1>=1047 & q1<=1088 ){							//+22   -   41
				if(q1==1047){b6=4;}	
				ir_cr(38,3);printf("%c",223);						//corrige linea sobrante arriba 						
				ir_cr(38,b6);printf(" ");							//3					BORRA 							HACIA ABAJO 
				b6++;
				}
				if(q1==1088){	ir_cr(38,46);printf("%c",220);}		//  = de fin borrar  corrige linea sobrante abajo
						
						//LETRA G	/ k + 23 = 
						if(q1==1069){ir_cr(38,26);printf("n");	}	// +1 de fin fintar

							

								//LINEA de LETRA 8 - 1095
															
								if(q1>=1095 & q1<=1140 ){									//45
								if(q1==1095){p8=47;}	
								ir_cr(40,p8);printf("%c",219);							//47 -PINTA-HACIA ARRIBA 
								p8--;
								}
								
								if(q1>=1117& q1<=1158){							//41
								if(q1==1117){b6=45;ir_cr(40,46);printf("%c",220);	}	//corrige linea sobrante abajo					
								ir_cr(40,b6);printf(" ");								//47 -PINTA-HACIA ARRIBA 
								b6--;					
								}
								if(q1==1159){	ir_cr(40,3);printf("%c",223);		}	//corrige linea sobrante arriba 

									//LETRA a  - 709
									if(q1==1137){ir_cr(40,26);printf("A");	}
		
		
			//LINEA de LETRA 9 - 1165
				
				if(q1>=1165 & q1<=1209 ){							//44
				if(q1==1165){p6=3;}
				ir_cr(41,p6);printf("%c",219);						//3		-PINTA-	HACIA ABAJO 
				p6++;
				}
								
				if(q1>=1187 & q1<=1228 ){							//+22   -   41
				if(q1==1187){b6=4;}	
				ir_cr(41,3);printf("%c",223);						//corrige linea sobrante arriba 						
				ir_cr(41,b6);printf(" ");							//3					BORRA 							HACIA ABAJO 
				b6++;
				}
				if(q1==1228){	ir_cr(41,46);printf("%c",220);}		//  = de fin borrar  corrige linea sobrante abajo
						
						//LETRA G	/ k + 23 = 
						if(q1==1209){ir_cr(41,26);printf("c");	}	// +1 de fin fintar
		
		
								//LINEA de LETRA 10 - 1235 
								
								if(q1>=1235 & q1<=1280 ){									//45
								if(q1==1235){p8=47;}	
								ir_cr(42,p8);printf("%c",219);							//47 -PINTA-HACIA ARRIBA 
								p8--;
								}
								
								if(q1>=1257 & q1<=1298){							//42
								if(q1==1257){b6=45;ir_cr(42,46);printf("%c",220);	}	//corrige linea sobrante abajo					
								ir_cr(42,b6);printf(" ");								//47 -PINTA-HACIA ARRIBA 
								b6--;					
								}
								if(q1==1299){	ir_cr(42,3);printf("%c",223);		}	//corrige linea sobrante arriba 

									//LETRA a  - 709
									if(q1==1277){ir_cr(42,26);printf("a");	}
		
				//LINEA de LETRA 11 - 1305
				
				if(q1>=1305& q1<=1349){							//44
				if(q1==1305){p6=3;}
				ir_cr(43,p6);printf("%c",219);						//3		-PINTA-	HACIA ABAJO 
				p6++;
				}
								
				if(q1>=1327& q1<=1368){							//+22   -   41
				if(q1==1327){b6=4;}	
				ir_cr(43,3);printf("%c",223);						//corrige linea sobrante arriba 						
				ir_cr(43,b6);printf(" ");							//3					BORRA 							HACIA ABAJO 
				b6++;
				}
				if(q1==1368){	ir_cr(43,46);printf("%c",220);}		//  = de fin borrar  corrige linea sobrante abajo
						
						//LETRA G	/ k + 23 = 
						if(q1==1349){ir_cr(43,26);printf("d");	}	// +1 de fin fintar
		
		
		
								//LINEA de LETRA 12 - 1375
								
								if(q1>=1375 & q1<=1420 ){									//45
								if(q1==1375){p8=47;}	
								ir_cr(44,p8);printf("%c",219);							//47 -PINTA-HACIA ARRIBA 
								p8--;
								}
								
								if(q1>=1397 & q1<=1438){							//41
								if(q1==1397){b6=45;ir_cr(44,46);printf("%c",220);	}	//corrige linea sobrante abajo					
								ir_cr(44,b6);printf(" ");								//47 -PINTA-HACIA ARRIBA 
								b6--;					
								}
								if(q1==1439){	ir_cr(44,3);printf("%c",223);		}	//corrige linea sobrante arriba 

									//LETRA a  - 709
									if(q1==1417){ir_cr(44,26);printf("e");	}
		
		
		
				//LINEA de LETRA 13 - 1445
				
				if(q1>=1445& q1<=1489){							//44
				if(q1==1445){p6=3;}
				ir_cr(45,p6);printf("%c",219);						//3		-PINTA-	HACIA ABAJO 
				p6++;
				}
								
				if(q1>=1467& q1<=1508){							//+22   -   41
				if(q1==1467){b6=4;}	
				ir_cr(45,3);printf("%c",223);						//corrige linea sobrante arriba 						
				ir_cr(45,b6);printf(" ");							//3					BORRA 							HACIA ABAJO 
				b6++;
				}
				if(q1==1508){	ir_cr(45,46);printf("%c",220);}		//  = de fin borrar  corrige linea sobrante abajo
						
						//LETRA G	/ k + 23 = 
						if(q1==1489){ir_cr(45,26);printf("m");	}	// +1 de fin fintar
		
		
								//LINEA de LETRA 14 - 1515
								
								if(q1>=1515 & q1<=1560 ){									//45
								if(q1==1515){p8=47;}	
								ir_cr(46,p8);printf("%c",219);							//47 -PINTA-HACIA ARRIBA 
								p8--;
								}
								
								if(q1>=1537 & q1<=1578){							//41
								if(q1==1537){b6=45;ir_cr(46,46);printf("%c",220);	}	//corrige linea sobrante abajo					
								ir_cr(46,b6);printf(" ");								//47 -PINTA-HACIA ARRIBA 
								b6--;					
								}
								if(q1==1579){	ir_cr(46,3);printf("%c",223);		}	//corrige linea sobrante arriba 

									//LETRA a  - 709
									if(q1==1557){ir_cr(46,26);printf("i");	}
		
		
		
				//LINEA de LETRA 15 - 1585
				
				if(q1>=1585& q1<=1629){							//44
				if(q1==1585){p6=3;}
				ir_cr(47,p6);printf("%c",219);						//3		-PINTA-	HACIA ABAJO 
				p6++;
				}
								
				if(q1>=1607& q1<=1648){							//+22   -   41
				if(q1==1607){b6=4;}	
				ir_cr(47,3);printf("%c",223);						//corrige linea sobrante arriba 						
				ir_cr(47,b6);printf(" ");							//3					BORRA 							HACIA ABAJO 
				b6++;
				}
				if(q1==1648){	ir_cr(47,46);printf("%c",220);}		//  = de fin borrar  corrige linea sobrante abajo
						
						//LETRA G	/ k + 23 = 
						if(q1==1629){ir_cr(47,26);printf("c");	}	// +1 de fin fintar
		
		
		
								//LINEA de LETRA 16 - 1655
								
								if(q1>=1655 & q1<=1700 ){									//45
								if(q1==1655){p8=47;}	
								ir_cr(48,p8);printf("%c",219);							//47 -PINTA-HACIA ARRIBA 
								p8--;
								}
								
								if(q1>=1677 & q1<=1718){							//41
								if(q1==1677){b6=45;ir_cr(48,46);printf("%c",220);	}	//corrige linea sobrante abajo					
								ir_cr(48,b6);printf(" ");								//47 -PINTA-HACIA ARRIBA 
								b6--;					
								}
								if(q1==1719){	ir_cr(48,3);printf("%c",223);		}	//corrige linea sobrante arriba 

									//LETRA a  - 709
									if(q1==1697){ir_cr(48,26);printf("a");	}
		
		
		
		
		
		//			if(q1==998){
		//			ir_cr(32,26);printf("Gestion Academica");
		//			}

//	if(q1>=600){
//		ir_cr(63,50); printf("%d",q1);
//		ir_cr(20,51); system("pause");
//		}  
	}
	

	
	
	ir_cr(20,51); system("pause");
}

int lineaC(int a, int b, int c){
	if(q1<=40){										// 
			ir_cr(q1-1,a);printf("%c",220);			//1
			ir_cr(q1-1,b);printf("%c",219);			//1
			ir_cr(q1-1,c);printf("%c",223);			//1	
													//
			ir_cr(80-q1,a);printf("%c",220);		//79		1ra PARTE - PINTA
			ir_cr(80-q1,b);printf("%c",219);		//79
			ir_cr(80-q1,c);printf("%c",223);		//79
													//
			tempo(ccc);								//
		}
		if(q1>40 & q1<=79){							//
			ir_cr(q1-41,a);printf(" ");				//
			ir_cr(q1-41,b);printf(" ");				//
			ir_cr(q1-41,c);printf(" ");				//
													//		1ra PARTE - BORRA
			ir_cr(120-q1,a);printf(" ");			//
			ir_cr(120-q1,b);printf(" ");			//
			ir_cr(120-q1,c);printf(" ");			//
													//
			tempo(ccc);								//
		}
		

		if(q1>79 & q1<=116){						//
			ir_cr(q1-41,a);printf("%c",220);		//
			ir_cr(q1-41,b);printf("%c",219);		//HACIA DERECHA
			ir_cr(q1-41,c);printf("%c",223);		//
													//		2da PARTE - PINTA
			ir_cr(120-q1,a);printf("%c",220);		//
			ir_cr(120-q1,b);printf("%c",219);		//HACIA IZQUIERDA
			ir_cr(120-q1,c);printf("%c",223);		//
													//
			tempo(ccc);								//
		}
		

		
}






int lineaB(){
	if(q1>=159 & q1<=185){												 

		ir_cr(4,v10);printf("%c%c%c",219,219,219);			//	26		IZQUIERDA		1ra PARTE - PINTA HACIA ARRIBA			
		ir_cr(73,v10);printf("%c%c%c",219,219,219);			//	26		DERECHA

		ir_cr(4,v11);printf("%c%c%c",219,219,219);			//	26		 IZQUIERDA		1ra PARTE - PINTA HACIA ABAJO																
		ir_cr(73,v11);printf("%c%c%c",219,219,219);			//	26		DERECHA
		v10++;			v11--;
		tempo(bbb);												//
	
	}
	if(q1>=175 & q1<=201){							//	188-214=26
		ir_cr(4, v12);	printf("   ");			//26				IZQUIERDA		1da PARTE - BORRA HACIA ARRIBA			188-214
		ir_cr(73,v12);	printf("   ");			//26				DERECHA
		
		ir_cr(4, v13);	printf("   ");			//26				IZQUIERDA		1da PARTE - BORRA HACIA ABAJO
		ir_cr(73,v13);	printf("   ");			//26				DERECHA
		v12++;			v13--;
		tempo(bbb);									//
	}	

	if(q1>=216 & q1<=242){												 
	
		ir_cr(4, v14);printf("%c%c%c",219,219,219);			//0 IZQUIERDA		2ra PARTE - PINTA HACIA ABAJO																
		ir_cr(73,v14);printf("%c%c%c",219,219,219);			//0	DERECHA

		ir_cr(4, v15);printf("%c%c%c",219,219,219);			//52	IZQUIERDA		2ra PARTE - PINTA HACIA ARRIBA			
		ir_cr(73,v15);printf("%c%c%c",219,219,219);			//52	DERECHA
		v14++;			v15--;
		tempo(bbb);												//
	}
	
	if(q1>=246 & q1<=272){
		
		ir_cr(4, v16);	printf("   ");			//0 IZQUIERDA		1da PARTE - BORRA HACIA ABAJO
		ir_cr(73,v16);	printf("   ");			//0	DERECHA
		
		ir_cr(4, v17);	printf("   ");			//52	IZQUIERDA		1da PARTE - BORRA HACIA ARRIBA
		ir_cr(73,v17);	printf("   ");			//52	DERECHA
		v16++;			v17--;
		tempo(bbb);									//
	}	
	
	if(q1>=276 & q1<=299){												 

		ir_cr(4,v18);printf("%c%c%c",219,219,219);			//26	IZQUIERDA		1ra PARTE - PINTA HACIA ABAJO			
		ir_cr(73,v18);printf("%c%c%c",219,219,219);			//26	DERECHA

		ir_cr(4, v19);printf("%c%c%c",219,219,219);			//26 IZQUIERDA		1ra PARTE - PINTA HACIA ARRIBA																
		ir_cr(73,v19);printf("%c%c%c",219,219,219);			//26	DERECHA
		v18++;			v19--;
			
		tempo(bbb);												//
	}
	
	
	
	
	
}





int lineaA(int a, int b, int c){
	if(q1<=40){	
													// 
			ir_cr(v1,a);printf("%c",220);			//0
			ir_cr(v1,b);printf("%c",219);			//0
			ir_cr(v1,c);printf("%c",223);			//0	
													//
			ir_cr(v2,a);printf("%c",220);			//79		1ra PARTE - PINTA
			ir_cr(v2,b);printf("%c",219);			//79
			ir_cr(v2,c);printf("%c",223);			//79
			v1++;			v2--;					//
			tempo(ccc);								//
		}
		if(q1>=30 & q1<=68){							//		eera 41 - 79
			ir_cr(v3,a);printf(" ");				//0
			ir_cr(v3,b);printf(" ");				//0
			ir_cr(v3,c);printf(" ");				//0
													//			1ra PARTE - BORRA
			ir_cr(v4,a);printf(" ");				//79
			ir_cr(v4,b);printf(" ");				//79
			ir_cr(v4,c);printf(" ");				//79
			v3++;			v4--;					//
			tempo(ccc);								//
		}


		if(q1>=80 & q1<=116){						//
			ir_cr(v5,a);printf("%c",220);			//39
			ir_cr(v5,b);printf("%c",219);			//39			HACIA DERECHA
			ir_cr(v5,c);printf("%c",223);			//39
													//						2da PARTE - PINTA
			ir_cr(v6,a);printf("%c",220);			//40
			ir_cr(v6,b);printf("%c",219);			//40			HACIA IZQUIERDA
			ir_cr(v6,c);printf("%c",223);			//40
			v5++;			v6--;					//
			tempo(ccc);								//
		}
		
		if(q1>=110 & q1<=142){						//	era 119 - 152
			ir_cr(v7,a);printf(" ");				//40
			ir_cr(v7,b);printf(" ");				//40
			ir_cr(v7,c);printf(" ");				//40
													//					2da PARTE - BORRA
			ir_cr(v8,a);printf(" ");				//39			
			ir_cr(v8,b);printf(" ");				//39
			ir_cr(v8,c);printf(" ");				//39
			v7++;			v8--;					//
			tempo(ccc);								//
		}
		
}



int linea1(int a, int b, int c){
	if(q1>=1+q3 & q1<=40+q3){						// 
			ir_cr(q1-1-q3,a);printf("%c",220);		//0
			ir_cr(q1-1-q3,b);printf("%c",219);		//0
			ir_cr(q1-1-q3,c);printf("%c",223);		//0	
													//
			ir_cr(80+q3-q1,a);printf("%c",220);		//79		1ra PARTE - PINTA
			ir_cr(80+q3-q1,b);printf("%c",219);		//79
			ir_cr(80+q3-q1,c);printf("%c",223);		//79
													//
			tempo(aaa);								//
		}

		
		
/*		if(q1>=41+q3 & q1<=79+q3){					//
			ir_cr(q1-41-q3,a);printf(" ");			//0
			ir_cr(q1-41-q3,b);printf(" ");			//0
			ir_cr(q1-41-q3,c);printf(" ");			//0
													//		1ra PARTE - BORRA
			ir_cr(120+q3-q1,a);printf(" ");			//
			ir_cr(120+q3-q1,b);printf(" ");			//
			ir_cr(120+q3-q1,c);printf(" ");			//
													//
			tempo(aaa);								//
		}		*/

		if(q1>=80+q3 & q1<=120+q3){					//
			ir_cr(q1-41-q3,a);printf("%c",220);		//
			ir_cr(q1-41-q3,b);printf("%c",219);		//HACIA DERECHA
			ir_cr(q1-41-q3,c);printf("%c",223);		//
													//		2da PARTE - PINTA
			ir_cr(120+q3-q1,a);printf("%c",220);	//
			ir_cr(120+q3-q1,b);printf("%c",219);	//HACIA IZQUIERDA
			ir_cr(120+q3-q1,c);printf("%c",223);	//
													//
			tempo(aaa);								//
		}
		
		if(q1>=120+q3 & q1<=159+q3){				//
			ir_cr(q1-80-q3,a);printf(" ");			//
			ir_cr(q1-80-q3,b);printf(" ");			//
			ir_cr(q1-80-q3,c);printf(" ");			//
													//
			ir_cr(159+q3-q1,a);printf(" ");			//		2da PARTE - BORRA
			ir_cr(159+q3-q1,b);printf(" ");			//
			ir_cr(159+q3-q1,c);printf(" ");			//
													//
			tempo(aaa);								//
		}
		
}

int linea2(int a, int b, int c){
	if(q1>=1+q4 & q1<=40+q4){						// 
			ir_cr(q1-1-q4,a);printf("%c",220);		//1
			ir_cr(q1-1-q4,b);printf("%c",219);		//1
			ir_cr(q1-1-q4,c);printf("%c",223);		//1	
													//
			ir_cr(80+q4-q1,a);printf("%c",220);		//79		1ra PARTE - PINTA
			ir_cr(80+q4-q1,b);printf("%c",219);		//79
			ir_cr(80+q4-q1,c);printf("%c",223);		//79
													//
			tempo(aaa);								//
		}
		
	/*	if(q1>=41+q4 & q1<=79+q4){					//
			ir_cr(q1-41-q4,a);printf(" ");			//0
			ir_cr(q1-41-q4,b);printf(" ");			//0
			ir_cr(q1-41-q4,c);printf(" ");			//0
													//		1ra PARTE - BORRA
			ir_cr(120+q4-q1,a);printf(" ");			//
			ir_cr(120+q4-q1,b);printf(" ");			//
			ir_cr(120+q4-q1,c);printf(" ");			//
													//
			tempo(aaa);								//
		}		*/

		if(q1>=80+q4 & q1<=120+q4){					//
			ir_cr(q1-41-q4,a);printf("%c",220);		//
			ir_cr(q1-41-q4,b);printf("%c",219);		//HACIA DERECHA
			ir_cr(q1-41-q4,c);printf("%c",223);		//
													//		2da PARTE - PINTA
			ir_cr(120+q4-q1,a);printf("%c",220);	//
			ir_cr(120+q4-q1,b);printf("%c",219);	//HACIA IZQUIERDA
			ir_cr(120+q4-q1,c);printf("%c",223);	//
													//
			tempo(aaa);								//
		}
		
		if(q1>=120+q4 & q1<=159+q4){				//
			ir_cr(q1-80-q4,a);printf(" ");			//
			ir_cr(q1-80-q4,b);printf(" ");			//
			ir_cr(q1-80-q4,c);printf(" ");			//
													//
			ir_cr(159+q4-q1,a);printf(" ");			//		2da PARTE - BORRA
			ir_cr(159+q4-q1,b);printf(" ");			//
			ir_cr(159+q4-q1,c);printf(" ");			//
													//
			tempo(aaa);								//
		}
		
}


int linea3(int a, int b, int c){
	if(q1>=1+q5 & q1<=40+q5){						// 
			ir_cr(q1-1-q5,a);printf("%c",220);		//1
			ir_cr(q1-1-q5,b);printf("%c",219);		//1
			ir_cr(q1-1-q5,c);printf("%c",223);		//1	
													//
			ir_cr(80+q5-q1,a);printf("%c",220);		//79		1ra PARTE - PINTA
			ir_cr(80+q5-q1,b);printf("%c",219);		//79
			ir_cr(80+q5-q1,c);printf("%c",223);		//79
													//
			tempo(aaa);								//
		}
		
/*		if(q1>=41+q5 & q1<=79+q5){					//
			ir_cr(q1-41-q5,a);printf(" ");			//0
			ir_cr(q1-41-q5,b);printf(" ");			//0
			ir_cr(q1-41-q5,c);printf(" ");			//0
													//		1ra PARTE - BORRA
			ir_cr(120+q5-q1,a);printf(" ");			//
			ir_cr(120+q5-q1,b);printf(" ");			//
			ir_cr(120+q5-q1,c);printf(" ");			//
													//
			tempo(aaa);								//
		}		*/

		if(q1>=80+q5 & q1<=120+q5){					//
			ir_cr(q1-41-q5,a);printf("%c",220);		//
			ir_cr(q1-41-q5,b);printf("%c",219);		//HACIA DERECHA
			ir_cr(q1-41-q5,c);printf("%c",223);		//
													//		2da PARTE - PINTA
			ir_cr(120+q5-q1,a);printf("%c",220);	//
			ir_cr(120+q5-q1,b);printf("%c",219);	//HACIA IZQUIERDA
			ir_cr(120+q5-q1,c);printf("%c",223);	//
													//
			tempo(aaa);								//
		}
		
		if(q1>=120+q5 & q1<=159+q5){				//
			ir_cr(q1-80-q5,a);printf(" ");			//
			ir_cr(q1-80-q5,b);printf(" ");			//
			ir_cr(q1-80-q5,c);printf(" ");			//
													//
			ir_cr(159+q5-q1,a);printf(" ");			//		2da PARTE - BORRA
			ir_cr(159+q5-q1,b);printf(" ");			//
			ir_cr(159+q5-q1,c);printf(" ");			//
													//
			tempo(aaa);								//
		}
		
}

int linea4(int a, int b, int c){
	if(q1>=1+q6 & q1<=40+q6){						// 
			ir_cr(q1-1-q6,a);printf("%c",220);		//1
			ir_cr(q1-1-q6,b);printf("%c",219);		//1
			ir_cr(q1-1-q6,c);printf("%c",223);		//1	
													//
			ir_cr(80+q6-q1,a);printf("%c",220);		//79		1ra PARTE - PINTA
			ir_cr(80+q6-q1,b);printf("%c",219);		//79
			ir_cr(80+q6-q1,c);printf("%c",223);		//79
													//
			tempo(aaa);								//
		}
		
/*		if(q1>=41+q6 & q1<=79+q6){					//
			ir_cr(q1-41-q6,a);printf(" ");			//0
			ir_cr(q1-41-q6,b);printf(" ");			//0
			ir_cr(q1-41-q6,c);printf(" ");			//0
													//		1ra PARTE - BORRA
			ir_cr(120+q6-q1,a);printf(" ");			//
			ir_cr(120+q6-q1,b);printf(" ");			//
			ir_cr(120+q6-q1,c);printf(" ");			//
													//
			tempo(aaa);								//
		}		
*/
		if(q1>=80+q6 & q1<=120+q6){					//
			ir_cr(q1-41-q6,a);printf("%c",220);		//
			ir_cr(q1-41-q6,b);printf("%c",219);		//HACIA DERECHA
			ir_cr(q1-41-q6,c);printf("%c",223);		//
													//		2da PARTE - PINTA
			ir_cr(120+q6-q1,a);printf("%c",220);	//
			ir_cr(120+q6-q1,b);printf("%c",219);	//HACIA IZQUIERDA
			ir_cr(120+q6-q1,c);printf("%c",223);	//
													//
			tempo(aaa);								//
		}
		
		if(q1>=120+q6 & q1<=159+q6){				//
			ir_cr(q1-80-q6,a);printf(" ");			//
			ir_cr(q1-80-q6,b);printf(" ");			//
			ir_cr(q1-80-q6,c);printf(" ");			//
													//
			ir_cr(159+q6-q1,a);printf(" ");			//		2da PARTE - BORRA
			ir_cr(159+q6-q1,b);printf(" ");			//
			ir_cr(159+q6-q1,c);printf(" ");			//
													//
			tempo(aaa);								//
		}
		
}


int linea5(int a, int b, int c){
	if(q1>=1+q7 & q1<=40+q7){						// 
			ir_cr(q1-1-q7,a);printf("%c",220);		//1
			ir_cr(q1-1-q7,b);printf("%c",219);		//1
			ir_cr(q1-1-q7,c);printf("%c",223);		//1	
													//
			ir_cr(80+q7-q1,a);printf("%c",220);		//79		1ra PARTE - PINTA
			ir_cr(80+q7-q1,b);printf("%c",219);		//79
			ir_cr(80+q7-q1,c);printf("%c",223);		//79
													//
			tempo(aaa);								//
		}
		
/*		if(q1>=41+q7 & q1<=79+q7){					//
			ir_cr(q1-41-q7,a);printf(" ");			//0
			ir_cr(q1-41-q7,b);printf(" ");			//0
			ir_cr(q1-41-q7,c);printf(" ");			//0
													//		1ra PARTE - BORRA
			ir_cr(120+q7-q1,a);printf(" ");			//
			ir_cr(120+q7-q1,b);printf(" ");			//
			ir_cr(120+q7-q1,c);printf(" ");			//
													//
			tempo(aaa);								//
		}		
*/
		if(q1>=80+q7 & q1<=120+q7){					//
			ir_cr(q1-41-q7,a);printf("%c",220);		//
			ir_cr(q1-41-q7,b);printf("%c",219);		//HACIA DERECHA
			ir_cr(q1-41-q7,c);printf("%c",223);		//
													//		2da PARTE - PINTA
			ir_cr(120+q7-q1,a);printf("%c",220);	//
			ir_cr(120+q7-q1,b);printf("%c",219);	//HACIA IZQUIERDA
			ir_cr(120+q7-q1,c);printf("%c",223);	//
													//
			tempo(aaa);								//
		}
		
		if(q1>=120+q7 & q1<=159+q7){				//
			ir_cr(q1-80-q7,a);printf(" ");			//
			ir_cr(q1-80-q7,b);printf(" ");			//
			ir_cr(q1-80-q7,c);printf(" ");			//
													//
			ir_cr(159+q7-q1,a);printf(" ");			//		2da PARTE - BORRA
			ir_cr(159+q7-q1,b);printf(" ");			//
			ir_cr(159+q7-q1,c);printf(" ");			//
													//
			tempo(aaa);								//
		}
		
}

int linea6(int a, int b, int c){
	if(q1>=1+q8 & q1<=40+q8){						// 
			ir_cr(q1-1-q8,a);printf("%c",220);		//1
			ir_cr(q1-1-q8,b);printf("%c",219);		//1
			ir_cr(q1-1-q8,c);printf("%c",223);		//1	
													//
			ir_cr(80+q8-q1,a);printf("%c",220);		//79		1ra PARTE - PINTA
			ir_cr(80+q8-q1,b);printf("%c",219);		//79
			ir_cr(80+q8-q1,c);printf("%c",223);		//79
													//
			tempo(aaa);								//
		}
		
/*		if(q1>=41+q8 & q1<=79+q8){					//
			ir_cr(q1-41-q8,a);printf(" ");			//0
			ir_cr(q1-41-q8,b);printf(" ");			//0
			ir_cr(q1-41-q8,c);printf(" ");			//0
													//		1ra PARTE - BORRA
			ir_cr(120+q8-q1,a);printf(" ");			//
			ir_cr(120+q8-q1,b);printf(" ");			//
			ir_cr(120+q8-q1,c);printf(" ");			//
													//
			tempo(aaa);								//
		}		
*/
		if(q1>=80+q8 & q1<=120+q8){					//
			ir_cr(q1-41-q8,a);printf("%c",220);		//
			ir_cr(q1-41-q8,b);printf("%c",219);		//HACIA DERECHA
			ir_cr(q1-41-q8,c);printf("%c",223);		//
													//		2da PARTE - PINTA
			ir_cr(120+q8-q1,a);printf("%c",220);	//
			ir_cr(120+q8-q1,b);printf("%c",219);	//HACIA IZQUIERDA
			ir_cr(120+q8-q1,c);printf("%c",223);	//
													//
			tempo(aaa);								//
		}
		
		if(q1>=120+q8 & q1<=159+q8){				//
			ir_cr(q1-80-q8,a);printf(" ");			//
			ir_cr(q1-80-q8,b);printf(" ");			//
			ir_cr(q1-80-q8,c);printf(" ");			//
													//
			ir_cr(159+q8-q1,a);printf(" ");			//		2da PARTE - BORRA
			ir_cr(159+q8-q1,b);printf(" ");			//
			ir_cr(159+q8-q1,c);printf(" ");			//
													//
			tempo(aaa);								//
		}
		
}

























