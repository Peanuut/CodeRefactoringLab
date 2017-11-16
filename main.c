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
