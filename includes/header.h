/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/21 16:14:42 by gpetrov           #+#    #+#             */
/*   Updated: 2014/01/22 20:24:41 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define P1 'O'
# define P2 'X'

# include "libft.h"

typedef struct		s_data
{
	char			*tmp;
	char			player;
	char			**map;
	char			**piece;
	int				size_x;
	int				size_y;
	int				piece_x;
	int				piece_y;
	int				move_x;
	int				move_y;
	int				offset_x;
	int				offset_y;
}					t_data;

typedef struct		s_list
{
	int				x;
	int				y;
	struct s_list	*next;
	/* struct s_list	*prev; */
}					t_list;

int		ft_check_line(char *line, char *str);
char	ft_set_player(char nb);
int		ft_save_map(t_data *d, char **line);
void	ft_print_map(char **map);
char	*ft_cpy_n(char *str, int nb);
void	ft_save_piece(t_data *d, char **line);
void	ft_save_size_piece(t_data *d, char *tmp);
int		ft_make_move(t_data *d);
t_list	*ft_make_list(t_data *d);
t_list	*ft_add_elem(t_list *list, int x, int y);
void	ft_count_offset(t_data *d);
int		ft_check_case(t_data *d, int x, int y);
void	ft_print_list(t_list *list);

#endif
