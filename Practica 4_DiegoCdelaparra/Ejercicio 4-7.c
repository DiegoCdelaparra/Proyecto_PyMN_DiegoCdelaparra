#include <stdio.h>
int arrD[99][99], arrE[99][99], arrF[99][99];
int leerdatosD(int arrD[][99], int filas1, int columnas1);
int leerdatosE(int arrE[][99], int filas2, int columnas2);
int sumaM(int arrF[][99], int filas1, int columnas1);
int filas1,columnas1,filas2,columnas2;
int main() {
  printf("Ingresar numero de filas de matriz 1\n");
  scanf("%d",&filas1);
  printf("Ingresar numero de columnas de matriz 1\n");
  scanf("%d",&columnas1);
  printf("Ingresar numero de filas de matriz 2\n");
  scanf("%d",&filas2);
  printf("Ingresar numero de columnas de matriz 2\n");
  scanf("%d",&columnas2);
  if (filas1==filas2 && columnas1==columnas2) {
    printf("Datos matriz 1\n");
    leerdatosD(arrD,filas1,columnas1);
    printf("Datos matriz 2\n");
    leerdatosE(arrE,filas2,columnas2);
    printf("La suma de las 2 matrices es \n");
    sumaM(arrF,filas1,columnas1);
    printf("\n");
  } else {
    printf("No se puede realizar la suma de matrices\n");
  }
  return 0;
}
int leerdatosD(int arrD[][99], int filas1, int columnas1){
  int i,j;
  for(i=1; i<=filas1; i++)
    for(j=1; j<=columnas1; j++){
    printf("Posicion[%d][%d] => ",i,j);
    scanf("%d",&arrD[i][j]);
  }
}
int leerdatosE(int arrE[][99], int filas2, int columnas2){
  int i,j;
  for(i=1; i<=filas2; i++)
    for(j=1; j<=columnas2; j++){
    printf("Posicion[%d][%d] => ",i,j);
    scanf("%d",&arrE[i][j]);
  }
}
int sumaM(int arrF[][99], int filas1, int columnas1){
  int i,j;
  for(i=1; i<=filas1; i++)
  for(j=1; j<=columnas1; j++)
  arrF[i][j]=arrD[i][j]+arrE[i][j];
  for(i=1; i<=filas1; i++){
    printf("\n");
    for(j=1; j<=columnas2; j++)
    printf(" %d", arrF[i][j]);
  }
}
