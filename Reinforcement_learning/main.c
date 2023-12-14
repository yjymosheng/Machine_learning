#include "lib.h"


int main(){
        int i,j;
        int s , snext;
        int t,a;
        double qvalue[STATENO][ACTIONNO];
        srand(SEED);
        for (i = 0; i < STATENO; ++i) {
                for (j=0;j<ACTIONNO;++j){
                        qvalue[i][j]=frand();

                }
        }
        printqvalue(qvalue);

        for (i = 0; i <GENMAX ; ++i) {
                s=0;
                for ( t = 0; t < LEVEL; ++t) {
                        a= selecta(s,qvalue);
                        fprintf(stdout," s= %d  a= %d\n",s,a);
                        snext= nexts(s,a);
                        qvalue[s][a]= updateq(s,snext,a,qvalue);
                        s=snext;
                }
                printqvalue(qvalue);

        }

        return 0;



}