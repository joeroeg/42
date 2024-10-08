/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhukov <hezhukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 21:36:14 by gcrepin           #+#    #+#             */
/*   Updated: 2024/04/11 13:18:51 by hezhukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "MLX42.h"
# include "libft.h"
# include <fcntl.h>
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include <ctype.h>
# include <errno.h>
# include <stdbool.h>

# define MALLOC_ERROR "Error when allocating memory on the heap"
# define FAILURE 1
# define SUCCESS 0
# define MAX_PATH_LENGTH 255
# define MAX_MAP_WIDTH  100
# define MAX_MAP_HEIGHT 100
# define WINDOW_WIDTH 1600
# define WINDOW_HEIGHT 1000
# define EMPTY '0'
# define FILLED '2'
# define WALL '1'

typedef struct s_mblock
{
	void			*address;
	int				fd;
	struct s_mblock	*next;
}	t_mblock;

typedef enum e_direction
{
	NORTH,
	SOUTH,
	EAST,
	WEST
}	t_direction;

typedef struct s_config
{
	char	north_texture[MAX_PATH_LENGTH];
	char	south_texture[MAX_PATH_LENGTH];
	char	east_texture[MAX_PATH_LENGTH];
	char	west_texture[MAX_PATH_LENGTH];
	int		floor_color_r;
	int		floor_color_g;
	int		floor_color_b;
	int		ceiling_color_r;
	int		ceiling_color_g;
	int		ceiling_color_b;
}	t_config;

typedef struct s_entity
{
	double	x;
	double	y;
	double	dir_x;
	double	dir_y;
	int		vel_x;
	int		vel_y;
}	t_entity;

typedef struct s_render
{
	mlx_t			*mlx;
	mlx_image_t		*screen;
	mlx_texture_t	*textures[4];
	int				i;
}	t_render;

typedef struct s_cub
{
	char		*file;
	t_mblock	*memory;
	t_config	config;
	char		map[MAX_MAP_HEIGHT][MAX_MAP_WIDTH + 1];
	int			map_height;
	t_entity	player;
	t_render	render;
	int			map_width;
	char		player_direction;
	int			player_x;
	int			player_y;
	int			map_found;
}	t_cub;

// Memory management
t_mblock	*garbage_collector(void);
void		*gc_malloc(size_t size);
void		gc_free(void *address);
void		gc_free_all(void);
int			gc_open(const char *pathname, int flags, mode_t mode);
char		*ft_strjoin_gc(char *s1, char *s2);
void		clear_mlx(t_render *cmlx);
t_cub		*get_cub(void);

// Validation
void		validate_map_file(t_cub *data);
int			check_extension(const char *filename, \
			const char *valid_extensions[], int num_extensions);
int			check_empty_file(int fd);

// Utilities
void		exit_error_message(char *message, int should_exit);
int			get_next_line(int fd, char **line);
char		*trim_space(const char *str);
int			prepare_file_descriptor(const char *file_path);

// Parsing configuration
void		parse_map_parameters(t_cub *data);
void		parse_parameters_loop(t_cub *data, int *parsed_parameters);
void		parse_parameter(t_cub *data, \
			char *trimmed_line, int *parsed_parameters);
void		validate_all_parameters_set(int parsed_parameters);

// Parsing texture
void		parse_texture(t_cub *data, \
			const char *line, int *parsed_parameters);
bool		is_texture_line(const char *line);
void		validate_all_texture_paths_exist(const t_config *config);
bool		can_read_file(const char *path);
void		validate_extension(const char *path);
char		*trim_and_validate_path(const char *path);
void		set_north_texture(t_cub *data, \
			const char *path, int *parsed_parameters);
void		set_south_texture(t_cub *data, \
			const char *path, int *parsed_parameters);
void		set_west_texture(t_cub *data, \
			const char *path, int *parsed_parameters);
void		set_east_texture(t_cub *data, \
			const char *path, int *parsed_parameters);

// Parsing color
void		parse_color(t_cub *data, char *line, \
			char color_type, int *parsed_parameters);
bool		is_color_line(char *line);

// Parsing map
void		parse_map(t_cub *data);
void		free_and_reset_line(char **line);
int			is_line_empty_or_whitespace(const char *line);
bool		is_line_valid(const char *line);
void		initialize_map_parsing(t_cub *data, \
			int *line_number, int *map_found, int *found_spaces);
void		finalize_map_parsing(t_cub *data, int line_number);

// Validate map
void		validate_map_playability(t_cub *data);
bool		validate_single_start_position(t_cub *data);
bool		is_player_position_valid(t_cub *data);
bool		find_player_position(t_cub *data);
bool		is_boundary(t_cub *data, int x, int y);
bool		flood(t_cub *data, int x, int y);

// Rendering
void		mlx_load(t_cub *data);
void		mlx_render(void *data);
double		delta_time(bool update);

// Player
void		load_player(t_cub *data);

#endif
