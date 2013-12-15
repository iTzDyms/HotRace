/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheron <cheron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/15 07:05:07 by cheron            #+#    #+#             */
/*   Updated: 2013/12/15 08:38:13 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "hotrace.h"
#include <stdio.h>

void	ft_init_htab(t_btree **hash_tab)
{
	int		i;

	ft_putendl("entering init_htab");
	i = 0;
	while (i < TAB_SIZE)
	{
		hash_tab[i] = NULL;
		i++;
	}
	ft_putendl("leaving int_htab");
}

size_t	ft_hash(char *keyword)
{
	int		len;
	int		i;
	size_t	ret;

	ft_putendl("
	ret = 0;
	i = 0;
	len = ft_strlen(keyword);
	while (keyword[i] != '\0')
	{
		ret += (len * keyword[i] * keyword[i]);
		i++;
	}
	return (ret % (TAB_SIZE));
}

void	ft_place_tree(t_btree **hash_tab, char *keyword, char *value)
{
	t_btree		*root;
	size_t		hash;

	hash = ft_hash(keyword);
	printf("hash nb = %zu", hash);
	ft_create_tree(hash_tab[hash], keyword, value);
}

void	ft_del_htab(t_btree	**hash_tab)
{
	int			i;

	i = 0;
	while (i < TAB_SIZE)
	{
		if (hash_tab[i])
			ft_del_tree(&hash_tab[i]);
	}
}
