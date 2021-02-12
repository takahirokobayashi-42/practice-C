/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takobaya <takobaya@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 01:54:46 by takobaya          #+#    #+#             */
/*   Updated: 2020/09/27 01:54:51 by takobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}