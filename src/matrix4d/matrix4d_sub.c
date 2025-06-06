/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix4d_subtract.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:32:46 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/04 13:31:12 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix4d.h"

t_matrix4d	matrix4d_sub(t_matrix4d *a, t_matrix4d *b)
{
	t_matrix4d	result;

	result.x = vec4_sub(&a->x, &b->x);
	result.y = vec4_sub(&a->y, &b->y);
	result.z = vec4_sub(&a->z, &b->z);
	result.w = vec4_sub(&a->w, &b->w);
	return (result);
}
