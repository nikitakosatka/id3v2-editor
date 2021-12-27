#ifndef ID3V2_EDITOR_UTILS_H
#define ID3V2_EDITOR_UTILS_H

struct frame {
    char name[5];
    char value[1024];
};

struct frame *getFrames(FILE *filePointer, int *framesCount);

void setFrame(FILE *filePointer, char *name, char *value, char *output);

void showFrames(FILE *filePointer);

void getFrame(FILE *filePointer, char *frameName);

#endif