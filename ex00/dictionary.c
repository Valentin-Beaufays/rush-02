/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeaufay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 13:41:25 by vbeaufay          #+#    #+#             */
/*   Updated: 2019/08/24 18:26:57 by vbeaufay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "dict.h"

char	*ft_get_line(char *buf, int size)
{
	
}

t_dict	*read_dico(char *path)
{
	int		fd;
	t_dict	*dico;
	int		ln;
	char	*line;

	fd = open(path, O_RDONLY);
	while (ln > 0)
	{
		line = ft_get_line(fd);
	}
	return (dico);
}
