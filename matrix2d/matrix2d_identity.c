/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix2d_identity.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:29:01 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:30:27 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix2d.h"

t_matrix2d	matrix2d_identity(void)
{
	t_matrix2d	result;

	result = (t_matrix2d){
		.x = (t_vec2){1, 0},
		.y = (t_vec2){0, 1}
	};
	return (result);
}
