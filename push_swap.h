/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:19:32 by wmozella          #+#    #+#             */
/*   Updated: 2022/02/22 21:51:53 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char	*str);
int		main(int argc, char **argv);
void	ft_create_list_a(int argc, char **argv, int *arr, t_list **list_a);
void	ft_put_back(t_list **list, long int i);
t_list	*ft_create_list(long int i);
void	sort_arr(int *arr, int argc);
void	ft_check_doublicate(int argc, char **argv);

#endif