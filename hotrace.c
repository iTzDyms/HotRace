/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 23:13:32 by npineau           #+#    #+#             */
/*   Updated: 2013/12/15 08:29:55 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "hotrace.h"

int		main(void)
{
	t_btree	*hash_tab[TAB_SIZE];

	ft_init_htab(&hash_tab[0]);
	ft_get_input(&hash_tab[0]);
	ft_get_query(&hash_tab[0]);
	ft_del_htab(&hash_tab[0]);
}

void	ft_get_input(t_btree **hash_tab)
{
	int		k;
	char	*keyword;
	char	*value;

	keyword = NULL;
	value = NULL;
	k = 1;
	while (k)
	{
		get_next_line(0, &keyword);
		k = (keyword[0] == '\0' ? 0 : 1);
		if (keyword[0] != '\0')
		{
			get_next_line(0, &value);
			k = (value[0] == '\0' ? 0 : 1);
		}
		if (keyword[0] != '\0')
			ft_place_tree(&hash_tab[0], keyword, value);
	}
}

t_btree	*ft_create_tree(t_btree *root, char *keyword, char *value)
{
	t_btree	*node;

	if (value == NULL)
	{
		value = (char *)malloc(sizeof(char));
		*value = '\0';
	}
	node = ft_new_node(keyword, value);
	root = ft_place_node(root, node);
	return (root);
}

void	ft_get_query(t_btree **hash_tab)
{
	char	*keyword;
	int		k;

	keyword = NULL;
	k = 1;
	while (k)
	{
		get_next_line(0, &keyword);
		k = (keyword[0] == '\0' ? 0 : 1);
		if (keyword[0] != '\0')
			ft_output_query(&hash_tab[0], keyword);
	}
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
