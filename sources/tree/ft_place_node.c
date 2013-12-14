/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 18:58:06 by npineau           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2013/12/13 23:27:23 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======
/*   Updated: 2013/12/13 23:30:13 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "hot_race.h"
>>>>>>> bfe224d6751b56c02efce8126124e8a1599b1f69
#include <string.h>
#include "hot_race.h"

/*
** Place the node to the left if [new] is lower than [current] according to
** ft_tri. To the right if greater (or equal). It return [new] if [current]
** is NULL, otherwise place the node, then return [current].
*/

t_btree	*ft_place_node(t_btree *current, t_btree *new)
{
	if (current == NULL)
		return (new);
<<<<<<< HEAD
	if (ft_strcmp(current, new) < 0)
=======
	if (ft_strcmp(current, new) > 0)
>>>>>>> bfe224d6751b56c02efce8126124e8a1599b1f69
	{
		if (current->left == NULL)
			current->left = new;
		else
			ft_place_node(current->left, new);
	}
	else
	{
		if (current->right == NULL)
			current->right = new;
		else
			ft_place_node(current->right, new);
	}
	return (current);
}
