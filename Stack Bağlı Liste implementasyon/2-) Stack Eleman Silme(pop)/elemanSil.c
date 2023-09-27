/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elemanSil.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <student.42istanbul.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:27:08 by hdemirel          #+#    #+#             */
/*   Updated: 2023/09/27 16:14:09 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Stack’lerden Bir Düğümü Silmek (pop)

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}					t_stack;

t_stack	*push(t_stack *top, int data) // Yeni bir düğüm oluşturup veriyi ekleyen Fonksiyon
{
	t_stack *tmp;

	tmp = (t_stack *)malloc(sizeof(t_stack));
	if (!tmp)
		return (0);

	tmp->data = data;
	tmp->next = top;
	top = tmp;
	return (top);
}

t_stack	*pop(t_stack *top) // Stack'ten eleman çıkaran fonksiyon
{
	if (top == NULL)
	{
		printf("Stack boş, eleman çıkarılamaz.\n");
		return (NULL);
	}

	t_stack *temp = top;
	top = top->next;
	free(temp);

	return (top);
}

void	printStack(t_stack *top) // Yazdırma Fonksiyonu
{
	while (top != NULL)
	{
		printf("%d\n", top->data);
		top = top->next;
	}
}

int	main(void)
{
	t_stack *top = NULL;

	top = push(top, 3);
	top = push(top, 6);
	top = push(top, 83);

	printStack(top);

	top = pop(top);
	printStack(top);
	// system("leaks a.out");  // Leaks kontrolü
}