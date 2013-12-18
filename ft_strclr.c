/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 16:09:52 by npineau           #+#    #+#             */
/*   Updated: 2013/12/15 11:56:39 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *src)
{
	int	i;

	i = 0;
	if (src)
	{
		while (src[i])
		{
			src[i] = 0;
			i++;
		}
	}
}