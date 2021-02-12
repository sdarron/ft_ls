/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 00:47:48 by sdarron           #+#    #+#             */
/*   Updated: 2021/02/12 16:49:48 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ffloat(va_list ar, t_flags *f, int fd)
{
	int		i;
	int		z;

	i = 0;
	z = f->tchn == 0 && f->tchn_t != 1 ? 6 : f->tchn;
	i += putnbrf(ar, f, z, fd);
	return (i);
}
