/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parkour.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 13:22:35 by npineau           #+#    #+#             */
/*   Updated: 2013/12/13 23:31:40 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "hot_race.h"

void	ft_parkour(t_btree *current)
{
	if (current->left != NULL)
		ft_parkour(current->left);
	ft_putendl(current->value);
	if (current->right != NULL)
		ft_parkour(current->right);
}
