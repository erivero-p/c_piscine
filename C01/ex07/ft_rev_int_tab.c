/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:17:25 by erivero-          #+#    #+#             */
/*   Updated: 2023/02/10 12:12:29 by erivero-         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		ft_swap ((tab + i), (tab + j));
		i++;
		j--;
	}
}

/*int main(void)
{
	int i;
	int *punt;
	int array [5] = {2, 5, 6, 1, 8};
	int tam;

	tam = 5;
	punt = &array[0];
	ft_rev_int_tab(punt, tam);
	i = 0;
	while (i < tam)
	{
		printf("%i", array[i]);
		i++;
	}
	return 0;
}*/ 