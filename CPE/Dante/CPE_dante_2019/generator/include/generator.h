/*
** EPITECH PROJECT, 2020
** generator.h
** File description:
** generator header file
*/

#ifndef GENE_H
#define GENE_H

typedef struct {
    char **buffer;
    char **visited;
    int width;
    int height;
} map_t;

typedef struct {
    int x;
    int y;
} pos_t;

typedef struct node {
    pos_t *pos;
    struct node *next;
    struct node *prev;
} node_t;

// hub function used to generate and print the maze
int generate(unsigned x, unsigned y, bool perfect);

// frees a map structure
void mapt_destroy(map_t *map);
// prints a map's buffer
void mapt_print(map_t *map);
// true if all of the maps nodes have been visited, false overwise
bool mapt_is_filled(map_t *map);
// draws '*' on the buffer between two positions
map_t *mapt_trace(pos_t *pos1, pos_t *pos2, map_t *map);
// creates a new empty map structure
map_t *mapt_create_empty(unsigned x, unsigned y);

// appends a (pos) position structure to the list starting by (start)
// the (pos) structure will be copied into the list
void list_append(node_t *start, pos_t *pos);
// frees a list starting by (start)
void list_destroy(node_t *start);
// removes the last node of the list and returns the previous node's pos
// structure
pos_t *list_trackback(node_t *start);
// initialises a list with (pos) structure as it's first node
// returns a (start) node
node_t *list_init(pos_t *pos);

// given a (map) and a (pos) structure, returns a (pos) structure
// representing a free cell
pos_t *post_get_free_cell(pos_t *pos, map_t *map);
#endif
