#ifndef UNTITLED1_LIB_H
#define UNTITLED1_LIB_H
#include <stdio.h>
#include<stdlib.h>
#define  GENMAX 50
#define STATENO 7
#define ACTIONNO 2
#define ALPHA 0.1
#define GAMMA 0.9
#define EPSLION 0.3
#define SEED 32767
#define REWARD 10

#define GOAL 6
#define UP 0
#define DOWN 1
#define LEVEL 2

int rand0orl();
double frand();
void printqvalue(double qvalue[][ACTIONNO]);
int selecta (int s, double qvalue[][ACTIONNO]);
double  updateq(int s, int snext ,int a ,double qvalue[][ACTIONNO]);
int set_a_by_q(int s ,double qvalue[][ACTIONNO]);
int nexts(int s , int a );



#endif //UNTITLED1_LIB_H
