/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix2d_scalar_multiply.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:29:01 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:30:53 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix2d.h"

t_matrix2d	matrix2d_scalar_multiply(t_matrix2d *mat, MYFLOAT scalar)
{
	t_matrix2d	result;

	if (!mat)
		return ((t_matrix2d){0});
	result.x.x = mat->x.x * scalar;
	result.x.y = mat->x.y * scalar;
	result.y.x = mat->y.x * scalar;
	result.y.y = mat->y.y * scalar;
	return (result);
}
