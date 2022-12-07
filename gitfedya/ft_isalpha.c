/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpopadin <fpopadin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:22:27 by fpopadin          #+#    #+#             */
/*   Updated: 2022/12/06 19:33:01 by fpopadin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] <= 'Z' && str[a] >= 'A')
			|| (str[a] <= 'z' && str[a] >= 'a'))
				a++;
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	char	str[] = "asda";

	printf("%d", ft_isalpha(str));
	return (0);
}*/
