/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 13:37:15 by alama             #+#    #+#             */
/*   Updated: 2019/08/24 16:03:17 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_rev_int_tab.h"
// a = compteur
// str = les caracteres d'un chiffre

int		ft_ouf(int a)
{
	if (a == 1)
		write(1, "Unite\n", 5);
	if (a == 2)
		write(1, "Dizaine\n", 8);
	if (a >= 3 && a < 4)
		write(1, "centaine\n", 9);
	if (a >= 4 && a < 7)
		write(1, "milliers\n", 9);
	if (a >= 7 && a < 10)
		write(1, "millions\n", 9);
	if (a >= 10)
		write(1, "milliards\n", 11);
	return (0);
		
}
char	ft_ouille(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	if (a == 0)
	{
		write (1, "zero\n", 6);
	}
	else
	{
		ft_ouf(a);
	}
	return (0);
}

char	ft_aie(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 48 || str[a] > 57)
		{
			write(1, "error\n", 8);
			return (0);
		}
		a++;
	}
	ft_ouille(str);
	return (0);
}
#include <stdio.h>
int		main(void)
{
	int	a;
	char	str[] = "552000525353355";
	ft_rev_int_tab(str, a);
	ft_aie(str);
	printf("%s", str);
	return (0);
}
