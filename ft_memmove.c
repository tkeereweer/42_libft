/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeerewe <mkeerewe@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:42:18 by mkeerewe          #+#    #+#             */
/*   Updated: 2025/08/21 15:14:22 by mkeerewe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memoverlap(char *mem_src, char *mem_dst, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (mem_src + i == mem_dst + j)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*str_dst;
	char	*str_src;

	if (src == (void *) 0 && dst == (void *) 0)
		return (dst);
	i = 0;
	str_dst = (char *) dst;
	str_src = (char *) src;
	while (i < len)
	{
		if (ft_memoverlap(str_src, str_dst, len) == 1)
			break ;
		str_dst[i] = str_src[i];
		i++;
	}
	return (dst);
}
