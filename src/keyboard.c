
#include "fdf.h"
#include <stdlib.h>

int		hook_keydown(int key, t_mlx *mlx)
{
	(void)mlx;
	if (key == 53)
		exit(EXIT_SUCCESS);
	return (0);
}
