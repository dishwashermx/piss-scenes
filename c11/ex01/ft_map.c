/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:40:41 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/27 15:27:40 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int *dest;

	i = 0;
	dest = malloc(4 * length);
	while (i < length)
	{
		dest[i] = f(tab[i]);
		i++;
	}
	return (dest); 
}
