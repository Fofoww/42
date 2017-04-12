/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <doriol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:58:50 by doriol            #+#    #+#             */
/*   Updated: 2017/04/12 20:31:02 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void *bf;

	bf = (void *)malloc(len * sizeof(void *));
	if (!bf)
		return (NULL);
	ft_memcpy(bf, src, len);
	ft_memcpy(dst, bf, len);
	free(bf);
	return (dst);
}
