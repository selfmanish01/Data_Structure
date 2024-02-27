<<<<<<< HEAD
#include <iostream>

class Matrix
{
private:
    int rows;
    int cols;
    int **data;

public:
    // Constructor
    Matrix(int rows, int cols) : rows(rows), cols(cols)
    {
        data = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            data[i] = new int[cols];
        }
    }

    // Destructor
    ~Matrix()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] data[i];
        }
        delete[] data;
    }

    // Accessor for number of rows
    int getRows() const
    {
        return rows;
    }

    // Accessor for number of columns
    int getCols() const
    {
        return cols;
    }

    // Accessor for a specific element at (row, col)
    int &at(int row, int col)
    {
        return data[row][col];
    }

    // Addition of two matrices
    Matrix operator+(const Matrix &other) const
    {
        if (rows != other.rows || cols != other.cols)
        {
            throw std::invalid_argument("Matrices must have the same dimensions for addition.");
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    // Display the matrix
    void display() const
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main()
{
    // Example usage
    Matrix mat1(3, 3);
    Matrix mat2(3, 3);

    // Initialize the matrices
    int value = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat1.at(i, j) = value;
            mat2.at(i, j) = value * 2;
            value++;
        }
    }

    // Display the matrices
    std::cout << "Matrix 1:" << std::endl;
    mat1.display();
    std::cout << "Matrix 2:" << std::endl;
    mat2.display();

    // Perform matrix addition
    Matrix sum = mat1 + mat2;
    std::cout << "Sum Matrix:" << std::endl;
    sum.display();

    return 0;
};


=======
#include <iostream>

class Matrix
{
private:
    int rows;
    int cols;
    int **data;

public:
    // Constructor
    Matrix(int rows, int cols) : rows(rows), cols(cols)
    {
        data = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            data[i] = new int[cols];
        }
    }

    // Destructor
    ~Matrix()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] data[i];
        }
        delete[] data;
    }

    // Accessor for number of rows
    int getRows() const
    {
        return rows;
    }

    // Accessor for number of columns
    int getCols() const
    {
        return cols;
    }

    // Accessor for a specific element at (row, col)
    int &at(int row, int col)
    {
        return data[row][col];
    }

    // Addition of two matrices
    Matrix operator+(const Matrix &other) const
    {
        if (rows != other.rows || cols != other.cols)
        {
            throw std::invalid_argument("Matrices must have the same dimensions for addition.");
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    // Display the matrix
    void display() const
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main()
{
    // Example usage
    Matrix mat1(3, 3);
    Matrix mat2(3, 3);

    // Initialize the matrices
    int value = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat1.at(i, j) = value;
            mat2.at(i, j) = value * 2;
            value++;
        }
    }

    // Display the matrices
    std::cout << "Matrix 1:" << std::endl;
    mat1.display();
    std::cout << "Matrix 2:" << std::endl;
    mat2.display();

    // Perform matrix addition
    Matrix sum = mat1 + mat2;
    std::cout << "Sum Matrix:" << std::endl;
    sum.display();

    return 0;
};


>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
