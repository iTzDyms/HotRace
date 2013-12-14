/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 19:18:41 by npineau           #+#    #+#             */
/*   Updated: 2013/12/13 23:26:40 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "hot_race.h"
#include <stdlib.h>

/*
** Create a new node, and allocate it and initialize every element to NULL.
** If the alloction fail, NULL is returned.
*/

t_btree	*ft_new_node(void)
{
	t_btree		*new;

	new = (t_btree *)malloc(sizeof(t_btree));
	if (!new)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->value = NULL;
	new->keyword = NULL;
	return (new);
}
