/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 00:48:53 by sdarron           #+#    #+#             */
/*   Updated: 2021/02/12 16:44:38 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	percent(char c, t_flags *f, int fd)
{
	int i;

	f->w = 0;
	f->tchn = 0;
	if (f->percent != -1)
		i = putcharn(c, f, 0, fd);
	else
		i = 0;
	return (i);
}
