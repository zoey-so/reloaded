/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smilch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:28:44 by smilch            #+#    #+#             */
/*   Updated: 2026/05/21 17:28:47 by smilch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char				*str_cp;
	char				*res;
	unsigned short int	len;

	str_cp = src;
	while (*str_cp++)
		;
	len = str_cp - src;
	res = (char *)malloc(sizeof(char) * len);
	if (!res)
		return (NULL);
	str_cp = src;
	while (*str_cp)
		*res++ = *str_cp++;
	*res = 0;
	return (res - len + 1);
}

/*
#include <stdio.h>
int	main(void)
{
	char source[] = "jump motherf$%*@ jump";

    char* target = ft_strdup(source); 

    printf("%s", target);
    return 0;
	return (0);
}*/
