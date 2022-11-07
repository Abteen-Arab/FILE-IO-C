//
//  main.c
//  Data Problems
//
//  Created by Abteen Arab on 2022-10-04.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double newVal;
    int val;
    int m, width, height;
    
    FILE *inPut = fopen("input.pgm", "r");
    FILE *outPut = fopen("output.pgm", "w");
    
    fscanf(inPut,"%i", &val);
    fprintf(outPut,"%i", val);
    width = val;
    
    fscanf(inPut,"%i", &val);
    fprintf(outPut,"%i ", val);
    height = val;

    fscanf(inPut,"%i ", &val);
    fprintf(outPut,"%i\n", val);
    m = val;
    
    for (int i = height; i>0; i--){
        for (int j = width; j>0;j--){
            fscanf(inPut,"%i", &val);
            newVal = sqrt(m*val);
            fprintf(outPut,"%i ", (int)newVal);
        }
        fprintf(outPut,"%s", "\n");
    }
    return 0;
}
