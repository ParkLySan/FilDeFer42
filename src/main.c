/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 19:10:06 by litoulza          #+#    #+#             */
/*   Updated: 2018/04/16 19:11:58 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft.h"
#include "mlx.h"
#include <fcntl.h>
#include <stdlib.h>

int		die(char *reason)
{
	ft_putendl(reason);
	return (1);
}

int		main(int argc, char **argv)
{
	t_map	*map;
	t_mlx	*mlx;
	int		fd;

	if (argc < 2)
		return (die("error: not enough arguments"));
	fd = open(argv[1], O_RDONLY);
	if (fd < 0 || !read_file(fd, &map))
		return (die("error: invalid file"));
	if ((mlx = init(ft_strjoin("FdF - ", argv[1]))) == NULL)
		return (die("error: mlx couldn't init"));
	mlx->map = map;
	render(mlx);
	mlx_key_hook(mlx->window, hook_keydown, mlx);
	mlx_hook(mlx->window, 4, 0, hook_mousedown, mlx);
	mlx_hook(mlx->window, 5, 0, hook_mouseup, mlx);
	mlx_hook(mlx->window, 6, 0, hook_mousemove, mlx);
	mlx_loop(mlx->mlx);
	return (0);
}
