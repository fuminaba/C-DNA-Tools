#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char* generateRandomDNASequence(int length) {
    char* genSeq = malloc(length); // Initialize & allocate memory for generated DNA sequence

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

int main() {
    printf("Random DNA Sequence Generator Program\n");

    srand(time(NULL)); // set random seed

    int seqLength; // Get DNA sequence length
    printf("Enter the length of the DNA Sequence to generate -> ");
    scanf("%d", &seqLength);

    char* generated;
    generated = generateRandomDNASequence(seqLength);

    printf("Generated sequence: 5'-%s-3'\n", generated);
}