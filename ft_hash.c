/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheron <cheron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/15 07:05:07 by cheron            #+#    #+#             */
/*   Updated: 2013/12/15 15:42:46 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "hotrace.h"
#include <stdio.h>

#include <stdlib.h>

void	ft_init_htab(t_btree **hash_tab)
{
	int		i;

	i = 0;
	while (i < TAB_SIZE)
	{
		hash_tab[i] = NULL;
		i++;
	}
}

size_t	ft_hash(char *keyword)
{
	int		len;
	int		i;
	size_t	ret;

	ret = 0;
	i = 0;
	len = ft_strlen(keyword);
	while (keyword[i] != '\0')
	{
		ret += (len * keyword[i] * keyword[i]);
		i++;
	}
	return (ret % TAB_SIZE);
}

int		ft_place_tree(t_btree **hash_tab, char *keyword, char *value)
{
	size_t		hash;

	hash = ft_hash(keyword);
	return (ft_create_tree(&hash_tab[hash], keyword, value));
	free(keyword);
	free(value);
}

void	ft_del_htab(t_btree **hash_tab)
{
	int			i;

	i = 0;
	while (i < TAB_SIZE)
	{
		if (hash_tab[i])
			ft_del_tree(&hash_tab[i]);
		i++;
	}
}
