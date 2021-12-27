#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "utils.h"

int main(int argc, char *argv[]) {
    if ((argc < 3 || argc > 4)) {
        exit(EXIT_FAILURE);
    }

    strtok(argv[1], "=");
    char *filepath = strtok(NULL, "=");

    FILE *fptr = fopen(filepath, "rb");
    int frameCount = 0;

    if (strstr(argv[2], "--show") != NULL) {
        showFrames(fptr);

    } else if (strstr(argv[2], "--get") != NULL) {
        strtok(argv[2], "=");
        char *propName = strtok(NULL, "=");
        getFrame(fptr, propName);

    } else if (strstr(argv[2], "--set") != NULL) {
        strtok(argv[2], "=");
        char *propName = strtok(NULL, "=");
        strtok(argv[3], "=");
        char *propValue = strtok(NULL, "=");

        setFrame(fptr, propName, propValue, filepath);
    }

    return 0;
}