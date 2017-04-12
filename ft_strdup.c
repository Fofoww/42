/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <doriol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 14:40:10 by doriol            #+#    #+#             */
/*   Updated: 2017/04/12 01:52:17 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	int		i;
	char	*string2;

	i = 0;
	while (s1[i] != '\0')
		i++;
	size = i;
	string2 = (char*)malloc(size + 1);
	i = 0;
	while (i != size)
	{
		string2[i] = s1[i];
		i++;
	}
	string2[i] = '\0';
	return (string2);
}
