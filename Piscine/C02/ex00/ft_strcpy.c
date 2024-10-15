/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:15:12 by brsoares          #+#    #+#             */
/*   Updated: 2024/09/14 08:25:52 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Bruna";
	char	str2[] = "Cassola";

	printf("Before str1 = %s e str2 = %s\n", str1, str2);
	
	ft_strcpy(str1, str2);
	
	printf("After str1 = %s e str2 = %s", str1 ,str2);
	return (0);
}
*/
