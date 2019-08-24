#ifndef __DICT_H__
#define __DICT_H__

typedef	struct	s_dictionary 
{
	char *number;
	char *text;
	struct s_dictionary *next;
}				t_dict;

t_dict *read_dico(char *path);
char *parse(char *buffer, int n);

#endif
