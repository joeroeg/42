/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_colors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhukov <hezhukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:34:50 by hezhukov          #+#    #+#             */
/*   Updated: 2024/04/10 17:35:00 by hezhukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	is_string_numeric(const char *str)
{
	if (!*str)
		return (false);
	while (*str)
	{
		if (!isdigit((unsigned char)*str))
			return (false);
		str++;
	}
	return (true);
}

void	set_color(t_cub *data, const int rgb[3], char color_type)
{
	if (color_type == 'F')
	{
		data->config.floor_color_r = rgb[0];
		data->config.floor_color_g = rgb[1];
		data->config.floor_color_b = rgb[2];
	}
	else if (color_type == 'C')
	{
		data->config.ceiling_color_r = rgb[0];
		data->config.ceiling_color_g = rgb[1];
		data->config.ceiling_color_b = rgb[2];
	}
}

void	remove_spaces(char *str)
{
	char	*src;
	char	*dst;

	src = str;
	dst = str;
	while (*src)
	{
		if (!ft_isspace((unsigned char)*src))
			*dst++ = *src;
		src++;
	}
	*dst = '\0';
}

int	parse_rgb_values(char *line, int *rgb)
{
	char	*token;
	int		i;
	int		value;

	remove_spaces(line + 2);
	token = ft_strtok((char *)line + 2, ",");
	i = 0;
	while (token != NULL)
	{
		value = ft_atoi(token);
		if (value < 0 || value > 255 || !is_string_numeric(token))
			exit_error_message("Error: Invalid color range or non-numeric", \
			EXIT_FAILURE);
		rgb[i++] = value;
		token = ft_strtok(NULL, ",");
	}
	if (i != 3 || ft_strtok(NULL, ",") != NULL)
		exit_error_message("Error: Invalid num of color param were specified.", \
		EXIT_FAILURE);
	return (true);
}

void	parse_color(t_cub *data, char *line, \
	char color_type, int *parsed_parameters)
{
	int		rgb[3];

	parse_rgb_values(line, rgb);
	(*parsed_parameters)++;
	set_color(data, rgb, color_type);
}
