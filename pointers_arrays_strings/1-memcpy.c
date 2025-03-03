char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int count;
for ( count =0; count < n; count++)
{
	src[count] = dest[count];
}

return (dest);
}
