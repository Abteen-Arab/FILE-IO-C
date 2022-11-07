//
//  main.c
//  Pointer Practice
//
//  Created by Abteen Arab on 2022-10-05.
//

#include <stdio.h>


int main(void) {
    int count = 0,sum = 0;
    double val, garbageValue, garbageValue2, garbageValue3;
    
    FILE *inPut = fopen( "yvrTemperature08.dat", "r");
    
    if (inPut != NULL){
        while (fscanf(inPut, "%lf" "%lf", &garbageValue, &val) == 2) {
            sum += val;
            count ++;
            fscanf(inPut, "%lf %lf %lf", &garbageValue, &garbageValue2, &garbageValue3);
        }
        printf("%i Lines, The average tempature is %lf.", count, (double)count/sum);
    } else {
        printf("error \n");
    }
    
    return 0;
}
