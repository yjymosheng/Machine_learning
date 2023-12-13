#include "lib.h"

double frand(void) {
        return  (double)rand()/RAND_MAX;
}

int hand(double rate[]) {
        double gu, cyoki, pa;
        gu = rate[GU] * frand();
        cyoki = rate[CYOKI] * frand();
        pa = rate[PA] * frand();
        if (gu > cyoki) {
                if (gu > pa) {
                        return GU;
                } else return PA;
        } else {

                if (cyoki > pa)return CYOKI;
                else return PA;

        }
}
