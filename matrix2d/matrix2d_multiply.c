/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix2d_multiply.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:29:01 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:30:46 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix2d.h"

t_matrix2d	matrix2d_multiply(t_matrix2d *mat1, t_matrix2d *mat2)
{
	t_matrix2d	result;

	if (!mat1 || !mat2)
		return ((t_matrix2d){0});
	result.x.x = mat1->x.x * mat2->x.x + mat1->x.y * mat2->y.x;
	result.x.y = mat1->x.x * mat2->x.y + mat1->x.y * mat2->y.y;
	result.y.x = mat1->y.x * mat2->x.x + mat1->y.y * mat2->y.x;
	result.y.y = mat1->y.x * mat2->x.y + mat1->y.y * mat2->y.y;
	return (result);
}
