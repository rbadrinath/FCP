import random
import time

size = 10 
rows_a =rows_b=cols_a=cols_b=size
result_matrix = [[0 for _ in range(cols_b)] for _ in range(rows_a)]

def multiply_matrices_pure_python(matrix_a, matrix_b):
    """Multiplies two matrices using pure Python lists."""

    for i in range(rows_a):
        for j in range(cols_b):
            for k in range(cols_a):
                result_matrix[i][j] += matrix_a[i][k] * matrix_b[k][j]
    return result_matrix

# Generate two sizexsize matrices with random values
matrix1 = [[random.randint(1, 100) for _ in range(size)] for _ in range(size)]
matrix2 = [[random.randint(1, 100) for _ in range(size)] for _ in range(size)]

# Time the core computation
start_time = time.perf_counter()
result_pure_python = multiply_matrices_pure_python(matrix1, matrix2)
end_time = time.perf_counter()

print(f"Time taken for pure Python matrix multiplication: {end_time - start_time:.6f} seconds")
