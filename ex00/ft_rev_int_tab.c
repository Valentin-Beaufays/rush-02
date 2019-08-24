/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmenegal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 14:15:01 by nmenegal          #+#    #+#             */
/*   Updated: 2019/08/24 16:02:24 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(char *tab, int size)
{
	int tmp;
	int index;

	index = 0;
	tmp = 0;
	while (index < size / 2)
	{
		tmp = tab[index];
		tab[index] = tab[size - 1 - index];
		while (tab[size])
			tab[size - 1 - index] = tmp;
			size++;
		index++;
	}
}	
