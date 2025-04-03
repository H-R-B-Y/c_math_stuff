/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix2d_transpose.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:29:01 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:31:52 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix2d.h"

t_matrix2d	matrix2d_transpose(t_matrix2d *mat)
{
	t_matrix2d	result;

	if (!mat)
		return ((t_matrix2d){0});
	result.x.x = mat->x.x;
	result.x.y = mat->y.x;
	result.y.x = mat->x.y;
	result.y.y = mat->y.y;
	return (result);
}
