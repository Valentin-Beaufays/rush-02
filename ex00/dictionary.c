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

char	*ft_get_line(int fd)
{
	char buf[1024];
	char *line;
	int cn;


	cn = read(fd, buf, 1024)
	if (cn == -1)
		return (0);
	while (buf[size] != '\n')
		size++;
	line = (char *)malloc((sizeof(*line) * size) + 1);
	ft_strncpy(line, buf, size);
	/*reset head*/
	return (line);
}

int		parse_line(char *line, t_dict  *dico)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (line[i] != space)
		i++;
	dico.number = (char *)malloc((sizeof(*(dico.number)) * i) + 1);
	strncpy(dico.number, line, i);
	while (line[i] == ' ' || line[i] == ':')
	{
		if (line[i] == ':')
			valid = 1;
		i++;
	}
	if (valid)
	{
		j = i;
		while (line[i])
			i++;
		dico.text = (char *)malloc(sizeof(char *) * (i - j) + 1);
		strncpy(dico.text, line + j, i - j); //TO_DO
		return (1);
	}
	reset(dico); //TO_DO
	return (0)
}

t_dict	*read_dico(char *path)
{
	int		fd;
	t_dict	dico;
	int		ln;
	char	*line;

	fd = open(path, O_RDONLY);
	line = ft_get_line(fd);
	new_chain(dico); //TO_DO
	parse_line(line, dico);
	close (fd);
	return (dico);
}
