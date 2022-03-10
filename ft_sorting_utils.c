/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:48:11 by wmozella          #+#    #+#             */
/*   Updated: 2022/03/10 21:49:04 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max(t_list **list_b, int i)
{
	int		nb;

	nb = 0;
	while (*list_b)
	{
		if ((*list_b)->index == i)
			break ;
		*list_b = (*list_b)->next;
		nb ++;
	}
	return (nb);
}

void	ft_sort_b(t_list **list_a, t_list **list_b, int argc)
{
	int	max;
	int	mid;
	int	place;

	max = argc - 2;
	while (*list_b)
	{
		mid = ((max + 1) / 2);
		place = ft_max(list_b, max);
		if ((*list_b)->index == max)
		{
			ft_pa_pb(list_a, list_b, 'a');
			max --;
		}
		else if (place <= mid && (*list_b)->index != max)
			ft_ra_rb_rr(list_a, list_b, 'b');
		else if (place > mid && (*list_b)->index != max)
			ft_rra_rrb_rrr(list_a, list_b, 'b');
	}
}

void	ft_sort_for_100(t_list **list_a, t_list **list_b, int argc)
{
	int	i;

	i = 0;
	while (*list_a)
	{
		if ((*list_a)->index <= i && i > 1)
		{
			ft_pa_pb(list_a, list_b, 'b');
			ft_ra_rb_rr(list_a, list_b, 'b');
			i++;
		}
		else if ((*list_a)->index <= (i + 15))
		{
			ft_pa_pb(list_a, list_b, 'b');
			i++;
		}
		else
			ft_ra_rb_rr(list_a, list_b, 'a');
	}
	ft_sort_b(list_a, list_b, argc);
}

void	ft_sort_for_500(t_list **list_a, t_list **list_b, int argc)
{
	int	i;

	i = 0;
	while (*list_a)
	{
		if ((*list_a)->index <= i && i > 1)
		{
			ft_pa_pb(list_a, list_b, 'b');
			ft_ra_rb_rr(list_a, list_b, 'b');
			i++;
		}
		else if ((*list_a)->index <= (i + 30))
		{
			ft_pa_pb(list_a, list_b, 'b');
			i++;
		}
		else
			ft_ra_rb_rr(list_a, list_b, 'a');
	}
	ft_sort_b(list_a, list_b, argc);
}
