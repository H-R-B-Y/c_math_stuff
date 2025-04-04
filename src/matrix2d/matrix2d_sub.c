/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix2d_sub.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:29:01 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/04 13:32:27 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix2d.h"

t_matrix2d	matrix2d_sub(t_matrix2d *mat1, t_matrix2d *mat2)
{
	t_matrix2d	result;

	if (!mat1 || !mat2)
		return ((t_matrix2d){0});
	result.x = vec2_sub(&mat1->x, &mat2->x);
	result.y = vec2_sub(&mat1->y, &mat2->y);
	return (result);
}
