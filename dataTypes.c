#include <stdio.h>

int main() {

  // int entero;
  float flotante;
  // char caracter;
  // short enteroCorto;
  // long enteroLargo;
  double flotanteDoble;

  float resFloat_fxf;
  float resFloat_fxfD;
  float resFloat_fDxf;
  float resFloat_fDxfD;

  float resFloatDoble_fxf;
  float resFloatDoble_fxfD;
  float resFloatDoble_fDxf;
  float resFloatDoble_fDxfD;

  // printf("Escribe un entero: ");
  // scanf("%d", &entero);
  // printf("Tu entero es: %d\n", entero);
  //
  //
  printf("Escribe un flotante: ");
  scanf("%f", &flotante);
  printf("Tu flotante es: %f\n", flotante);
  //
  // printf("Escribe un caracter: ");
  // scanf("%s", &caracter);
  // printf("Tu caracter es: %c\n", caracter);
  //
  // printf("Escribe un enteroCorto: ");
  // scanf("%hd", &enteroCorto);
  // printf("Tu enteroCorto es: %hd\n", enteroCorto);
  //
  // printf("Escribe un enteroLargo: ");
  // scanf("%ld", &enteroLargo);
  // printf("Tu enteroLargo es: %ld\n", enteroLargo);

  printf("Escribe un flotanteDoble: ");
  scanf("%lf", &flotanteDoble);
  printf("Tu flotanteDoble es: %f\n", flotanteDoble);

  resFloat_fxf = flotante / flotante;
  resFloat_fxfD = flotante / flotanteDoble;
  resFloat_fDxf = flotanteDoble / flotante;
  resFloat_fDxfD = flotanteDoble / flotanteDoble;

  resFloatDoble_fxf = flotante / flotante;
  resFloatDoble_fxfD = flotante / flotanteDoble;
  resFloatDoble_fDxf = flotanteDoble / flotante;
  resFloatDoble_fDxfD = flotanteDoble / flotanteDoble;

  printf("\nresFloat_fxf: %f \nresFloat_fxfD: %.10f \nresFloat_fDxf: %f \nresFloat_fDxfD: %f \n", resFloat_fxf, resFloat_fxfD, resFloat_fDxf, resFloat_fDxfD);
  printf("\nresFloatDouble_fxf: %lf \nresFloatDouble_fxfD: %10f \nresFloatDouble_fDxf: %lf \nresFloatDouble_fDxfD: %lf \n", resFloatDoble_fxf, resFloatDoble_fxfD, resFloatDoble_fDxf, resFloatDoble_fDxfD);

  return 0;
}
