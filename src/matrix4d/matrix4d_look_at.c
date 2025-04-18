/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix4d_look_at.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:32:46 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/16 21:13:12 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix4d.h"

t_matrix4d look_at(t_vec3 *eye, t_vec3 *center, t_vec3 *up)
{
	t_vec3	temp[3];
	t_vec3	f, r, u;

	f = vec3_sub(center, eye);
	f = vec3_normalise(&f);     // Forward
	r = vec3_cross_product(&f, up);
	r = normalize(&r);               // Right
	u = vec3_cross_product(&r, &f);                           // Recalculated up

	t_matrix4d result = matrix4d_identity();

	// Rotation part
	result.m[0][0] = r.x;
	result.m[0][1] = u.x;
	result.m[0][2] = -f.x;
	result.m[1][0] = r.y;
	result.m[1][1] = u.y;
	result.m[1][2] = -f.y;
	result.m[2][0] = r.z;
	result.m[2][1] = u.z;
	result.m[2][2] = -f.z;

	// Translation part
	result.m[0][3] = -vec3_dot_product(&r, eye);
	result.m[1][3] = -vec3_dot_product(&u, eye);
	result.m[2][3] = vec3_dot_product(&f, eye); // negative forward

	return (result);
}
