/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix4d_transform.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:56:31 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 21:56:53 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix4d.h"

t_vec4	matrix4d_transform(t_matrix4d *matrix, t_vec4 *vec)
{
	t_vec4	result;

	result.x = matrix->x.x * vec->x + matrix->y.x
		* vec->y + matrix->z.x * vec->z + matrix->w.x * vec->w;
	result.y = matrix->x.y * vec->x + matrix->y.y
		* vec->y + matrix->z.y * vec->z + matrix->w.y * vec->w;
	result.z = matrix->x.z * vec->x + matrix->y.z
		* vec->y + matrix->z.z * vec->z + matrix->w.z * vec->w;
	result.w = matrix->x.w * vec->x + matrix->y.w
		* vec->y + matrix->z.w * vec->z + matrix->w.w * vec->w;
	return (result);
}
