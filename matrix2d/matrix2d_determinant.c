/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix2d_determinant.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:29:01 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:29:41 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix2d.h"

MYFLOAT	matrix2d_determinant(t_matrix2d *mat)
{
	if (!mat)
		return (0);
	return (mat->x.x * mat->y.y - mat->x.y * mat->y.x);
}
