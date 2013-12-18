/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheron <cheron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 15:10:34 by cheron            #+#    #+#             */
/*   Updated: 2013/12/15 16:51:30 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOT_RACE_H
# define HOT_RACE_H

# include <string.h>

# define BUFF_SIZE 256
# define TAB_SIZE 65537

typedef struct		s_btree
{
	char			*keyword;
	char			*value;
	struct s_btree	*left;
	struct s_btree	*right;
}					t_btree;

typedef struct		s_list
{
	char			*content;
	struct s_list	*next;
}					t_list;

int		ft_get_input(t_btree **hash_tab);
int		ft_create_tree(t_btree **root, char *keyword, char *value);
int		ft_get_query(t_btree **hash_tab);
void	ft_output_query(t_btree **hash_tab, char *query);

void	ft_del_htab(t_btree **hash_tab);
int		ft_place_tree(t_btree **hash_tab, char *keyword, char *value);
size_t	ft_hash(char *keyword);
void	ft_init_htab(t_btree **hash_tab);

int		get_next_line(int const fd, char **line);

char	*ft_strcpy(char *copy, const char *src);
char	*ft_strjoin(const char *s1, const char *s2);
void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);
char	*ft_strchr(const char *s, int c);
void	ft_strclr(char *s);
void	*ft_memmove(void *s1, const void *s2, size_t n);
int		ft_make_tree(t_btree **tree, char **keyword, char **value);
int		ft_get_search(t_list **lst);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_strdel(char **as);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
t_btree	*ft_new_node(char *keyword, char *value);
t_btree	*ft_place_node(t_btree *current, t_btree *new);
t_btree	*ft_search_node(t_btree *current, char *clue);
void	ft_swap_node(t_btree *dest, t_btree *src);
void	ft_del_tree(t_btree **current);
char	*ft_strnew(size_t size);
int		ft_buff_leftover(char *buff, char **line);
int		ft_join_move(char **line, char *buff, char *next_line, int nbread);
int		get_next_line(int const fd, char **line);

#endif
