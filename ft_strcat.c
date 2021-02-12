/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takobaya <takobaya@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 18:14:08 by takobaya          #+#    #+#             */
/*   Updated: 2020/09/26 18:44:02 by takobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (src[b] != '\0')
	{
		while (dest[a] != '\0')
		{
			a++;
		}
		dest[a] = src[b];
		b++;
		a++;
	}
	return dest;
}