/*
  Utiliza color, ubicación de texto y marco.
*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
void Set_Mrc(int,int,int,int);
void ir_cr(int,int);
int c1,c2,r1,r2,ii;

void ir_cr(int x, int y)//Emulador de ir_cr
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

void Set_Mrc(int c1,int r1,int c2,int r2) // construye marco
{
    /*   
    funcion: crea marco con codigo ascii
    c1-----------c2
    r1            |
    |             |
    |             |
    -------------r2
    */
   int ii;
   ir_cr(c1,r1); printf("%c",218);      // esquinas
   ir_cr(c1,r2); printf("%c",192);
   ir_cr(c2,r1); printf("%c",191);
   ir_cr(c2,r2); printf("%c",217);
   for(ii=c1+1;ii<c2;ii++)                 // controla columna
   {
         ir_cr(ii,r1);printf("%c",196);  // LINEA ARRIBA HORIZONTAL
         ir_cr(ii,r2);printf("%c",196);  // LINEA ABAJO HORIZONTAL
   }
   for(ii=r1+1;ii<r2;ii++)                 // controla renglon
   {
         ir_cr(c1,ii);printf("%c",179);  // LINEA IZQUIERDA VERTICAL
         ir_cr(c2,ii);printf("%c",179);  // LINEA DERECHA VERTICAL
   }   
}




