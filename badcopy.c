#include <stdio.h>

char buffer[128];
unsigned int leer[10], i;

int main(int argc, char *argv[]) {
    FILE *fin, *fout;
    int n;

    if(argc < 3) {
        printf("Faltan parametros\n");
        return -1;
    }

    fin = fopen(argv[1], "r");
    fout = fopen(argv[2], "w");

    while(1) {
        n = fread(buffer,1,128,fin);
        if(n == 0) break;
        fwrite(buffer,1,n,fout);
    }
}
