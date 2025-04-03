/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix4d_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:54:59 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 21:55:05 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix4d.h"

void	matrix4d_print(t_matrix4d *matrix)
{
	printf("Matrix 4x4:\n");
	printf("[ %f, %f, %f, %f ]\n", matrix->x.x, matrix->x.y, matrix->x.z, matrix->x.w);
	printf("[ %f, %f, %f, %f ]\n", matrix->y.x, matrix->y.y, matrix->y.z, matrix->y.w);
	printf("[ %f, %f, %f, %f ]\n", matrix->z.x, matrix->z.y, matrix->z.z, matrix->z.w);
	printf("[ %f, %f, %f, %f ]\n", matrix->w.x, matrix->w.y, matrix->w.z, matrix->w.w);
}