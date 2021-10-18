#include "linked_list.h"

int main(void)
{
	item *head;

	head = create_head();

	insert_item(head, "hello");
	insert_item(head, "world");
	insert_item(head, "this");
	insert_item(head, "working?");

	free_item_index(head, 3);

	item *last = head;
	while (last->next != NULL)
	{
		last = last->next;
		printf("%s\n", (char *) last->data);
	}
	
	while (last->prev != NULL)
	{
		printf("%s\n", (char *) last->data);
		last = last->prev;
	}

	free_list(head);
}
