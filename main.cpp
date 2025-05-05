#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void usage(char *program_name) {
    printf("Sposob uzycia: %s <komunikat> <#powtorzen>\n", program_name);
    exit(1);
}


int main(int argc, char *argv[]) {
    int Result;
    int FisrtNumber;
    int SecondNumber;
    if (argc < 4)

        usage(argv[0]);
    FisrtNumber = atoi(argv[1]);
    SecondNumber = atoi(argv[3]);

    if (strcmp(argv[2], "add") == 0) {
        Result = FisrtNumber + SecondNumber;
        printf("%d + %d = %d", FisrtNumber, SecondNumber, Result);
    }
    else if (strcmp(argv[2], "substract") == 0) {
        Result = FisrtNumber - SecondNumber;
        printf("%d - %d = %d", FisrtNumber, SecondNumber, Result);
    }
    else if (strcmp(argv[2], "multiply") == 0) {
        Result = FisrtNumber * SecondNumber;
        printf("%d * %d = %d", FisrtNumber, SecondNumber, Result);
    }
    else if (strcmp(argv[2], "divide") == 0) {
        if ( SecondNumber == 0) {
            printf("Nie mozna dzielic przez 0");
        }else {Result = FisrtNumber / SecondNumber;
            printf("%d / %d = %d", FisrtNumber, SecondNumber, Result);
        }
    }
    else {
        printf("Nieznana operacja");
    }
    return 0;
}
