/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarita <aclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 23:24:02 by aclarita          #+#    #+#             */
/*   Updated: 2021/10/19 16:56:49 by aclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	else
	{
		while (i < len)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dst);
}

/*int main(void)
{
	char a[] = "123456";
	char b[] = "7654321a";
	size_t i;
	i = 2;
//	printf("%s\n", ft_memmove(b, a, 6));
	printf("%s", memmove(&a[0], &a[1], i));
}*/