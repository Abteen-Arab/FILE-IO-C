//
//  main.c
//  FILE IO PRACTICE
//
//  Created by Abteen Arab on 2022-11-07.
//

#include <stdio.h>

void writeIntoFile (FILE *outFILE);
void readAllValsF (FILE *inFILE);

int linearSearch (FILE *inFILE, double val);
int compareFiles (FILE *inFILE1, FILE *inFILE2);

void sortedFile (FILE *inFILE, FILE *outFILE);


int main(int argc, const char * argv[]) {
    FILE *file1/*, *file28 */;
    file1 = fopen("File1.txt", "r");
    //file2 = fopen("File2.txt", "r");
    
    if (file1 == NULL /*|| file2 == NULL*/){
        printf("Error. File Path Not Found!");
    } else{
        readAllValsF(file1);
        fclose(file1);
        //fclose(file2);
    }
    
    return 0;
}

void writeIntoFile (FILE *outFILE){
    int nextVal;
    printf("Enter Val");
    scanf("%i", &nextVal);
    while (nextVal!=-1) {
        fprintf(outFILE, "%i\n", nextVal);
        scanf("%i", &nextVal);
    }
}

void readAllValsF (FILE *inFILE){
    int nextVal;
    while (fscanf(inFILE, "%i", &nextVal) == 1) {
        printf("%i ", nextVal);
    }
}

int linearSearch (FILE *inFILE, double val){
    _Bool isThere = 0;
    int nextVal;
    while (fscanf(inFILE, "%i", &nextVal) == 1 && !isThere) {
        if (nextVal==val) isThere = 1;
    }
    return isThere;
}

int compareFiles (FILE *inFILE1, FILE *inFILE2){
    int nextVal1, nextVal2;
    _Bool isSame = 1;
    while (fscanf(inFILE1, "%i", &nextVal1) == 1 && fscanf(inFILE2, "%i", &nextVal2) == 1 && isSame) {
        if (nextVal1 != nextVal2) isSame = 0;
    }
    
    return isSame;
}
