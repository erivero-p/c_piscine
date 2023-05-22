/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:58:08 by erivero-          #+#    #+#             */
/*   Updated: 2023/02/16 15:57:22 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	h;

	i = 0;
	j = 0;
	h = 0;
	while (dest[i] != '\0')
		i++;
	while (src[h] != '\0')
		h++;
	if (size <= i)
		h += size;
	else
		h += i;
	while (src[j] != '\0' && size > (i + 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (h);
}

/* #include <string.h> 
int	main(void)

{
	char	dest[50] = "12345";
	char	src[] = "12345";
	int		size;

	size = 2;
	printf("%u\n", ft_strlcat(dest, src, size));
	printf("%s\n\n", dest);
	printf("%lu\n", strlcat(dest, src, size));
}
 */