#include "lib.h"

int main(int argc,char * argv[]) {
        int n = atoi(argv[4]);
        double rate[3];
        srand(SEED);
        if(argc<5){
                fprintf(stderr,"使用方法 randhandgen （石头的比例）（剪刀的比例）（布的比例）（循环次数）\n");
                exit(1);
        }
        rate[GU]= atof(argv[1]);
        rate[CYOKI]= atof(argv[2]);
        rate[PA]= atof(argv[3]);
        for ( int i =0 ;i<n; ++i) {
                printf("%d\n", hand(rate));

        }

        return 0;
}


