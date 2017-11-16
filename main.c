/*Detta program �r en r�knare som kan anv�ndas För ell�ra med enbart v�xelsp�nningar och v�xelströmmar. R�knaren
tar upp r�kning med sp�nningar i volt(U), resistanser upp till 20 000/ohm(R).
ström upp till 440 Ampere(I), effekter P i watt(W). 3 faser upp till 400V mellan faserna.
�ven tar denna upp Skenbar effekt vid 3-fas och enfas, aktiv effekt vid 3-fas och enfas d�r cosinus fi/cosinus() anv�nds
som effektfaktorn som �r mindre �n 1 och inte mindre �n 0.
Frekvenser i (Hz):  och totala motst�ndet i parallellkopplade kretsar med max 3 motst�nd.

50 Hertz(Hz) Finns det i v�ra uttag i sverige Vid 50 Hz byter �spänningen polaritet och Strömmen riktning 100 gånger per
sekund. spänningen i svenska eluttag pendlar upp och ner fr�n -325 V till +325 V. Att vi talar om 230 V beror p� att det
�r spänningens(v�xelström ~) effektivvärde eller roten ur. spänningen V(U)=Toppvärdet/sqrt(2)=325V/sqrt(2).

OHMS LAG: Sp�nning i volt(U)=Resistans i ohm(R)*ström i ampere(I)
RESISTANSTOTAL PARALLELLA RESISTANSER: Rtot=1/R1R2R3
EFFEKTLAGEN ENKEL För likström: Effekt i watt(P)=U*I
SKENBAR EFFEKT ENFAS ~: Skenbar(S/VA)=U*I
AKTIV EFFEKT/MEDELEFFEKT ENFAS ~:P=U*I*cos()
SKENBAR EFFEKT 3-FAS ~: Skenbar S/VA=U*I*sqrt(3)
AKTIV EFFEKT 3-FAS ~: P=U*I*sqrt(3)*cos()

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include "calculations.h"
#include "menufunctions.h"

bool Exit = false;

int main()
{
    system("chcp 1252");
    system("cls");
    while (Exit == false)
    {
        int val;
        showMenu();
        scanf("%d", &val);
        switch(val) {
          case 0:
            Exit = true;
            break;
          case 1:
            printf("%lf", ohmsLaw());
            break;
          case 2:
            printf("%lf", rTot());
            break;
          case 3:
            printf("%lf", powerLaw());
            break;
          case 4:
            printf("%lf", apparentEffect());
            break;
          case 5:
            printf("%lf", activeEffect());
            break;
          case 6:
            printf("%lf",apparentEffectPhase());
            break;
          case 7:
            printf("%lf",activeEffectPhase());
            break;
          default:
            Exit = true;
            printf("Fel alternativ Försök igen!: \n");
            break;
        }
    }

    return 0;
}
