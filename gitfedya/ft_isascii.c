/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpopadin <fpopadin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:00:53 by fpopadin          #+#    #+#             */
/*   Updated: 2022/12/06 19:33:25 by fpopadin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(char *nb)
{
	int	a;

	a = 0;
	while (nb[a] != '\0')
	{
		if (nb[a] >= 0 && nb[a] <= 127)
			a++;
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	char	nb[] = "µ";

	printf("%d", ft_isascii(nb));
	return (0);
}*/
