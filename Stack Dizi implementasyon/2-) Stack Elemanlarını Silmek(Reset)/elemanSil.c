/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elemanSil.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <student.42istanbul.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:48:18 by hdemirel          #+#    #+#             */
/*   Updated: 2023/09/26 19:14:44 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 5

// Bir Stack’in Tüm Elemanlarını Silme İşlemi (reset)

typedef struct stack
{
	int	data[STACK_SIZE];
	int	top;
}		stackA;

void	push_stack(stackA *stk, int c)
{
	if (stk->top == STACK_SIZE - 1)
		printf("\nStack DOLU\n");
	else
	{
		stk->top++;
		stk->data[stk->top] = c;
	}
}

void	reset_stack(stackA *stk)
{
	stk->top = -1;
}

int	main(void)
{
	stackA *stk = malloc(sizeof(stackA));

	push_stack(stk, 7);
	push_stack(stk, 3);
	push_stack(stk, 2);
	push_stack(stk, 10);

	int i = 1;
	int j = 1;
	printf("%d Stack'in Uzunluğu\n\n", stk->top);
		// indisi yani stack'in uzunluğu

	while (i < (stk->top + 1))
	{
		printf("%d.Eleman = %d\n", j, stk->data[i]);
		i++;
		j++;
	}

	reset_stack(stk);
	i = 1;
	j = 1;

	printf("\n%d Stack'in Uzunluğu\n", stk->top);
		// indisi yani stack'in uzunluğu

	while (i < (stk->top + 1))
	{
		printf("%d.Eleman = %d\n", j, stk->data[i]);
		i++;
		j++;
	}
}