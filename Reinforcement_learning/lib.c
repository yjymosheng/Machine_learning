#include "./lib.h"
double frand(){
        return (double )rand()/RAND_MAX;

}

int rand0orl() {
        int rnd;
        while ((rnd=rand())==RAND_MAX);
        return (int )((double )rnd/RAND_MAX*2);

}

int nexts(int s, int a) {
        return  s*2+1+a;

}

int selecta(int s, double (*qvalue)[2]) {
        int a ;
        if(frand()<EPSLION){
                a=rand0orl();
        }        else {
                a= set_a_by_q(s,qvalue);

        }
        return  a ;
}

void printqvalue(double (*qvalue)[2]) {
        for (int i = 0; i < STATENO; ++i) {
                for (int j = 0; j < ACTIONNO; ++j) {
                        printf("%.3lf ",qvalue[i][j] );

                }
        }
        printf("\n");


}

int set_a_by_q(int s, double (*qvalue)[2]) {
        return qvalue[s][UP]>qvalue[s][DOWN]?UP:DOWN;
}

double updateq(int s, int snext, int a, double (*qvalue)[2]) {
        double qv;
        if (snext==GOAL){
                qv=qvalue[s][a]+ALPHA*(REWARD-qvalue[s][a]);

        } else{
                qv=qvalue[s][a]+ALPHA*(GAMMA*qvalue[snext][set_a_by_q(snext,qvalue)]-qvalue[s][a]);

        }
        return qv;
}
