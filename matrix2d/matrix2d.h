/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix2d.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:27:25 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 21:18:42 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX2D_H
#define MATRIX2D_H

#include "../vec2d/vec2d.h"  // Assuming you have vec2d operations in this header.

typedef struct s_matrix2d
{
	t_vec2 x;  // First row (x values)
	t_vec2 y;  // Second row (y values)
} t_matrix2d;

// Function declarations

/**
 * @brief Create an identity matrix (2x2).
 * @return The identity matrix.
 */
t_matrix2d	matrix2d_identity(void);

/**
 * @brief Multiply two 2D matrices.
 * @param m1 Pointer to the first matrix.
 * @param m2 Pointer to the second matrix.
 * @return The product of the two matrices.
 */
t_matrix2d	matrix2d_multiply(t_matrix2d *m1, t_matrix2d *m2);

/**
 * @brief Multiply a 2D matrix by a scalar.
 * @param mat Pointer to the matrix.
 * @param scalar The scalar value.
 * @return The scaled matrix.
 */
t_matrix2d	matrix2d_scalar_multiply(t_matrix2d *mat, MYFLOAT scalar);

/**
 * @brief Add two 2D matrices.
 * @param m1 Pointer to the first matrix.
 * @param m2 Pointer to the second matrix.
 * @return The sum of the two matrices.
 */
t_matrix2d	matrix2d_add(t_matrix2d *m1, t_matrix2d *m2);

/**
 * @brief Subtract one 2D matrix from another.
 * @param m1 Pointer to the first matrix.
 * @param m2 Pointer to the second matrix.
 * @return The result of the subtraction.
 */
t_matrix2d	matrix2d_subtract(t_matrix2d *m1, t_matrix2d *m2);

/**
 * @brief Transpose a 2D matrix.
 * @param mat Pointer to the matrix.
 * @return The transposed matrix.
 */
t_matrix2d	matrix2d_transpose(t_matrix2d *mat);

/**
 * @brief Determinant of a 2D matrix.
 * @param mat Pointer to the matrix.
 * @return The determinant of the matrix.
 */
MYFLOAT	matrix2d_determinant(t_matrix2d *mat);

/**
 * @brief Inverse of a 2D matrix.
 * @param mat Pointer to the matrix.
 * @return The inverse matrix, if it exists. Otherwise, returns a zero matrix.
 */
t_matrix2d	matrix2d_inverse(t_matrix2d *mat);

/**
 * @brief Apply a 2D matrix transformation to a 2D vector.
 * @param mat Pointer to the matrix.
 * @param vec Pointer to the vector.
 * @return The transformed vector.
 */
t_vec2	matrix2d_transform(t_matrix2d *mat, t_vec2 *vec);




#endif // MATRIX2D_H