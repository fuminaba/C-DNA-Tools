#include <stdlib.h>
#include <stdio.h>

/* Generate Random DNA Sequence Function */
char* generateRandomDNASequence(int length) {
    char* genSeq;
    genSeq = (char*)malloc(length); // Initialize & allocate memory for generated DNA sequence

    int nucleotide; // Placeholder variable to determine nucleotide
    for (int index = 0; index < length; index ++) {
        nucleotide = rand() % 4;
        switch (nucleotide) {
            case 0:
                genSeq[index] = 'A';
                break;
            case 1:
                genSeq[index] = 'T';
                break;
            case 2:
                genSeq[index] = 'C';
                break;
            case 3:
                genSeq[index] = 'G';
                break;
            default: // In case of some random error
                genSeq[index] = '?';
                break;
        }
    }
    genSeq[length] = '\0'; 
    return genSeq;
}