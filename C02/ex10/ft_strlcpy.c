/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:33:06 by erivero-          #+#    #+#             */
/*   Updated: 2023/02/19 17:06:30 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size < 1)
		return (j);
	while (src[i] != '\0' && i < size - 1)
	{
		dest [i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

int	main(void)
{

	int		size;
	char	src[] = "1234";
	char	dest[] = "buenas gracias";
	size = 14;
	printf("%u\n", ft_strlcpy(dest, src, size));
	printf("%s\n\n", dest);
}
