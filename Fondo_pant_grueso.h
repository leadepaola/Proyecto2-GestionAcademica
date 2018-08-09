/*
  Utiliza color, ubicación de texto y marco.
*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
void Set_Mrc_Gru(int,int,int,int);
void IR_CR(int,int);
int x1,x2,z1,z2,m;

void IR_CR(int x, int y)//Emulador de ir_cr
{
    /*
       funcion: crea función para ubicar printf en columna y renglón especifico
    por lo esta funcion emula ir_cr para posicionar texto en coordenadas especificas
    se tiene que declarar <windows.h>
    */
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void Set_Mrc_Gru(int x1,int z1,int x2,int z2) // construye marco
{
    /*   
    funcion: crea marco con codigo ascii
    c1-----------c2
    r1            |
    |             |
    |             |
    -------------r2
    */
   int i;
   IR_CR(x1,z1); printf("%c",201);      // esquinas
   IR_CR(x1,z2); printf("%c",200);
   IR_CR(x2,z1); printf("%c",187);
   IR_CR(x2,z2); printf("%c",188);
   for(m=x1+1;m<x2;m++)                 // controla columna
   {
         IR_CR(m,z1);printf("%c",205);  // LINEA ARRIBA HORIZONTAL
         IR_CR(m,z2);printf("%c",205);  // LINEA ABAJO HORIZONTAL
   }
   for(m=z1+1;m<z2;m++)                 // controla renglon
   {
         IR_CR(x1,m);printf("%c",186);  // LINEA IZQUIERDA VERTICAL
         IR_CR(x2,m);printf("%c",186);  // LINEA DERECHA VERTICAL
   }   
}




