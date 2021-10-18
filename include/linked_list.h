#include <malloc.h>

//=== Definitions ===
typedef struct item
{
	void *data;
	struct item *next;
	struct item *prev;
} item;

//=== Get items ===
// Get last item in the list
item *get_last(item *head)
{
	item *last = head;

	while (last->next != NULL)
		last = last->next;

	return last;
}

// First last item in the list
item *get_first(item *head)
{
	item *first = head;

	while (first->prev != NULL)
		first = first->prev;

	return first;
}

//=== Insert ===
// Start a list
item *create_head()
{
	item *i = malloc(sizeof(struct item));
	
	i->data = 0;
	i->next = NULL;
	i->prev = NULL;

	return i;
}

// Insert item to the end of a list
item *insert_item(item *head, void *data)
{
	item *last = get_last(head);

	item *i = malloc(sizeof(struct item));

	i->next = NULL;	
	i->data = data;
	i->prev = last;
	last->next = i;

	return i;
}


//=== Free ===
// Free a single item
void free_item(item *i)
{
	free(i);
}

// Free an entire list
void free_list(item *head)
{
	item *last = get_last(head);
	item *next = head;

	while (next->prev != NULL)
	{
		next = next->prev;
		free(next);
	}
}

//=== Data ===
// Returns data if exists at position, else NULL
void *get_data(item *head, int index)
{
	item *i = head;

	for (int n = 0; n < index; n++)
	{
		if (i->next == NULL)
			return NULL;

		i = i->next;
	}

	return i->data;
}
