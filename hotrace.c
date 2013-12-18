/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 23:13:32 by npineau           #+#    #+#             */
/*   Updated: 2013/12/15 16:51:54 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "hotrace.h"

int		main(void)
{
	t_btree	*hash_tab[TAB_SIZE];

	ft_init_htab(hash_tab);
	if (ft_get_input(hash_tab) == -1 || ft_get_query(hash_tab) == -1)
	{
		strerror(errno);
		return (1);
	}
	ft_del_htab(hash_tab);
}

int		ft_get_input(t_btree **hash_tab)
{
	int		k;
	char	*keyword;
	char	*value;

	k = 1;
	while (k)
	{
		if ((get_next_line(0, &keyword)) == -1)
			return (-1);
		k = (keyword[0] == '\0' ? 0 : 1);
		if (keyword[0] != '\0')
		{
			if ((get_next_line(0, &value)) == -1)
				return (-1);
			k = (value[0] == '\0' ? 0 : 1);
		}
		if (keyword[0] != '\0')
		{
			if ((ft_place_tree(hash_tab, keyword, value) == -1))
				return (-1);
		}
	}
	free(keyword);
	return (1);
}

int		ft_create_tree(t_btree **root, char *keyword, char *value)
{
	t_btree	*node;

	if (value == NULL)
	{
		if (!(value = (char *)malloc(sizeof(char))))
			return (-1);
		*value = '\0';
	}
	if (!(node = ft_new_node(keyword, value)))
		return (-1);
	*root = ft_place_node(*root, node);
	return (1);
}

int		ft_get_query(t_btree **hash_tab)
{
	char	*keyword;
	int		ret;

	keyword = NULL;
	while ((ret = get_next_line(0, &keyword)) == 1)
	{
		if (keyword[0] != '\0')
		{
			ft_output_query(&hash_tab[0], keyword);
			free(keyword);
		}
		else
			return (1);
	}
	if (ret == -1)
		return (-1);
	return (1);
}

void	ft_output_query(t_btree **hash_tab, char *query)
{
	t_btree	*result;
	size_t	hash;

	if (query == NULL)
		return ;
	hash = ft_hash(query);
	result = ft_search_node(hash_tab[hash], query);
	if (result)
		ft_putendl(result->value);
	else
	{
		ft_putstr(query);
		ft_putendl(": Not found.");
	}
}
