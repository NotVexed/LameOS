#include <stddef.h>

void *memcpy(void *destination, void *source, size_t length)
{
    char *csrc = (char *)source;
    char *cdest = (char *)destination;

    for(int i = 0; i < length; ++i)
    {
        cdest[i] = csrc[i];
    }

    return destination;
}

char strcpy(char *dest, char *src)
{
    
}