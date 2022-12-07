/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpopadin <fpopadin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:45:37 by fpopadin          #+#    #+#             */
/*   Updated: 2022/12/06 19:33:41 by fpopadin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char *nb)
{
	int	a;

	a = 0;
	while (nb[a] != '\0')
	{
		if (nb[a] <= '9' && nb[a] >= '0')
			a++;
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	char	nb[] = "234";

	printf("%d", ft_isdigit(nb));
	return (0);
}*/
