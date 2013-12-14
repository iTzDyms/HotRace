/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 15:58:26 by npineau           #+#    #+#             */
/*   Updated: 2013/12/13 23:20:42 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "hot_race.h"

void	ft_del_node(t_btree **current)
{
	ft_strdel(keyword);
	ft_strdel(value)
	free(*current);
	*current = NULL;
}
