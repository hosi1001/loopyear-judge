#include <stdio.h>
int func(int);
int main (){
    int y,r;
    scanf("%d", &y);

    r = func(y);
        if (r == 0) {
            printf( "%d=a common year\n",y);

        }
        else {
            printf( "%d=a leap year\n",y);
        }
    return 0;
}

/* うるう年判定 */
int func ( int y) {
    int ret;
    if (y % 400 == 0){
         ret = 1;
    }
    else if (y %100 == 0){
        ret = 0;
    }
    else if (y %4 == 0){
        ret = 1;
    }
    else {
        ret = 0;
    }

    
    return ret; // 平年: 0 うるう年 :1
}