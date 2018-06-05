#include <stdio.h>

char *ft_strdup(char *src);

int main(void)
{
	char *str = "Hello, world!";
	char *cpy = ft_strdup(str);
	printf("%s\n", cpy);
	return (0);
}
