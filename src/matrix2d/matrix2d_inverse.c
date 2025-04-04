/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix2d_inverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:29:01 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:30:35 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix2d.h"

t_matrix2d	matrix2d_inverse(t_matrix2d *mat)
{
	t_matrix2d	result;
	MYFLOAT		det;

	if (!mat)
		return ((t_matrix2d){0});
	det = matrix2d_determinant(mat);
	if (det == 0)
		return (matrix2d_identity());
	result.x.x = mat->y.y / det;
	result.x.y = -mat->x.y / det;
	result.y.x = -mat->y.x / det;
	result.y.y = mat->x.x / det;
	return (result);
}
