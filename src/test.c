#include "linked_list.h"

int main(void)
{
	item *head;

	head = create_head();

	insert_item(head, "hello");
	insert_item(head, "test");

	char *p = get_data(head, 3);

	printf("%s\n", p);

	free_list(head);
}
