/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:20:34 by erivero-          #+#    #+#             */
/*   Updated: 2023/02/10 12:15:04 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	num;
	int	sig;

	num = 0;
	while (num < (size - 1))
	{
		sig = num + 1;
		if (tab[num] > tab[sig])
		{
			ft_swap ((tab + num), (tab + sig));
			num = 0;
		}
		else
		num++;
	}	
}

/*int main(void)
{
	int num = 0;
	int tab[4] = {8, 5, 2, 3};
	int size = 4;

	ft_sort_int_tab (tab, size);
	while (num < size)
	{
		printf("%i", tab[num]);
		num++;
	}
	return 0;
}*/