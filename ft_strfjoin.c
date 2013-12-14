/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheron <cheron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 00:59:49 by cheron            #+#    #+#             */
/*   Updated: 2013/12/14 01:01:58 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strfjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*s3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
		if ((s3 = ft_strnew(len1 + len2 + 1)) == NULL)
		return (NULL);
	ft_strncpy(s3, s1, len1);
	ft_strncat(s3, s2, len2);
	free((void) s1);
	return (s3);
}
