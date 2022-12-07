/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpopadin <fpopadin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:14:14 by fpopadin          #+#    #+#             */
/*   Updated: 2022/12/06 19:34:45 by fpopadin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * len);
	if (tmp == NULL)
		return (NULL);
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}
/*L'utilisation de la fonction « sizeof » permet de retourner 
 * la taille du réceptacle (en octets associé à un type. Si on 
 * multiplie ensuite par une 
 * valeur positive entière, nous avons une valeur entière qui 
 * correspond à un 
 * nombre d'octets. La fonction « malloc » demande alors au 
 * gestionnaire (fictif) 
 * de la mémoire centrale de lui réserver le nombre d'octets 
 * consécutifs demandés 
 * en mémoire.*/
