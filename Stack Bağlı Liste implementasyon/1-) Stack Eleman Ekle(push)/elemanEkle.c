/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elemanEkle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <student.42istanbul.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:16:04 by hdemirel          #+#    #+#             */
/*   Updated: 2023/09/27 16:16:02 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Stack’lere Yeni Bir Düğüm Eklemek (push)

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}					t_stack;

t_stack	*push(t_stack *top, int newdata) // Yeni bir düğüm oluşturup veriyi ekleyen Fonksiyon
{
	t_stack *tmp;

	tmp = (t_stack *)malloc(sizeof(t_stack));
	if (!tmp)
		return (0);

	tmp->data = newdata;
	tmp->next = top;
	top = tmp;
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
	// t_stack *top = malloc(sizeof(t_stack)); // Yanlış kullanım
	t_stack *top = NULL;
	/*
		"malloc" işlemi bellek alanını temizlemez ve bu nedenle bellek alanında
		rastgele değerler olabilir. "*top = NULL;" kullanılmadığında,top işaretçisi
		bellekteki rastgele bir adresi gösterebilir. Bu adres, daha önce başka bir 
		uygulama veya işlem tarafından kullanılmış ve sonra serbest bırakılmış olabilir.
		Dolayısıyla, bu adresin içeriği tahmin edilemezdir ve bu nedenle "0" veya başka
		bir rastgele değer görünebilir. "t_stack *top = NULL;" kullanarak, top işaretçisini
		başlangıçta boş bir değere (NULL) ayarlayarak, bellek içeriğinin belirgin bir şekilde
		başladığını ve başlangıçta hiçbir elemanın olmadığını belirtirsiniz. Ayrıca leaks
		hatasıyla karşılaşırız.

		Doğru kullanım "t_stack *top = NULL;"
	*/
	top = push(top, 3);
	top = push(top, 6);
	top = push(top, 83);

	printStack(top);
	system("leaks a.out");
}