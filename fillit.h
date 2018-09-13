#ifndef FILLIT_H
#define FILLIT_H
#define BASE_SIZE 20
#include "libft.h"

typedef struct s_point
{
	int x;
	int y;
} t_point;

typedef struct s_etris
{
	char **pos;
	char value;
	int width;
	int height;
} t_etris;

typedef struct s_map
{
	int size;
	char **array;
} t_map;

t_list *read_tetri(int fd);
t_etris *get_piece(char *str, char value);
void ft_min_max(char *str, t_point *min, t_point *max);
int check_connection(char *str);
int check_counts(char *str, int count);

t_list *free_list(t_list *list);
void free_tetris(t_etris *tetri);
t_etris *tetris_new(char **pos, int width, int height, char value);
t_point *new_size(int x, int y);

void free_map(t_map *map);
void print_map(t_map *map);
t_map *map_new(int size);
int place(t_etris *tetri, t_map *map, int w, int h);
void set_piece(t_etris *tetri, t_map *map, t_point *dot, char c);

int ft_solve_map(t_map *map, t_list *list);
int high_sqrt(int n);
t_map *solve_map(t_list *list);

#endif
