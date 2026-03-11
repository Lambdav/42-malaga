#include <unistd.h>

void	ft_print_combn(int n)
{
	char	t[10];
	int		i;

	i = 0;
	while (i < n)
	{
		t[i] = i + '0';
		i++;
	}
	while (n > 0 && n < 10)
	{
		write(1, t, n);
		if (t[0] == '9' - n + 1)
			break ;
		write(1, ", ", 2);
		i = n - 1;
		while (t[i] == '9' - n + 1 + i)
			i--;
		t[i]++;
		while (i < n - 1)
		{
			t[i + 1] = t[i] + 1;
			i++;
		}
	}
}
