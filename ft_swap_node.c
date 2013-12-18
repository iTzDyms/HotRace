/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/15 10:09:01 by npineau           #+#    #+#             */
/*   Updated: 2013/12/15 10:09:02 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "hotrace.h"

void	ft_swap_node(t_btree *dest, t_btree *src)
{
	char	*tmp;

	tmp = dest->value;
	dest->value = src->value;
	free(tmp);
	tmp = NULL;
	free(src->keyword);
	src->keyword = NULL;
	free(src);
	src = NULL;
}
