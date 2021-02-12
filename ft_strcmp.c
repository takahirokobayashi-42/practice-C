/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takobaya <takobaya@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 16:57:17 by takobaya          #+#    #+#             */
/*   Updated: 2020/09/27 13:45:45 by takobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int a;
	int b;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		b = s1[a] - s2[a];
		if(s1[a] - s2[a] != 0)
			return (b);
		a++;
	}
	return (b);
}