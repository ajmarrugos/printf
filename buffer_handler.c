#include "main.h"

/**
* buffer_handler - Will concatenate the buffer characters
* @buf: buffer pointer
* @c: charcter to concatenate
* @ibuf: index of buffer pointer
* Return: index of buffer pointer.
**/

unsigned int buffer_handler(char *buf, char c, unsigned int ibuf)
{
if (ibuf == 1024)
{
print_buf(buf, ibuf);
ibuf = 0;
}
buf[ibuf] = c;
ibuf++;
return (ibuf);
}
