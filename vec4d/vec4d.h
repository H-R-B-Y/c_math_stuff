/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:47:44 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 21:28:15 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3D_H
# define VEC3D_H

# include <math.h>

#ifndef M_PI
# define M_PI 3.14159265358979323846
#endif

#ifndef MYFLOAT
# define MYFLOAT float
#endif

typedef struct s_vec4
{
	MYFLOAT x;
	MYFLOAT y;
	MYFLOAT z;
	MYFLOAT w;
}	t_vec4;


/**
 * @brief Calculate the magnitude (length) of a 4D vector.
 * @param vec Pointer to the 4D vector.
 * @return The magnitude of the vector.
 */
MYFLOAT	vec4_magnitude(t_vec4 *vec);

/**
 * @brief Calculate the dot product of two 4D vectors.
 * @param vec1 Pointer to the first 4D vector.
 * @param vec2 Pointer to the second 4D vector.
 * @return The dot product of the two vectors.
 */
MYFLOAT	vec4_dot_product(t_vec4 *vec1, t_vec4 *vec2);

/**
 * @brief Normalize a 4D vector (scale it to unit length).
 * @param vec Pointer to the 4D vector.
 * @return The normalized vector.
 */
t_vec4	vec4_normalise(t_vec4 *vec);

/**
 * @brief Add two 4D vectors.
 * @param vec1 Pointer to the first 4D vector.
 * @param vec2 Pointer to the second 4D vector.
 * @return The sum of the two vectors.
 */
t_vec4	vec4_add(t_vec4 *vec1, t_vec4 *vec2);

/**
 * @brief Subtract one 4D vector from another.
 * @param vec1 Pointer to the first 4D vector.
 * @param vec2 Pointer to the second 4D vector.
 * @return The result of subtracting `vec2` from `vec1`.
 */
t_vec4	vec4_sub(t_vec4 *vec1, t_vec4 *vec2);

/**
 * @brief Multiply a 4D vector by a scalar.
 * @param vec Pointer to the 4D vector.
 * @param scalar The scalar value.
 * @return The scaled vector.
 */
t_vec4	vec4_scalar_mult(t_vec4 *vec, MYFLOAT scalar);

/**
 * @brief Multiply two 4D vectors (component-wise multiplication).
 * @param vec1 Pointer to the first 4D vector.
 * @param vec2 Pointer to the second 4D vector.
 * @return The component-wise product of the two vectors.
 */
t_vec4	vec4_mult(t_vec4 *vec1, t_vec4 *vec2);

/**
 * @brief Compute the cross product of two 4D vectors.
 * @param vec1 Pointer to the first 4D vector.
 * @param vec2 Pointer to the second 4D vector.
 * @return The cross product vector (only the x, y, and z components are considered).
 */
t_vec4	vec4_cross(t_vec4 *vec1, t_vec4 *vec2);

/**
 * @brief Linearly interpolate between two 4D vectors.
 * @param vec1 Pointer to the first 4D vector.
 * @param vec2 Pointer to the second 4D vector.
 * @param t The interpolation factor (typically between 0 and 1).
 * @return The interpolated vector.
 */
t_vec4	vec4_lerp(t_vec4 *vec1, t_vec4 *vec2, MYFLOAT t);

/**
 * @brief Calculate the angle between two 4D vectors.
 * @param vec1 Pointer to the first 4D vector.
 * @param vec2 Pointer to the second 4D vector.
 * @return The angle between the vectors in radians.
 */
MYFLOAT	vec4_angle(t_vec4 *vec1, t_vec4 *vec2);

/**
 * @brief Clamp a 4D vector to a specified range.
 * @param vec Pointer to the 4D vector.
 * @param min Pointer to the minimum vector.
 * @param max Pointer to the maximum vector.
 * @return The clamped vector.
 */
t_vec4	vec4_clamp(t_vec4 *vec, t_vec4 *min, t_vec4 *max);

/**
 * @brief Compute the distance between two 4D vectors.
 * @param vec1 Pointer to the first 4D vector.
 * @param vec2 Pointer to the second 4D vector.
 * @return The distance between the two vectors.
 */
MYFLOAT	vec4_distance(t_vec4 *vec1, t_vec4 *vec2);

/**
 * @brief Project one 4D vector onto another 4D vector.
 * @param vec1 Pointer to the vector being projected.
 * @param vec2 Pointer to the vector onto which `vec1` is projected.
 * @return The projection of `vec1` onto `vec2`.
 */
t_vec4	vec4_project(t_vec4 *vec1, t_vec4 *vec2);

/**
 * @brief Reflect a 4D vector off a surface defined by a normal vector.
 * @param vec Pointer to the 4D vector to reflect.
 * @param normal Pointer to the normal vector of the surface.
 * @return The reflected vector.
 */
t_vec4	vec4_reflect(t_vec4 *vec, t_vec4 *normal);

/**
 * @brief Rotate a 4D vector by a given angle around a specified axis.
 * @param vec Pointer to the 4D vector to rotate.
 * @param axis Pointer to the 4D axis of rotation.
 * @param angle The angle of rotation in radians.
 * @return The rotated vector.
 * Note: The axis vector should be normalized before passing it to this function.
 * The rotation is performed using Rodrigues' rotation formula.
 * The w component of the vector is not affected by the rotation.
 */
t_vec4	vec4_rotate(t_vec4 *vec, t_vec4 *axis, MYFLOAT angle);

 
#endif