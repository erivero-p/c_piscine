/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:41:38 by erivero-          #+#    #+#             */
/*   Updated: 2023/02/15 09:22:52 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	num;

	num = 0;
	while (src[num] != '\0' && num < n)
	{
		dest[num] = src[num];
		num++;
	}
	while (num < n)
	{
		dest[num] = '\0';
		num++;
	}
	return (dest);
}

/*int	main(void)
{
	unsigned int	n;
	char	src[] = "muchas tardes";
	char	dest[] = "buenas gracias";

	n = 4;
	ft_strcnpy(dest, src, n);
	printf ("%s", dest);
	return (0);
}
*/