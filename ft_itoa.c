#include "libft.h"

static unsigned	int		Abs(int	n)
{
	unsigned int	n_abs;

	if  (n < 0)
		n_abs = n * -1;
	else 
		n_abs = n;
	return (n_abs);
}

static unsigned	int		GetLen(unsigned int n)
{
	if (n >= 0 && n < 10)
		return (1);
	return (1 + GetLen(n / 10));
}

static char 	*AbsToStr(char  *str, unsigned int abs)
{
	if (str == NULL)
		return (NULL);
	if (abs == 0)
		return (str);
	else
		*(--str) = abs % 10 + '0';
	return (AbsToStr(str,  abs / 10));
}

char			*ft_itoa(int n)
{
	unsigned int	abs;
	unsigned int	len;
	char			is_minus;
	char			*str;	

	abs = Abs(n);
	len = GetLen(abs);
	is_minus = 0;
	if (n < 0)
		is_minus = 1;
	if(!(str = ft_calloc(is_minus + len + 1, sizeof(char))))
		return (NULL);
	if (abs == 0)
	{
		*str = '0';
		return (str);
	}
	if (is_minus == 1)
		*str = '-';
	return (AbsToStr(str + is_minus + len, abs) - is_minus);
}

// #include <stdio.h>

// int		main(void)
// {
// 	printf("%s", ft_itoa(123));

// 	return (0);
// }