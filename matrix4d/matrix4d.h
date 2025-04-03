#ifndef MATRIX4D_H
#define MATRIX4D_H

#include "../vec4d/vec4d.h" // Include your 4D vector header here

// Matrix 4D struct definition
typedef struct s_matrix4d {
	t_vec4 x;  // First row
	t_vec4 y;  // Second row
	t_vec4 z;  // Third row
	t_vec4 w;  // Fourth row
}	t_matrix4d;

/**
 * @brief Identity matrix for 4D space.
 * @return A 4D identity matrix (1s on the diagonal, 0s elsewhere).
 */
t_matrix4d	matrix4d_identity(void);

/**
 * @brief Multiply two 4D matrices.
 * @param m1 Pointer to the first matrix.
 * @param m2 Pointer to the second matrix.
 * @return The resulting matrix after multiplication.
 */
t_matrix4d	matrix4d_multiply(t_matrix4d *m1, t_matrix4d *m2);

/**
 * @brief Multiply a 4D matrix by a scalar.
 * @param m Pointer to the matrix.
 * @param scalar The scalar value.
 * @return The scaled matrix.
 */
t_matrix4d	matrix4d_scalar_multiply(t_matrix4d *m, MYFLOAT scalar);

/**
 * @brief Transpose a 4D matrix.
 * @param m Pointer to the matrix.
 * @return The transposed matrix.
 */
t_matrix4d	matrix4d_transpose(t_matrix4d *m);

/**
 * @brief Calculate the determinant of a 4D matrix.
 * @param m Pointer to the matrix.
 * @return The determinant of the matrix.
 */
MYFLOAT	matrix4d_determinant(t_matrix4d *m);

/**
 * @brief Calculate the inverse of a 4D matrix.
 * @param m Pointer to the matrix.
 * @return The inverse of the matrix, or an identity matrix if it's not invertible.
 */
t_matrix4d	matrix4d_inverse(t_matrix4d *m);

/**
 * @brief Create a translation matrix for 4D space.
 * @param x Translation along the x-axis.
 * @param y Translation along the y-axis.
 * @param z Translation along the z-axis.
 * @param w Translation along the w-axis.
 * @return A 4D translation matrix.
 */
t_matrix4d	matrix4d_translation(MYFLOAT x, MYFLOAT y, MYFLOAT z, MYFLOAT w);

/**
 * @brief Create a scaling matrix for 4D space.
 * @param x Scaling factor along the x-axis.
 * @param y Scaling factor along the y-axis.
 * @param z Scaling factor along the z-axis.
 * @param w Scaling factor along the w-axis.
 * @return A 4D scaling matrix.
 */
t_matrix4d	matrix4d_scaling(MYFLOAT x, MYFLOAT y, MYFLOAT z, MYFLOAT w);

/**
 * @brief Create a rotation matrix for rotating around the x-axis in 4D space.
 * @param angle The rotation angle in radians.
 * @return A 4D rotation matrix for rotating around the x-axis.
 */
t_matrix4d	matrix4d_rotate_x(MYFLOAT angle);

/**
 * @brief Create a rotation matrix for rotating around the y-axis in 4D space.
 * @param angle The rotation angle in radians.
 * @return A 4D rotation matrix for rotating around the y-axis.
 */
t_matrix4d	matrix4d_rotate_y(MYFLOAT angle);

/**
 * @brief Create a rotation matrix for rotating around the z-axis in 4D space.
 * @param angle The rotation angle in radians.
 * @return A 4D rotation matrix for rotating around the z-axis.
 */
t_matrix4d	matrix4d_rotate_z(MYFLOAT angle);

/**
 * @brief Apply a 4D matrix transformation to a 4D vector.
 * @param m Pointer to the matrix.
 * @param v Pointer to the 4D vector.
 * @return The transformed 4D vector.
 */
t_vec4	matrix4d_transform(t_matrix4d *m, t_vec4 *v);

/**
 * @brief Calculate the minor of a 4D matrix.
 * @param v1 Pointer to the first vector (row).
 * @param v2 Pointer to the second vector (row).
 * @param v3 Pointer to the third vector (row).
 * @return The minor of the matrix formed by the three vectors.
 */
MYFLOAT	matrix4d_minor(t_vec4 *v1, t_vec4 *v2, t_vec4 *v3);

/**
 * @brief Print a 4D matrix for debugging purposes.
 * @param m Pointer to the matrix.
 */
void	matrix4d_print(t_matrix4d *m);

#endif // MATRIX4D_H
