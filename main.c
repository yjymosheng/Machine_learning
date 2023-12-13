#include "lib.h"
int main(){
        int n =0;
        int myhand,ohand;
        double rate[3]={1,1,1};
        int gain;
        int payoffmatrix[3][3]={
                {DRAW,WIN,LOSE}
                ,{LOSE,DRAW,WIN},
                {WIN,LOSE,DRAW}
        };
        while (scanf("%d",&ohand)!=EOF){
                if ((ohand<GU)||(ohand>PA)){
                        continue;
                }
                myhand= hand(rate);
                gain=payoffmatrix[myhand][ohand];
                printf("我的出手:%d\t对方出手:%d\t输赢判断:%d\t",myhand,ohand,gain);
                rate[myhand]+=gain*ALPHA*rate[myhand];
                printf("石头:%lf\t剪刀:%lf\t布:%lf\n",rate[GU],rate[CYOKI],rate[PA]);

        }
        return 0;
}