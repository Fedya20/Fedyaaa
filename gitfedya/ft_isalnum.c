/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpopadin <fpopadin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:36:48 by fpopadin          #+#    #+#             */
/*   Updated: 2022/12/06 19:32:42 by fpopadin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (((str[a] <= 90) && (str[a] >= 65))
			|| ((str[a] <= 122) && (str[a] >= 97))
			|| ((str[a] <= 57) && (str[a] >= 48)))
			a++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "asd";

	printf("%d", ft_isalnum(str));
	return (0);
}*/
