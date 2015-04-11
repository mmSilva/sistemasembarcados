#include "rims.h"

/* This is a sample program.  You can save/compile/run it, 
   modify it first, or just load a different program.      */

/* Sets B0 to 1 as quickly as possible when A0==1 and A1==0*/

/* Note that A0 - A7 can be set by clicking the switches to 
   the left, and B0 - B7 can be viewed as LEDs to the right
   (green corresponds to '1', red to '0').                 */
   
 /*Pratica 01 Aula2 Sistemas Embarcados 
  *Discente: Richardson Bruno da Silva Andrade
  *Matrícula:  20112y6-rc0028
  *Atividade: Operações Lógicas no RIMS.h
  *Realizar entrada no switch A2,A1, A0 com a seguintes entradas
  *(011, 101, 011, 111) para que saida em B0 seja igual a 1.
 
 */
 

void main()
{
    
    while (1) { 
   
            B0 =   (A0 && A1 && A2) ? 1 :  (((A2 && A1) || (A0 && A1) || (A0 && A2) ) );
      
   }
}
