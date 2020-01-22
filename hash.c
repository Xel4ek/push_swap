/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:19:27 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 15:19:29 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <limits.h>
#include "stdlib.h"

//unsigned int ft_hash(const char *string)
//{
//	unsigned int  hash;
//
//	hash = 0;
//	if(string)
//		while (*string)
//			hash = hash * 13 + *string++ - 32 + 1;
//	return hash % 4096;
//}


int test(t_list *a, t_list *b){
	return ((t_ps_content*)(a->content))->value - ((t_ps_content*)(b->content))->value;

}

void ft_add_queue(t_list **queue, t_list *list, t_list *buff){
	t_ps_string *item;
	int len1;
	int len2;


	item = (t_ps_string*) malloc(sizeof(t_ps_string));
	item->queue = (char*)malloc(sizeof(char)*MAX_QUEUE_SIZE);
	item->queue[0] = '+';
	item->queue[1] = 0;
	item->last = -1;
	item->string  = ft_lstd_to_array(list, buff, (len1 = ft_lstdlen(list)), (len2 = ft_lstdlen(buff)));
	item->size = len1 + len2 + 1;
	ft_lstd_push_back(queue, ft_lstdnew(item, sizeof(*item)));
	ft_memdel((void**)&(item));
}





int main()
{
//	unsigned int temp = ~((unsigned int)(~0)>>1);
//	unsigned int hash;
//	unsigned int i = 0;
//
//		hash = ft_hash("2 124 3 123 / 23");
//hash = HashPJW("asdlkasdkasdk ajsldja lskjdkla sjdlaks jdlkasj123123123 12 dlkajsd ljasld jaslkjd laksjd alksjdlakjsdlasj lasjdl ajlksdjkl");
//	while (i++ < 10)
//	printf("%d\n", ('0' + i ) - 32+1);
//	printf("%d\n", (' ') - 32+1);
//	printf("%d\n", ('/') - 32+1);
//	printf("%u\n", hash);

//	char str[] = "27 20 5  2 16 11  28 13 24 19 23 14 6 8  0 -1";
//	t_list *list = NULL;
//	list = ft_strsplit_to_lstd(str);
//	ft_lstditer(list, &ft_lstprint);
//	ft_merge_sort_by(&list, &test);
//	ft_circle(&list);
//	printf("!---------------------\n");
//	ft_lstditer(list, &ft_lstprint);

	t_list *list;
	t_list *buff;
	t_list *queue = NULL;

//	int tab[] = {27, 20, 5 , 2, 16, 11 , 28 ,13, 24, 19, 23, 14, 6, 8 , 0, -1};
//	printf("result: %d\n", ft_sort_ratio(tab, sizeof(tab)/sizeof(int  )));
//	int tab2[] = {27, 20, 2 , 5, 16, 11 , 28 ,13, 24, 19, 23, 14, 6, 8 , 0, -1};
//	printf("result: %d\n", ft_sort_ratio(tab2, sizeof(tab2)/sizeof(int  )));
//	int tab3[] = {27, 20, 5 , 16, 11 , 28 ,13, 24, 19, 23, 14, 6, 8 , 0, -1};
//	printf("result: %d\n", ft_sort_ratio(tab3, sizeof(tab2)/sizeof(int  )));
//	int tab4[] = {27, 5 , 11, 13,  19, 23, -1};
//	printf("result: %d\n", ft_sort_ratio(tab4, sizeof(tab2)/sizeof(int  )));




	int i;

	list = ft_strsplit_to_lstd("27 20 5  2 16 11  28 13 24 19 23 14 6 8 0");
	const int size = ft_lstdlen(list);
	i = size;
	while (i--)
	{
		((t_ps_content *) list->content)->serial =  ((t_ps_content *) list->content)->value;
		list = list->next;
	}
	buff = NULL;

	ft_add_queue(&queue, list, buff);

	list = ft_strsplit_to_lstd("27 5 20 2 16 11  28 13 24 19 23 14 6 8 0");
	i = size;
	while (i--)
	{
		((t_ps_content *) list->content)->serial =  ((t_ps_content *) list->content)->value;
		list = list->next;
	}

	ft_add_queue(&queue, list, buff);

	list = ft_strsplit_to_lstd("27 20 5 2 16 11  13 28 24 19 23 14 6 8 0");
	i = size;
	while (i--)
	{
		((t_ps_content *) list->content)->serial =  ((t_ps_content *) list->content)->value;
		list = list->next;
	}

	ft_add_queue(&queue, list, buff);


	list = ft_strsplit_to_lstd("27 5 20 2 16 11 28 24 13 19 23 14 6 8 0");
	i = size;
	while (i--)
	{
		((t_ps_content *) list->content)->serial =  ((t_ps_content *) list->content)->value;
		list = list->next;
	}

	ft_add_queue(&queue, list, buff);



	list = ft_strsplit_to_lstd("27 5 11 13 19 23");
	i = 6;
	while (i--)
	{
		((t_ps_content *) list->content)->serial =  ((t_ps_content *) list->content)->value;
		list = list->next;
	}

	ft_add_queue(&queue, list, buff);

	ft_lstditer(queue, &ft_lstprint5);

	printf("!------------------------------------------\n");

	queue->prev->next = NULL;
	ft_queue_sort(&queue);
	ft_circle(&queue);
	ft_lstditer(queue, &ft_lstprint5);

	printf("!------------------------------------------\n");
	ft_lstditer(list, &ft_lstprint);
	return 0;
}
