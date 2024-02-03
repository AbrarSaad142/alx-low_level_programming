#include "hash_tables.h"

/**
* hash_table_get - a fnction that retrieves a value associated with a key.
* @ht:  is the hash table you want to add or update the key/value to
* @key: is the key
* Return: the value associated with the element, or NULL
* if key couldn’t be found.
*/


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
    {
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);


	current = ht->array[index];
	while (current != NULL)
	{

		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}
