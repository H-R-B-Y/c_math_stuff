#ifndef MATRIX3D_H
#define MATRIX3D_H

#include "../vec3d/vec3d.h"  // Assuming you have vec3d operations in this header.

typedef struct s_matrix3d
{
	t_vec3 x;  // First row (x values)
	t_vec3 y;  // Second row (y values)
	t_vec3 z;  // Third row (z values)
}	t_matrix3d;

// Function declarations

/**
 * @brief Create an identity matrix (3x3).
 * @return The identity matrix.
 */
t_matrix3d	matrix3d_identity(void);

/**
 * @brief Multiply two 3D matrices.
 * @param m1 Pointer to the first matrix.
 * @param m2 Pointer to the second matrix.
 * @return The product of the two matrices.
 */
t_matrix3d	matrix3d_multiply(t_matrix3d *m1, t_matrix3d *m2);

/**
 * @brief Multiply a 3D matrix by a scalar.
 * @param mat Pointer to the matrix.
 * @param scalar The scalar value.
 * @return The scaled matrix.
 */
t_matrix3d	matrix3d_scalar_multiply(t_matrix3d *mat, MYFLOAT scalar);

/**
 * @brief Add two 3D matrices.
 * @param m1 Pointer to the first matrix.
 * @param m2 Pointer to the second matrix.
 * @return The sum of the two matrices.
 */
t_matrix3d	matrix3d_add(t_matrix3d *m1, t_matrix3d *m2);

/**
 * @brief Subtract one 3D matrix from another.
 * @param m1 Pointer to the first matrix.
 * @param m2 Pointer to the second matrix.
 * @return The result of the subtraction.
 */
t_matrix3d	matrix3d_subtract(t_matrix3d *m1, t_matrix3d *m2);

/**
 * @brief Transpose a 3D matrix.
 * @param mat Pointer to the matrix.
 * @return The transposed matrix.
 */
t_matrix3d	matrix3d_transpose(t_matrix3d *mat);

/**
 * @brief Determinant of a 3D matrix.
 * @param mat Pointer to the matrix.
 * @return The determinant of the matrix.
 */
MYFLOAT	matrix3d_determinant(t_matrix3d *mat);

/**
 * @brief Inverse of a 3D matrix.
 * @param mat Pointer to the matrix.
 * @return The inverse matrix, if it exists. Otherwise, returns a zero matrix.
 */
t_matrix3d	matrix3d_inverse(t_matrix3d *mat);

/**
 * @brief Apply a 3D matrix transformation to a 3D vector.
 * @param mat Pointer to the matrix.
 * @param vec Pointer to the vector.
 * @return The transformed vector.
 */
t_vec3	matrix3d_transform(t_matrix3d *mat, t_vec3 *vec);

/**
 * @brief Calculate the cross product of two 3D vectors (for matrix-related applications).
 * @param vec1 Pointer to the first vector.
 * @param vec2 Pointer to the second vector.
 * @return The cross product vector.
 */
t_vec3	matrix3d_cross_product(t_vec3 *vec1, t_vec3 *vec2);


#endif // MATRIX3D_H
