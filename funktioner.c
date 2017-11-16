#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>

void showMenu(void) {
  printf("\n");
  printf("V�lj vilka storheter du vill ber�kna:\n");
  printf("V�lj 1 f�r: OHMS LAG\n");
  printf("V�lj 2 f�r: Rtot\n");
  printf("V�lj 3 f�r: EFFEKTLAGEN ENKEL\n");
  printf("V�lj 4 f�r: SKENBAR EFFEKT ENFAS\n");
  printf("V�lj 5 f�r: AKTIV EFFEKT/MEDELEFFEKT ENFAS\n");
  printf("V�lj 6 f�r: SKENBAR EFFEKT 3-FAS\n");
  printf("V�lj 7 f�r: AKTIV EFFEKT 3-FAS\n");
  printf("V�lj 0 f�r: F�R ATT AVSLUTA\n");
}

double ohms_lag(double r, double i){
    double u = i * r;
    return u;
}

double res_tot(double r1, double r2, double r3){

    double rtot= (1/r1) + (1/r2) + (1/r3);
    rtot= 1/rtot;

    return rtot;
}

double eff_enk(double u, double i){

    double p = u * i;
    return p;
}

double sken_eff(double u, double i){

    double s = u * i;
    return s;

}

double aktiv_eff(double u, double i, double cos){

    double p = u * i * cos;
    return p;

}

double sken_3fas(double u, double i){

    double s = u * i * sqrt(3);
    return s;
}

double aktiv_3fas(double u, double i, double cos){

    double p = u * i * sqrt(3) * cos;
    return p;
}
