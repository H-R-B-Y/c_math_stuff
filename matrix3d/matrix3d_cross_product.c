/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix3d_cross_product.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:35:27 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:35:51 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix3d.h"

t_matrix3d	matrix3d_cross_product(t_matrix3d *mat1, t_matrix3d *mat2)
{
	t_matrix3d	result;

	if (!mat1 || !mat2)
		return ((t_matrix3d){0});
	result.x.x = mat1->y.y * mat2->z.z - mat1->y.z * mat2->z.y;
	result.x.y = mat1->y.z * mat2->z.x - mat1->y.x * mat2->z.z;
	result.x.z = mat1->y.x * mat2->z.y - mat1->y.y * mat2->z.x;
	result.y.x = mat1->z.y * mat2->x.z - mat1->z.z * mat2->x.y;
	result.y.y = mat1->z.z * mat2->x.x - mat1->z.x * mat2->x.z;
	result.y.z = mat1->z.x * mat2->x.y - mat1->z.y * mat2->x.x;
	result.z.x = mat1->x.y * mat2->y.z - mat1->x.z * mat2->y.y;
	result.z.y = mat1->x.z * mat2->y.x - mat1->x.x * mat2->y.z;
	result.z.z = mat1->x.x * mat2->y.y - mat1->x.y * mat2->y.x;
	return (result);
}
