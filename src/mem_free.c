/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:25:25 by fmanzana          #+#    #+#             */
/*   Updated: 2022/12/30 13:00:11 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
* It frees the allocated memory for the stack.
* @param stk Stack to be free
*/
void	free_stk(t_stack **stk)
{
	t_stack	*tmp;

	if (!stk || !(*stk))
		return ;
	while (*stk)
	{
		tmp = (*stk)->next;
		free(*stk);
		(*stk) = tmp;
	}
	(*stk) = NULL;
}

/*
* It frees the allocated memory for an Array of Strings
* @param arr Array to be free
*/
void	free_arr(char **arr)
{
	int		i;

	if (!arr || !(*arr))
		return ;
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
