#include <stdio.h>

int main(){
	
   int t, h, hs=3600, min, seg;
   
   printf("Insira os segundos: ");
   scanf("%d", &t);
   h = (t/hs); 
   min = (t -(hs*h))/60;
   seg = (t -(hs*h)-(min*60));
   printf("%d horas : %d minutos :%d segundos \n",h,min,seg);
  
}
