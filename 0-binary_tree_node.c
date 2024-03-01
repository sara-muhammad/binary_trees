#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
* binary_tree_node: function that creates a binary tree node
* parent: pointer to the parent node of the node to create
* value:  value to put in the new node
* Return: a pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *born = malloc(sizeof(binary_tree_t));

    if (born == NULL)
        return NULL;
    born->value = value;
    born->parent = parent;
    born->left = NULL;
    born->right = NULL;
    return(born);
}