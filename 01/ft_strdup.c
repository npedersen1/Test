#include <stdlib.h>

int ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return (len);
}

char *ft_strdup(char *src)
{
	char *cpy;
	int i = 0;
	cpy = malloc(sizeof(char) * ft_strlen(src) + 1);

	while (*src)
	{
		*cpy = *src;
		cpy++;
		src++;
		i++;
	}
	
	*cpy = '\0';
	cpy -= i;
	return (cpy);
}
