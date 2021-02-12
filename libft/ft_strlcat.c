/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:58:23 by sdarron           #+#    #+#             */
/*   Updated: 2021/02/12 18:14:50 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	rez;

	i = 0;
	j = 0;
	rez = 0;
	while (dst[i] != '\0')
		++i;
	while (src[j] != '\0')
		++j;
	if (size <= i)
		rez = j + size;
	else
		rez = j + i;
	j = 0;
	while (src[j] != '\0' && size > 1 + i)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (rez);
}
