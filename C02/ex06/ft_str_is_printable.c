/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:29:42 by erivero-          #+#    #+#             */
/*   Updated: 2023/02/14 11:19:17 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 0 && *str <= 31) || *str == 127)
			return (0);
		str++;
	}
	return (1);
}

/* int	main(void)
{
	int y;

	y = ft_str_is_printable("	");
	printf ("%d", y);
	return 0;
}
 */