

#include "srcs/ft_printf.h"
#include <limits.h>
#include <stdint.h>
#include <stdio.h>

int	main(void)
{
	printf(" -> %d\n", printf("%c test", 0));
	printf(" -> %d\n", ft_printf("%c test", 0));
	printf(" -> %d\n", printf("%s", 0));
	printf(" -> %d\n", ft_printf("%s", 0));
	printf(" -> %d\n", printf("%p", NULL));
	printf(" -> %d\n", ft_printf("%p", NULL));
	printf(" -> %d\n", printf("%d", 42));
	printf(" -> %d\n", ft_printf("%d", 42));
	printf(" -> %d\n", printf("%i", 100));
	printf(" -> %d\n", ft_printf("%i", 100));
	printf(" -> %d\n", printf("%u", 52U));
	printf(" -> %d\n", ft_printf("%u", 52U));
	printf(" -> %d\n", printf("%x", 46));
	printf(" -> %d\n", ft_printf("%x", 46));
	printf(" -> %d\n", printf("%X", 46));
	printf(" -> %d\n", ft_printf("%X", 46));
	printf(" -> %d\n", printf("%%"));
	printf(" -> %d\n", ft_printf("%%"));
	printf(" -> %d\n", printf("H%cllo%s%x%s!", 'e', " ", 0x42, "tokyo"));
	printf(" -> %d\n", ft_printf("H%cllo%s%x%s!", 'e', " ", 0x42, "tokyo"));
	printf(" -> %d\n", printf("%d", INT_MIN - 1));
	printf(" -> %d\n", ft_printf("%d", INT_MIN - 1));
}
