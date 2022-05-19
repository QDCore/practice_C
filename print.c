#include<stdio.h>

int main(void){
    int i, a;
    for(i = 2; i < 9; i++){
        for(a = 2; a < 9; a++){
            printf("%d X %d = %d\n", i, a, i * a);
        }
    }
    return 0;
}