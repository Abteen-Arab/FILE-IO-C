//
//  main.c
//  File Practice
//
//  Created by Abteen Arab on 2022-11-07.
//
#include <stdio.h>

void createRandFile (FILE *fp, int size);
void printVal (FILE *inFile);
double meanTemp (FILE *inFile);

int main(int argc, const char * argv[]) {
    FILE *fr;
    fr = fopen("results.txt", "w");
    createRandFile(fr,10);
    fclose(fr);
    fr = fopen("results.txt", "r");
    printVal(fr);
    fclose(fr);
    return 0;
}

void printVal (FILE *inFile){
    double nextVAl;
    while (fscanf(inFile, "%lf", &nextVAl)==1){
        printf("%.0lf\n", nextVAl);
    }
}

double meanTemp (FILE *inFile){
    double nextVAl;
    double count = 0, mean = 0;
    while (fscanf(inFile, "%lf", &nextVAl)==1){
        count++;
        mean+=nextVAl;
    }
    printf("%lf", mean/count);
    return mean/count;
}

void createRandFile(FILE *fp, int size){
    for (int i = 0; i<size; i++){
        fprintf(fp, "%i ", i);
    }
}
