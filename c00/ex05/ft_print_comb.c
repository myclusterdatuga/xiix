/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 22:52:11 by fmilheir          #+#    #+#             */
/*   Updated: 2021/06/30 11:57:27 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a)
{
	int	b;
	int	c;

	c = 32;
	b = 44;
	if (a < 55)
	{
		write(1, &b, 1);
		write(1, &c, 1);
	}
	else
		return ();
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				c++;
				print(a);
			}
			b++;
		}
		a++;
	}
}
