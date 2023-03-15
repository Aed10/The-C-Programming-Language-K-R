#include <stdio.h>
#define strcpy_macro(s, t) \
    do { \
        char *_s = (s), *_t = (t); \
        while ((*_s++ = *_t++) != '\0') \
            ; \
    } while (0)

int main()
{
	char dest[100]; 
	char src[12] = "Hello Wolrd";
	strcpy_macro(dest, src);
	printf("the phrase is: %s\n", dest);
	return 0;
}
