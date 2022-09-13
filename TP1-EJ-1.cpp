//My first ever script written in the second half of 2016
//Author: Céspedes Rodrigo
#include <stdio.H>
int main(){
       float DB = 0, PI = 3.14, BB = 0, PeA = 7850, LB = 0, AB = 0, PPB = 0, CB = 0, PT = 0;
       int NL = 0;
       printf ("introduzca Numero de lote"); scanf ("%d",&NL);
       printf ("introduzca Cantidad de barras"); scanf ("%f",&CB);
       printf ("introduzca Longitud de barras en metros"); scanf ("%f",&LB);
       printf ("introduzca Diametro de barras en pulgadas"); scanf ("%f",&DB);
       DB *= 0.0254;
       DB *= DB;
       DB /= 4;
       DB *= PI;
       BB = DB;
       BB *= LB;
       AB = BB;
       AB *= PeA;
       PPB = AB;
       printf ("El peso por barra es de");
       printf ("%f, PPB");
       PPB *= CB;
       PPB = PT;
       printf ("El peso total del lote es de");
       printf ("%f, PT");}
