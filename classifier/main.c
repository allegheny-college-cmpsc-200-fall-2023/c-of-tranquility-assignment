#include <stdio.h>
#include <string.h>

#include "pico/stdlib.h"

/* TODO: Create struct with fields:
         - name (20 bytes) 
         - type (15 bytes)
         - id   (whole number)
         - weight (real number)
        and name it 'rock'
*/

/* TODO: Provide correct type for function*/ average(struct rock *samples, char *search_key){
    /* TODO: Initialize variables for:
             - count
             - avg_weight
    */
    // TODO: Get size of samples struct
    // TODO: Use for loop to iterate over samples struct
    // TODO: Store first letter of current sample in correct type(s)
    /* TODO: Set up conditional to test if first letter of current sample
             is the same as the search_key
    */
    // TODO: _If so_, then add the weight of the sample to avg_weight
    // TODO: Increment the count
    return /* TODO: Return value representing the average */
}

int main(void) {
    
    stdio_init_all();

    char *rocks[3] = {"Seatbelt Basalt", "Big Bertha", "Big Muley"};
    char *types[3] = {"Basalt", "Breccia", "Anorthosite"};
    int ids[3] = {15016, 14321, 61016};
    float weights[3] = {2.02, 8.998, 11.7};

    // TODO: Create struct array to hold individual structs

    // TODO: Create for loop to iterate over data; add to struct
    // TODO: Create individual placeholder struct to add each relevant value
    /* TODO: strcopy the values of:
             - name
             - type
             to the relvant field in the struct
    */
    /* TODO: Assign values for:
             - id
             - weight
             in the approrpiate struct fields
    */
    // TODO: Add individual, temporary struct to struct array

    /* TODO: Create variable to store result of average function,
             searching for types beginning with 'B'
    */

    printf("%f", avg);
    return 0;
}