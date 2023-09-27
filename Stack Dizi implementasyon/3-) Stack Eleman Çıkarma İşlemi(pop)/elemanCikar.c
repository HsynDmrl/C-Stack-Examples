/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elemanCikar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <student.42istanbul.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:02:27 by hdemirel          #+#    #+#             */
/*   Updated: 2023/09/26 19:17:17 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define	STACK_SIZE 5

typedef struct s_stack
{
	int data[STACK_SIZE];
	int top;
} t_stack;

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

int	pop_stack(t_stack *stk)
{
	int i = 0;
	if (stk->top == -1)
		printf("Stack Boş!");
	else
	{
		i = stk->top--;
		return i;
	}
	return i;
}

int main()
{
	t_stack *stk = malloc(sizeof(t_stack));

	push_stack(stk, 10);
	push_stack(stk, 12);
	push_stack(stk, 50);
	push_stack(stk, 70);
	
	printf("%d Elemanlı\n\n", stk->top);
	
	int i = 1;
	int j = 1;
	while (i < (stk->top + 1))
	{
		printf("%d.Eleman = %d\n",j, stk->data[i]);
		i++;
		j++;
	}
	pop_stack(stk);

	printf("\n%d Elemanlı\n\n", stk->top);
	
	i = 1;
	j = 1;
	while (i < (stk->top + 1))
	{
		printf("%d.Eleman = %d\n",j, stk->data[i]);
		i++;
		j++;
	}

	pop_stack(stk);

	printf("\n%d Elemanlı\n\n", stk->top);
	
	i = 1;
	j = 1;
	while (i < (stk->top + 1))
	{
		printf("%d.Eleman = %d\n",j, stk->data[i]);
		i++;
		j++;
	}
}