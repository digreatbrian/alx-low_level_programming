
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary as a string
 * return: Unsigned int in base 10
 */
unsigned int binary_to_uint(const char *b)
{
  unsigned  int value = 0;
  int i = 0;
  char j;

  if (b == NULL) {
    return (0);
  }
  
  j = b[i];
  
  while (j != '\0') {
    
    if (j != '0' && j != '1')
      {
	return (0);
      }
    value <<=1;
    value += j - '0';
    i++;
    j = b[i];
  }
  
  return (value);
}
