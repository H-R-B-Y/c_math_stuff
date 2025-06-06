/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix4d_translation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:56:56 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/09 14:33:59 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix4d.h"

t_matrix4d matrix4d_translation(MYFLOAT x, MYFLOAT y, MYFLOAT z, MYFLOAT w)
{
	t_matrix4d matrix;

	matrix.x = (t_vec4){1.0f, 0.0f, 0.0f, 0.0f};
	matrix.y = (t_vec4){0.0f, 1.0f, 0.0f, 0.0f};
	matrix.z = (t_vec4){0.0f, 0.0f, 1.0f, 0.0f};
	matrix.w = (t_vec4){x, y, z, w};  // <--- assumes column-major: this is the translation
	return (matrix);
}

