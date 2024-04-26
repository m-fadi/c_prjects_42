#include <stddef.h>
void *memcpy(void *dest, const void *src, size_t n)
{
     if (dest == NULL)
          return NULL; 

     unsigned char *p1 = (unsigned char *)src;
     unsigned char *p2 = (unsigned char *)dest;

     while (n-- > 0)
     {
          *p2++ = *p1++;
     }

     return dest;
}
