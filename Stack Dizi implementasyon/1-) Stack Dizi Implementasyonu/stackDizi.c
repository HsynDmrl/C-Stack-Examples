/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackDizi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <student.42istanbul.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:18:03 by hdemirel          #+#    #+#             */
/*   Updated: 2023/09/26 19:13:58 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 5

// STACK’LERİN DİZİ (Array) İMPLEMENTASYONU

						  //				 ______
typedef struct stack      //				|______|
{                         //				|______|
	int data[STACK_SIZE]; //----> // top	|______|	Burayı oluşturduk.
	int top;              //---->   		|______|
} stack1;                 //				  data

// Stack’lere Eleman Ekleme İşlemi (push)

void	push(stack1 *stk, int c)
{
	if (stk->top == STACK_SIZE - 1) // top son indisi tutuyorsa DOLUdur
		printf("\nStack Dolu\n\n");
	else
	{
		stk->top++;
		stk->data[stk->top] = c;
	}
}

int	main(void)
{
	stack1 *stk = malloc(sizeof(stack1));

	push(stk, 5);
	push(stk, 1);
	push(stk, 3);
	push(stk, 7);

	printf("%d Stack'in Uzunluğu\n", stk->top); // indisi yani stack'in uzunluğu

	int i = 1;
	int j = 1;
	while (i < (stk->top + 1))
	{
		printf("%d.Eleman =  %d\n", j, stk->data[i]);
		i++;
		j++;
	}
	return (0);
}