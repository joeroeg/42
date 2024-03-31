#include "cub3d.h"

bool	can_read_file(const char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (false);
	close(fd);
	return (true);
}

bool	is_color_line(const char *line)
{
	if (ft_strncmp(line, "F ", 2) == 0 || \
		ft_strncmp(line, "C ", 2) == 0)
		return (true);
	return (false);
}

bool	is_texture_line(const char *line)
{
	if (ft_strncmp(line, "NO ", 3) == 0 || \
		ft_strncmp(line, "SO ", 3) == 0 || \
		ft_strncmp(line, "WE ", 3) == 0 || \
		ft_strncmp(line, "EA ", 3) == 0)
		return (true);
	return (false);
}
