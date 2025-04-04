/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix2d_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:29:01 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:29:22 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix2d.h"

t_matrix2d	matrix2d_add(t_matrix2d *mat1, t_matrix2d *mat2)
{
	t_matrix2d	result;

	if (!mat1 || !mat2)
		return ((t_matrix2d){0});
	result.x = vec2_add(&mat1->x, &mat2->x);
	result.y = vec2_add(&mat1->y, &mat2->y);
	return (result);
}
