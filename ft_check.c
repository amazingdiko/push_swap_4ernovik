/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:51:09 by wmozella          #+#    #+#             */
/*   Updated: 2022/02/22 21:52:19 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_doublicate(int argc, char **argv)
{
	int	b;
	int	k;

	k = 1;
	while (k < argc)
	{
		b = k + 1;
		while (b < argc)
		{
			if (ft_atoi(argv[k]) == ft_atoi(argv[b]))
				write(1, "Error\n", 5);
			b ++;
		}
		k ++;
	}
}
