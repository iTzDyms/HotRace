/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_parkour.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 13:24:55 by npineau           #+#    #+#             */
/*   Updated: 2013/12/13 23:32:12 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "hot_race.h"

void	ft_rev_parkour(t_btree *current)
{
	if (current->right != NULL)
		ft_parkour(current->right);
	ft_putendl(current->value);
	if (current->left != NULL)
		ft_parkour(current->left);
}
