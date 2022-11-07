//
//  main.c
//  Data Problems
//
//  Created by Abteen Arab on 2022-10-04.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //val is temparay space holder
    double val;
    double mean;
    double sum = 0;
    int count = 0;
    int index = 3;
    //File instantiation
    FILE *inputFile = fopen( "yvrTemperature08.dat", "r" );
    
    //check if the file exists (ie. non null pointer)
    if(inputFile != NULL) {
        //Loops through the file look for numbers. Note any number can be a double (ie. 1 and 1.0 will be scanned)
        while (fscanf( inputFile, "%lf", &val ) == 1) {
            //Scans correct value of the tempature
            fscanf( inputFile, "%lf", &val);
            sum += val;
            count++;
            //loops through unwanted values
            while (index > 0 && fscanf(inputFile, "%lf", &val) == 1){
                index--;
            }
            index = 3;
        }
        mean = sum / count;
        printf("%i lines, with average of %lf", count, mean);
        fclose(inputFile);
    } else {
        printf("error");
        fclose(inputFile);
    }
    
    
    return 0;
}
