#include <stdio.H>
int main(){
    float LB = 0, DB = 0, PI = 3.14, PeAc = 7850, PPuAc = 0, PPuAl = 0, PPuB = 0, Pmax = 0;
    int M = 0, CB = 0, NL = 0, PeAl = 2700, PeB = 8500, NLmax = 0, Mmax = 0, Cac = 0, Cal = 0, Cbr = 0, B = 0;
    printf ("Introduzca Numero de lote"); scanf ("%d",&NL);
    while (NL != 0) {
          printf ("Introduzca Cantidad de barras"); scanf ("%d",&CB);
          printf ("Introduzca Longitud de barras en metros"); scanf ("%f",&LB);
          printf ("Introduzca Diametro de barras en pulgadas"); scanf ("%f",&DB);
          printf ("Introduzca Tipo de material, 1 para acero, 2 para aluminio o 3 para bronce"); scanf ("%d",&M);
          while (B != 0) {
                if (M != 1) {
                      if (M != 2) {
                            if (M != 3) {
                                  printf ("no ah introducido un valor de material valido, recuerde, 1 para acero, 2 para aluminio o 3 para bronce");
                                  scanf ("d",&M);}
                            else B = 1;}
                      else B = 1;}
                else B = 1;}
          DB *= 0.0254;
          DB *= DB;
          DB /= 4;
          DB *= PI;
          DB *= LB;
          if (M == 1) {
               printf ("El material ingresado es acero");
               DB *= PeAc;
               Cac++;
               PPuAc += DB;}
               else if (M == 2) {
                      printf ("El material ingresado es aluminio");
                      DB *= PeAl;
                      Cal++;
                      PPuAl += DB;}
                      else {
                           printf ("El material ingresado es Bronce");
                           DB *= PeB;
                           Cbr++;
                           PPuB += DB;}
          printf ("El peso de cada barra es de");
          printf ("%f", DB);
          DB *= CB;
          printf ("El peso del lote de barras es de");
          printf ("%f", DB);
          if (Pmax <= DB) {
                   Pmax = DB;
                   NLmax = NL;
                   Mmax = M;}
          printf ("Introduzca nuevo Numero de lote"); scanf ("%d",&NL);}
    PPuAc /= Cac;
    PPuAl /= Cal;
    PPuB /= Cbr;
    printf ("la cantidad de lotes de acero es de");
    printf ("%d", Cac);
    printf ("la cantidad de lotes de aluminio es de");
    printf ("%d", Cal);
    printf ("la cantidad de lotes de bronce es de");
    printf ("%d", Cbr);
    printf ("El promedio del peso de los lotes de acero es de");
    printf ("%f", PPuAc);
    printf ("El promedio del peso de los lotes de aluminio es de");
    printf ("%f", PPuAl);
    printf ("El promedio del peso de los lotes de Bronce es de");
    printf ("%f", PPuB);
    printf ("el lote mas pesado es el N°");
    printf ("%d", NLmax);
    printf ("con un peso de");
    printf ("%f", Pmax);
    if (M == 1) printf ("y del material acero");
    else if (M == 2) printf ("y del material aluminio");
         else printf ("y del material bronce");}
                      
    
