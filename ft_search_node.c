/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 00:00:34 by npineau           #+#    #+#             */
/*   Updated: 2013/12/15 11:54:22 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "hotrace.h"
#include <string.h>

t_btree	*ft_search_node(t_btree *current, char *clue)
{
	t_btree	*found;
	int		ret;

	found = NULL;
	if (current == NULL)
		return (NULL);
	ret = ft_strcmp(clue, current->keyword);
	if (ret > 0 && current->right != NULL)
		found = ft_search_node(current->right, clue);
	else if (ret < 0 && current->left != NULL)
		found = ft_search_node(current->left, clue);
	else if (ret == 0)
		found = current;
	return (found);
}
