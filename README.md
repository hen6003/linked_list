# Linked list

Basic linked list implementation

## How to use

Copy `include/linked_list.h` to your projects include folder to use

## Item members

* `data` void pointer to data
* `next` item pointer to next item in list
* `prev` item pointer to previous item in list

## Functions

- `item *get_last(item *head)`

Returns the last item in a list

- `item *get_first(item *head)`

Returns the first item in a list (the head)

- `item *get_index(item *head, int index)`

Returns the item at `index` position in the list

- `item *create_head()`

Creates a list head with no data, and returns it  
⚠️ Returned item must be freed

- `item *insert_item(item *head, void *data)`

Inserts an item to the end of the list  
⚠️ Returned item must be freed

- `void free_item(item *i)`

Frees a single item

- `void free_list(item *head)`

Frees an entire list

- `void free_item_index(item *head, int index)`

Frees a single item at `index` in a list, links surrounding items together
