/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiziDene.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <student.42istanbul.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:18:56 by hdemirel          #+#    #+#             */
/*   Updated: 2023/09/26 19:26:13 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#define STACK_SIZE 5

typedef struct s_stack
{
	int	data[STACK_SIZE];
	int	top;
}		t_stack;

void	push_stack(t_stack *stk, int c)
{
	if (stk->top == STACK_SIZE - 1)
		printf("STACK DOLU");
	else
	{
		stk->top++;
		stk->data[stk->top] = c;
	}
}

void	reset_stack(t_stack *stk)
{
	stk->top = -1;
}

int	pop_stack(t_stack *stk)
{
	int	i;

	i = 0;
	if (stk->top == -1)
		printf("Stack Boş!");
	else
	{
		i = stk->top--;
		return (i);
	}
	return (i);
}

int	main(void)
{
	int x;
	t_stack n;
	int i;
	reset_stack(&n);
	push_stack(&n, 4);
	push_stack(&n, 2);
	push_stack(&n, 5);
	push_stack(&n, 7);
	push_stack(&n, 11);
	x = pop_stack(&n);
	printf("%d\n", x);
	x = pop_stack(&n);
	printf("%d\n", x);
	x = pop_stack(&n);
	printf("%d\n", x);
	x = pop_stack(&n);
	printf("%d\n", x);
	x = pop_stack(&n);
	printf("%d\n", x);
	return (0);
}