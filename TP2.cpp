

#include <stdio.h>
//Final script from the UTN c++ course in the aeronautical engineering career
//Author: Céspedes Rodrigo
#include <stdlib.h>
main () {
     int NL[20],i=0,B=0,o=0,b=0,Fail[20],u=1,R=0,v=0,NLB,r=0,NLA1=0,NLA2=0,S=0;
     float TP[20],H=28800,CP[20],prom=0,TPA1=0,TPA2=0,CPA1=0,CPA2=0;
     while (b==0 && i<=20) {
                          i++;
                          printf ("\n ingrese numero de lote "); scanf ("%d",&NL[i]);
                          if (NL[i]!=0) {
                                    printf ("ingrese tiempo de produccion por pieza en segundos "); scanf ("%f",&TP[i]);
                                    CP[i]=H;
                                    CP[i]/=TP[i];
                                    printf ("El lote: %d", NL[i]);
                                    printf (" produjo una cantidad de: %.0f", CP[i]);
                                    printf (" piezas, y tardo: %.2f", TP[i]); printf (" segundos en producir cada una");
                                    prom += TP[i];
                                    o++;}
                          else b=1;}
     system("PAUSE");
     system("CLS");
     prom /= o++;
     printf ("el tiempo de produccion promedio es de: %.2f", prom);
     for (i=0;i<o;i++) if (TP[i]>prom) {
                                       Fail[u]=NL[i];
                                       printf ("\n el lote: %d", NL[i]); printf (" tiene un tiempo de produccion mayor al promedio ");
                                       printf ("con un tiempo \n de: %.2f", TP[i]); printf (" segundos\n");
                                       u++;}
     system("PAUSE");
     system("CLS");
     printf ("¿Desea modificar algun lote? (ingrese 1 para si, 0 para no)"); scanf ("%d",&R);
     if (R==1) {
              i=0;
              printf ("¿que lote desea modificar? "); scanf ("%d",&NLB);
              while (NLB!=0&&R==1) {
                               while (v==0) {
                                            i++;
                                            if (NLB==NL[i]) v=1;
                                            else if (i>o) {
                                                          printf ("\n no se encontro el lote ingresado, por favor ingrese un loto valido o ingrese 0 para cancelar "); scanf ("%d",&NLB);
                                                          i=0;}}
                               printf ("\n inglese el nuevo tiempo de produccion "); scanf ("%f",&TP[i]);
                               
                               printf ("\n el Lote %d", NL[i]); printf (" fue cambiado a un tiempo de produccion de %.2f",TP[i]);
                               printf ("\n ¿desea cambiar otro lote? (si=1, no=0) "); scanf ("%d",&R);
                               if (R==1) {
                                        v=0;
                                        i=0;
                                        printf ("¿que lote desea modificar? "); scanf ("%d",&NLB);}}}
     system("CLS");
     for (i=0;i<o;i++) {
         if (NL[i]>NL[i+1]) {
                            TPA1=TP[i];
                            NLA1=NL[i];
                            CPA1=CP[i];
                            TPA2=TP[i+1];
                            NLA2=NL[i+1];
                            CPA2=CP[i+1];
                            TP[i]=TPA2;
                            NL[i]=NLA2;
                            CP[i]=CPA2;
                            TP[i+1]=TPA1;
                            NL[i+1]=NLA1;
                            CP[i+1]=CPA1;
                            i=0;}}
     for (i=0;i<o;i++) {
         printf ("\n El lote %d",NL[i]); printf (" tuvo un tiempo de produccion de %.2f",TP[i]); printf (" segundos y genero una cantidad de piezas de %.0f",CP[i]);}
              
     
     system ("PAUSE");}
      
                                  
                         
     
           
           
