#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "DNAUtils.h"

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