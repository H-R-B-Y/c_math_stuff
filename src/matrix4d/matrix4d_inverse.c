/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix4d_inverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:32:46 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/04 12:45:53 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix4d.h"

t_matrix4d matrix4d_inverse(t_matrix4d *matrix)
{
	t_matrix4d inv;
	MYFLOAT det;

	det = matrix4d_determinant(matrix);
	if (det == 0.0f)
		return matrix4d_identity(); // No inverse if determinant is zero
	inv.x.x = vec4_minor(&matrix->y, &matrix->z, &matrix->w) / det;
	inv.x.y = -vec4_minor(&matrix->x, &matrix->z, &matrix->w) / det;
	inv.x.z = vec4_minor(&matrix->x, &matrix->y, &matrix->w) / det;
	inv.x.w = -vec4_minor(&matrix->x, &matrix->y, &matrix->z) / det;
	inv.y.x = -vec4_minor(&matrix->y, &matrix->z, &matrix->w) / det;
	inv.y.y = vec4_minor(&matrix->x, &matrix->z, &matrix->w) / det;
	inv.y.z = -vec4_minor(&matrix->x, &matrix->y, &matrix->w) / det;
	inv.y.w = vec4_minor(&matrix->x, &matrix->y, &matrix->z) / det;
	inv.z.x = vec4_minor(&matrix->y, &matrix->z, &matrix->w) / det;
	inv.z.y = -vec4_minor(&matrix->x, &matrix->z, &matrix->w) / det;
	inv.z.z = vec4_minor(&matrix->x, &matrix->y, &matrix->w) / det;
	inv.z.w = -vec4_minor(&matrix->x, &matrix->y, &matrix->z) / det;
	inv.w.x = -vec4_minor(&matrix->y, &matrix->z, &matrix->w) / det;
	inv.w.y = vec4_minor(&matrix->x, &matrix->z, &matrix->w) / det;
	inv.w.z = -vec4_minor(&matrix->x, &matrix->y, &matrix->w) / det;
	inv.w.w = vec4_minor(&matrix->x, &matrix->y, &matrix->z) / det;
	return (matrix4d_transpose(&inv)); // Adjugate is the transposed cofactor matrix
}

