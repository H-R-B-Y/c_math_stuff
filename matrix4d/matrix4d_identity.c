/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix4d_identity.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:32:46 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 21:36:16 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix4d.h"

t_matrix4d	matrix4d_identity(void)
{
	t_matrix4d	matrix;

	matrix.x = (t_vec4){1.0f, 0.0f, 0.0f, 0.0f};
	matrix.y = (t_vec4){0.0f, 1.0f, 0.0f, 0.0f};
	matrix.z = (t_vec4){0.0f, 0.0f, 1.0f, 0.0f};
	matrix.w = (t_vec4){0.0f, 0.0f, 0.0f, 1.0f};
	return (matrix);
}
