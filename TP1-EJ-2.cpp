#include <stdio.H>
int main(){
    float LB = 0, DB = 0, PI = 3.14, PeAc = 7850;
    int M = 0, CB = 0, NL = 0, PeAl = 2700, PeB = 8500;
    printf ("Introduzca Numero de lote"); scanf ("%d",&NL);
    printf ("Introduzca Cantidad de barras"); scanf ("%d",&CB);
    printf ("Introduzca Tipo de material, 1 para acero, 2 para aluminio o 3 para bronce"); scanf ("%d",&M);
    printf ("Introduzca Longitud de barras en metros"); scanf ("%f",&LB);
    printf ("Introduzca Diametro de barras en pulgadas"); scanf ("%f",&DB);
    DB *= 0.0254;
    DB *= DB;
    DB /= 4;
    DB *= PI;
    DB *= LB;
    if (M == 1) {
          printf ("El material ingresado es acero");
          DB *= PeAc;}
          else if (M == 2) {
                      printf ("El material ingresado es aluminio");
                      DB *= PeAl;}
                      else {
                           printf ("El material ingresado es Bronce");
                           DB *= PeB;}
    printf ("El peso de cada barra es de");
    printf ("%f", DB);
    DB *= CB;
    printf ("El peso del lote de barras es de");
    printf ("%f", DB);}
                      
    
