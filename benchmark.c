/* Will Koury - Project 0 */

#include <stdio.h>

int main(int argc, char *argv[]) {

    const int BIG_NUMBER = 10000000;
    int destroyYourRAM[BIG_NUMBER];

    for(int i = 0; i < BIG_NUMBER; ++i){
        destroyYourRAM[i] = i;
    }

    for(int i = 0; i < BIG_NUMBER; ++i){
        fprintf(stdout, "%d\n", destroyYourRAM[i]);
    }

    return 0;
}
