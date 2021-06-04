/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selectionsort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 15:07:56 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/06/04 07:18:00 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_selection_sort(int arr[], int size)
{
	int	max;
	int temp;
	int	i;
	int j;

	i = size - 1;
	j = 0;
	while (i > 0)
	{
		j = 0;
		max = i;
		while (j < i)
		{
			if (arr[j] > arr[max])
			{
				max = j;
			}
			j++;
		}
		temp = arr[max];
		arr[max] = arr[i];
		arr[i] = temp;
		i--;
	}
	return(arr);
}