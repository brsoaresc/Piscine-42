/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:31:06 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/16 19:58:24 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i = 0;
	int	*range;

	range = ft_range(0, 9);
	while (i < 9)
	{
		printf("%d", range[i]);
		i++;
	}

}
*/
