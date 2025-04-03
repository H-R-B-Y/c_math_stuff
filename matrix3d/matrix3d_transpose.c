/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix3d_transpose.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:35:27 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:38:25 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix3d.h"

t_matrix3d	matrix3d_transpose(t_matrix3d *mat)
{
	t_matrix3d	result;

	if (!mat)
		return ((t_matrix3d){0});
	result.x.x = mat->x.x;
	result.x.y = mat->y.x;
	result.x.z = mat->z.x;
	result.y.x = mat->x.y;
	result.y.y = mat->y.y;
	result.y.z = mat->z.y;
	result.z.x = mat->x.z;
	result.z.y = mat->y.z;
	result.z.z = mat->z.z;
	return (result);
}
