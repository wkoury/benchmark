/* Will Koury - Project 0 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {

    const int BIG_NUMBER = 10000000;
    int fuckYourRAM[BIG_NUMBER];

    for(int i = 0; i < BIG_NUMBER; ++i){
        fuckYourRAM[i] = i;
    }

    for(int i = 0; i < BIG_NUMBER; ++i){
        fprintf(stdout, "%d\n", fuckYourRAM[i]);
    }

    return 0;
}
