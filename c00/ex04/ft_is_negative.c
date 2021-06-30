/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 22:44:38 by fmilheir          #+#    #+#             */
/*   Updated: 2021/06/29 23:23:52 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;
	char	b;

	a = 'N';
	b = 'P';
	if (n < 0)
	{
		write(1, &a, 1);
	}
	if (n >= 0)
	{
		write(1, &b, 1);
	}
}
