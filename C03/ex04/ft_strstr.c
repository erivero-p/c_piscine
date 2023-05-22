/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:44:49 by erivero-          #+#    #+#             */
/*   Updated: 2023/02/16 15:57:56 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{	
				j++;
				if (to_find [j] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char str[40] = "hdd gg ahshd";
	char to_find[3] = "gg";
	char *x;

	x = ft_strstr(str, to_find);
	printf("%p", x);
	return (0);
} */