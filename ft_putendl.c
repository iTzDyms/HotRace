/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheron <cheron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:05:57 by cheron            #+#    #+#             */
/*   Updated: 2013/12/15 12:15:01 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "hotrace.h"

void	ft_putendl(char const *s)
{
	int	i;

	ft_putstr(s);
	write(1, "\n", 1);
}
