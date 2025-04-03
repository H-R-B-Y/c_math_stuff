/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix4d_multiply.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:52:13 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 21:54:52 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix4d.h"

t_matrix4d	matrix4d_multiply(t_matrix4d *a, t_matrix4d *b)
{
	t_matrix4d	result;

	result.x.x = a->x.x * b->x.x + a->y.x * b->x.y + a->z.x * b->x.z + a->w.x * b->x.w;
	result.x.y = a->x.x * b->y.x + a->y.x * b->y.y + a->z.x * b->y.z + a->w.x * b->y.w;
	result.x.z = a->x.x * b->z.x + a->y.x * b->z.y + a->z.x * b->z.z + a->w.x * b->z.w;
	result.x.w = a->x.x * b->w.x + a->y.x * b->w.y + a->z.x * b->w.z + a->w.x * b->w.w;
	result.y.x = a->x.y * b->x.x + a->y.y * b->x.y + a->z.y * b->x.z + a->w.y * b->x.w;
	result.y.y = a->x.y * b->y.x + a->y.y * b->y.y + a->z.y * b->y.z + a->w.y * b->y.w;
	result.y.z = a->x.y * b->z.x + a->y.y * b->z.y + a->z.y * b->z.z + a->w.y * b->z.w;
	result.y.w = a->x.y * b->w.x + a->y.y * b->w.y + a->z.y * b->w.z + a->w.y * b->w.w;
	result.z.x = a->x.z * b->x.x + a->y.z * b->x.y + a->z.z * b->x.z + a->w.z * b->x.w;
	result.z.y = a->x.z * b->y.x + a->y.z * b->y.y + a->z.z * b->y.z + a->w.z * b->y.w;
	result.z.z = a->x.z * b->z.x + a->y.z * b->z.y + a->z.z * b->z.z + a->w.z * b->z.w;
	result.z.w = a->x.z * b->w.x + a->y.z * b->w.y + a->z.z * b->w.z + a->w.z * b->w.w;
	result.w.x = a->x.w * b->x.x + a->y.w * b->x.y + a->z.w * b->x.z + a->w.w * b->x.w;
	result.w.y = a->x.w * b->y.x + a->y.w * b->y.y + a->z.w * b->y.z + a->w.w * b->y.w;
	result.w.z = a->x.w * b->z.x + a->y.w * b->z.y + a->z.w * b->z.z + a->w.w * b->z.w;
	result.w.w = a->x.w * b->w.x + a->y.w * b->w.y + a->z.w * b->w.z + a->w.w * b->w.w;
	return (result);
}
