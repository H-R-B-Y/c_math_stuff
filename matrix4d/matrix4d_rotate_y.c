/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix4d_rotate_y.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:55:22 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 21:55:26 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix4d.h"

t_matrix4d	matrix4d_rotate_y(MYFLOAT angle)
{
	t_matrix4d	matrix;
	MYFLOAT		cos_angle;
	MYFLOAT		sin_angle;

	cos_angle = cosf(angle);
	sin_angle = sinf(angle);
	matrix.x = (t_vec4){cos_angle, 0.0f, sin_angle, 0.0f};
	matrix.y = (t_vec4){0.0f, 1.0f, 0.0f, 0.0f};
	matrix.z = (t_vec4){-sin_angle, 0.0f, cos_angle, 0.0f};
	matrix.w = (t_vec4){0.0f, 0.0f, 0.0f, 1.0f};
	return (matrix);
}
