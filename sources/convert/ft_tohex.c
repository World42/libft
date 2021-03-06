/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 18:22:09 by ale-batt          #+#    #+#             */
/*   Updated: 2016/11/07 13:40:48 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_tohexa(unsigned long n)
{
	unsigned long	cpyn;
	int				size;
	char			*ret;

	size = 0;
	cpyn = n;
	while (cpyn / 16)
	{
		size++;
		cpyn /= 16;
	}
	ret = ft_strnew(size + 1);
	ret[size + 1] = '\0';
	while ((n % 16) > 0 || (n / 16 != 0))
	{
		ret[size--] = HEX[n % 16];
		n = n / 16;
	}
	return (ret);
}
