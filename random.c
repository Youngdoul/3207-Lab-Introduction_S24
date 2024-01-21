// random.c

#include <stdlib.h>
#include <time.h>

char randchar() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random character from 'A' to 'Z'
    return (char)('A' + rand() % 26);
}
