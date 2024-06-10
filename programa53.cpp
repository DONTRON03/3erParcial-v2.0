#include <stdio.h>
//AlejandoGM
float calcularMax(float x , float y ){
  float max; 
  if (x>=y){
    max=x;
  }else{
    max=y;
  }return max;
}
//Vazquez Xochihua Brandon Eric
float calcularNota(float p1, float p2, float notaExamen) {
    float notaEC = p1 * 0.2 + p2 * 0.2 + notaExamen * 0.6;
    return calcularMax(notaEC, notaExamen);
}

int main(){
  float parcial1, parcial2, examen, final;
  char c;
  do {
  //Mendoza Espinosa Adrian: leer valores 
    printf("Introduzca nota parcial 1[0,10]: ");
    scanf("%f", &parcial1);
    printf("Introduzca nota parcial 1[0,10]: ");
    scanf("%f", &parcial2);
    printf("Introduzca nota examen final [0,10]: ");
    scanf("%f", &examen);

    //López Carreto Abril: invocación de la funcion y estructura
    final=calcularNota(parcial1,parcial2,examen);
    printf("La nota final es %f",final);
    printf("\n\n Salir?  (s/n)");
    //osvaldo martinez garcia
    do{
    scanf("%c", &c);
    }while (c=='\n');
    printf("\n");
    
  }while(c!='s');
  return 0;
 
}
