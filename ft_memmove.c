/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeerewe <mkeerewe@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:42:18 by mkeerewe          #+#    #+#             */
/*   Updated: 2025/08/30 15:31:04 by mkeerewe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		// if (&str_src[i] >= str_dst && &str_src[i] < str_dst + len)
		// 	continue ;
		str_dst[i] = str_src[i];
		i++;
	}
	return (dst);
}
