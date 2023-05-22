/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:50:10 by erivero-          #+#    #+#             */
/*   Updated: 2023/02/22 19:54:18 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}	

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (argc >= ++i)
	{
		j = 1;
		while (argc - 1 >= ++j)
		{
			if (ft_strcmp(argv[j], argv[j - 1]) < 0)
			{
				swap = argv[j];
				argv[j] = argv[j - 1];
				argv[j - 1] = swap;
			}
		}
	}
	i = 0;
	while (argc > ++i)
		ft_putstr(argv[i]);
	return (0);
}
