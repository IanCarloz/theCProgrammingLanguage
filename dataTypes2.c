#include <stdio.h>

int main() {

  float flotante;

  double flotanteDoble;

  float resFloat_fxf;
  float resFloat_fxfD;
  float resFloat_fDxf;
  float resFloat_fDxfD;

  float resFloatDoble_fxf;
  float resFloatDoble_fxfD;
  float resFloatDoble_fDxf;
  float resFloatDoble_fDxfD;

  printf("flotante: ");
  scanf("%f", &flotante);

  printf("flotanteDoble: ");
  scanf("%lf", &flotanteDoble);

  printf("\nflotante=%f\n", flotante);
  printf("flotanteDoble=%f\n", flotanteDoble);

  resFloat_fxf = flotante / flotante;
  resFloat_fxfD = flotante / flotanteDoble;
  resFloat_fDxf = flotanteDoble / flotante;
  resFloat_fDxfD = flotanteDoble / flotanteDoble;

  resFloatDoble_fxf = flotante / flotante;
  resFloatDoble_fxfD = flotante / flotanteDoble;
  resFloatDoble_fDxf = flotanteDoble / flotante;
  resFloatDoble_fDxfD = flotanteDoble / flotanteDoble;

  printf("\n%f/%f=%f \n%f/%f=%.1111111f \n%f/%f=%.1111f \n%f/%f=%f \n", flotante, flotante, resFloat_fxf, flotante, flotanteDoble, resFloat_fxfD, flotanteDoble, flotante, resFloat_fDxf, flotanteDoble, flotanteDoble, resFloat_fDxfD);
  printf("\n%f/%f=%f \n%f/%f=%.1111111f \n%f/%f=%.1111f \n%f/%f=%f \n", flotante, flotante, resFloatDoble_fxf, flotante, flotanteDoble, resFloatDoble_fxfD, flotanteDoble, flotante, resFloatDoble_fDxf, flotanteDoble, flotanteDoble, resFloatDoble_fDxfD);

  return 0;
}
