#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>


#include "mymalloc.h"

#define MEMLENGTH 512
static double memory[MEMLENGTH];



typedef struct {
    int size;     // size of chunk including both header and payload
    bool status;    // true = allocated // false = free
} Metadata;

// function to cast to Metadata
void castMeta(){

}

// function to cast to double
// always cast back to double to preserve alignment ?????
void castDouble(){

}

// function to cast to char
void castChar(void* location){
    char *ptr = (char *) memory;
}

// function to call myMalloc()
int* myMalloc(int size){

    Metadata *heapstart =(Metadata *) &memory[0];

    while(true){
        if(heapstart->status == false){
            // split into two chunks
            // return pointer to next metadata
            void *nextHeader;
            return nextHeader;
        }
        else {
            // go to next Metadata
        }
    }

}

// function to print a visual representation of heap
// each _ represents 8 bytes of FREE memory
// # represents 8 bytes of metadata 
// = represents 8 bytes of allocated memory
// ex: #_______#====#========#____#========#________________#________#========#________
void printHeap(){
    for(int i = 0; i < MEMLENGTH - 1; i++){
        if(i % 128 == 0){ printf("\n");}
        if(sizeof(memory[i]) == 8){
            printf("#");                    
        } else {
            printf("_");
        }
    }
} //FIXME



// For any pointer variable p, 
// the variable p itself is the pointer and the size of it is the size of the pointer. 
// *p is what p is pointing to, and the size of *p is the size of what is being pointed to.
int main(){
    printf("fills_mymalloc initiated...\n\n");

    //initializing Metadata struct with first header
    Metadata *heapstart = (Metadata *) &memory[0];
    heapstart->size = sizeof(memory);   //4096
    heapstart->status = false;   // free

    printf("heapstart size: %d\n", heapstart->size);
    printf("heapstart status: %d\n\n", heapstart->status);
   
    printf("size of heap: %lu\n", sizeof(memory));
    printf("size of memory[0]: %lu\n", sizeof(memory[0]));
    printf("size of heapstart: %lu\n\n", sizeof(heapstart));

    printf("address of heap: %p\n", &memory);
    printf("address of memory[0]: %p\n", &memory[0]);
    printf("address of heapstart header: %p\n", &heapstart);
    printf("address of memory[1]: %p\n", &memory[1]);
    printf("address of heapstart payload: %p\n", &heapstart + 8);

    // creating a sample to add to heap
    //myMalloc(8);

    Metadata sample;
    sample.size = 16;
    sample.status = true;
    
    void *voidPtr;
    char *charPtr;
    int *intPtr;
    short *shortPtr;

    printf("\n");
    printf("size of double: %lu\n", sizeof(double));
    printf("size of int: %lu\n", sizeof(int));
    printf("size of short: %lu\n", sizeof(short));
    printf("size of char: %lu\n", sizeof(char));
    printf("size of bool: %lu\n", sizeof(bool));
    printf("size of void pointer: %lu\n", sizeof(voidPtr));
    printf("size of char pointer: %lu\n", sizeof(charPtr));
    printf("size of int pointer: %lu\n", sizeof(intPtr));
    printf("size of short pointer: %lu\n", sizeof(shortPtr));
    printf("size of Metadata: %lu\n", sizeof(Metadata));
    printf("size of Metadata sample: %lu\n", sizeof(sample));

    printHeap();

    printf("\n\nfills_mymalloc ended.\n");
    return EXIT_SUCCESS;
}











