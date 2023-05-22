/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:45:17 by erivero-          #+#    #+#             */
/*   Updated: 2023/02/11 17:26:03 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	num;

	num = 0;
	while (src[num] != '\0')
	{
		dest[num] = src[num];
		num++;
	}
	dest [num] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[15];
	char	dest[15];

	ft_strcpy(dest, "socorro jesús");
	printf ("%s", dest);
	return (0);
}*/
