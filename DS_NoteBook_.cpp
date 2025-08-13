{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyNrbsqDzp1xqNiPyxgfTPBw",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/Ankit-TheCoder/Ankit-TheCoder/blob/main/DS_NoteBook_.cpp\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "markdown",
      "source": [
        "WAP to Add and Subtract 2 matrices using functional Programming"
      ],
      "metadata": {
        "id": "Nd5NN99wkxBs"
      }
    },
    {
      "cell_type": "code",
      "source": [
        "#include <iostream>\n",
        "using namespace std;\n",
        "\n",
        "void inputMatrix(int rows, int cols, int matrix[50][50]) {\n",
        "    cout << \"Enter elements of matrix (\" << rows << \" x \" << cols << \"):\\n\";\n",
        "    for (int i = 0; i < rows; i++)\n",
        "        for (int j = 0; j < cols; j++)\n",
        "            cin >> matrix[i][j];\n",
        "}\n",
        "\n",
        "void addMatrices(int rows, int cols, int a[50][50], int b[50][50], int result[50][50]) {\n",
        "    for (int i = 0; i < rows; i++)\n",
        "        for (int j = 0; j < cols; j++)\n",
        "            result[i][j] = a[i][j] + b[i][j];\n",
        "}\n",
        "\n",
        "void subtractMatrices(int rows, int cols, int a[50][50], int b[50][50], int result[50][50]) {\n",
        "    for (int i = 0; i < rows; i++)\n",
        "        for (int j = 0; j < cols; j++)\n",
        "            result[i][j] = a[i][j] - b[i][j];\n",
        "}\n",
        "\n",
        "void displayMatrix(int rows, int cols, int matrix[50][50]) {\n",
        "    for (int i = 0; i < rows; i++) {\n",
        "        for (int j = 0; j < cols; j++)\n",
        "            cout << matrix[i][j] << \"\\t\";\n",
        "        cout << endl;\n",
        "    }\n",
        "}\n",
        "\n",
        "int main() {\n",
        "    int rows, cols;\n",
        "    int matrix1[50][50], matrix2[50][50], sum[50][50], diff[50][50];\n",
        "\n",
        "    cout << \"Enter number of rows: \";\n",
        "    cin >> rows;\n",
        "    cout << \"Enter number of columns: \";\n",
        "    cin >> cols;\n",
        "\n",
        "    cout << \"Matrix 1:\\n\";\n",
        "    inputMatrix(rows, cols, matrix1);\n",
        "\n",
        "    cout << \"Matrix 2:\\n\";\n",
        "    inputMatrix(rows, cols, matrix2);\n",
        "\n",
        "    addMatrices(rows, cols, matrix1, matrix2, sum);\n",
        "    subtractMatrices(rows, cols, matrix1, matrix2, diff);\n",
        "\n",
        "    cout << \"\\nSum of matrices:\\n\";\n",
        "    displayMatrix(rows, cols, sum);\n",
        "\n",
        "    cout << \"\\nDifference of matrices (Matrix1 - Matrix2):\\n\";\n",
        "    displayMatrix(rows, cols, diff);\n",
        "\n",
        "    return 0;\n",
        "}\n"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/",
          "height": 106
        },
        "id": "TyfKyYegk11_",
        "outputId": "c6a28f48-8d70-4730-b1c2-d59eeaf10264"
      },
      "execution_count": 3,
      "outputs": [
        {
          "output_type": "error",
          "ename": "SyntaxError",
          "evalue": "invalid syntax (ipython-input-4035074861.py, line 2)",
          "traceback": [
            "\u001b[0;36m  File \u001b[0;32m\"/tmp/ipython-input-4035074861.py\"\u001b[0;36m, line \u001b[0;32m2\u001b[0m\n\u001b[0;31m    using namespace std;\u001b[0m\n\u001b[0m          ^\u001b[0m\n\u001b[0;31mSyntaxError\u001b[0m\u001b[0;31m:\u001b[0m invalid syntax\n"
          ]
        }
      ]
    },
    {
      "cell_type": "markdown",
      "source": [
        "WAP to Multiply 2 matrices using functional Programming"
      ],
      "metadata": {
        "id": "f-eier2ck5rH"
      }
    },
    {
      "cell_type": "code",
      "source": [
        "#include <iostream>\n",
        "using namespace std;\n",
        "\n",
        "void inputMatrix(int rows, int cols, int matrix[50][50]) {\n",
        "    cout << \"Enter elements of matrix (\" << rows << \" x \" << cols << \"):\\n\";\n",
        "    for (int i = 0; i < rows; i++)\n",
        "        for (int j = 0; j < cols; j++)\n",
        "            cin >> matrix[i][j];\n",
        "}\n",
        "\n",
        "void multiplyMatrices(int r1, int c1, int a[50][50], int r2, int c2, int b[50][50], int result[50][50]) {\n",
        "    for (int i = 0; i < r1; i++)\n",
        "        for (int j = 0; j < c2; j++) {\n",
        "            result[i][j] = 0;\n",
        "            for (int k = 0; k < c1; k++)\n",
        "                result[i][j] += a[i][k] * b[k][j];\n",
        "        }\n",
        "}\n",
        "\n",
        "void displayMatrix(int rows, int cols, int matrix[50][50]) {\n",
        "    for (int i = 0; i < rows; i++) {\n",
        "        for (int j = 0; j < cols; j++)\n",
        "            cout << matrix[i][j] << \"\\t\";\n",
        "        cout << endl;\n",
        "    }\n",
        "}\n",
        "\n",
        "int main() {\n",
        "    int r1, c1, r2, c2;\n",
        "    int matrix1[50][50], matrix2[50][50], product[50][50];\n",
        "\n",
        "    cout << \"Enter rows and columns of Matrix 1: \";\n",
        "    cin >> r1 >> c1;\n",
        "    cout << \"Enter rows and columns of Matrix 2: \";\n",
        "    cin >> r2 >> c2;\n",
        "\n",
        "    if (c1 != r2) {\n",
        "        cout << \"Matrix multiplication not possible. Columns of Matrix 1 must equal rows of Matrix 2.\";\n",
        "        return 0;\n",
        "    }\n",
        "\n",
        "    cout << \"Matrix 1:\\n\";\n",
        "    inputMatrix(r1, c1, matrix1);\n",
        "\n",
        "    cout << \"Matrix 2:\\n\";\n",
        "    inputMatrix(r2, c2, matrix2);\n",
        "\n",
        "    multiplyMatrices(r1, c1, matrix1, r2, c2, matrix2, product);\n",
        "\n",
        "    cout << \"\\nProduct of matrices:\\n\";\n",
        "    displayMatrix(r1, c2, product);\n",
        "\n",
        "    return 0;\n",
        "}\n"
      ],
      "metadata": {
        "id": "djDuJDzCk9ps"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "markdown",
      "source": [
        "Input a matrix, find if its a square matrix or not then find the sum of Diagonal Elements, Reverse Diagonal Elements, Corner Elements"
      ],
      "metadata": {
        "id": "o4I420BGlDj0"
      }
    },
    {
      "cell_type": "code",
      "source": [
        "#include <iostream>\n",
        "using namespace std;\n",
        "\n",
        "void inputMatrix(int rows, int cols, int matrix[50][50]) {\n",
        "    cout << \"Enter elements of matrix (\" << rows << \" x \" << cols << \"):\\n\";\n",
        "    for (int i = 0; i < rows; i++)\n",
        "        for (int j = 0; j < cols; j++)\n",
        "            cin >> matrix[i][j];\n",
        "}\n",
        "\n",
        "bool isSquareMatrix(int rows, int cols) {\n",
        "    return rows == cols;\n",
        "}\n",
        "\n",
        "int sumMainDiagonal(int n, int matrix[50][50]) {\n",
        "    int sum = 0;\n",
        "    for (int i = 0; i < n; i++)\n",
        "        sum += matrix[i][i];\n",
        "    return sum;\n",
        "}\n",
        "\n",
        "int sumReverseDiagonal(int n, int matrix[50][50]) {\n",
        "    int sum = 0;\n",
        "    for (int i = 0; i < n; i++)\n",
        "        sum += matrix[i][n - i - 1];\n",
        "    return sum;\n",
        "}\n",
        "\n",
        "int sumCornerElements(int rows, int cols, int matrix[50][50]) {\n",
        "    return matrix[0][0] + matrix[0][cols - 1] + matrix[rows - 1][0] + matrix[rows - 1][cols - 1];\n",
        "}\n",
        "\n",
        "int main() {\n",
        "    int rows, cols, matrix[50][50];\n",
        "\n",
        "    cout << \"Enter number of rows: \";\n",
        "    cin >> rows;\n",
        "    cout << \"Enter number of columns: \";\n",
        "    cin >> cols;\n",
        "\n",
        "    inputMatrix(rows, cols, matrix);\n",
        "\n",
        "    if (!isSquareMatrix(rows, cols)) {\n",
        "        cout << \"The matrix is NOT a square matrix.\\n\";\n",
        "        return 0;\n",
        "    }\n",
        "\n",
        "    cout << \"The matrix is a square matrix.\\n\";\n",
        "    cout << \"Sum of Main Diagonal Elements: \" << sumMainDiagonal(rows, matrix) << endl;\n",
        "    cout << \"Sum of Reverse Diagonal Elements: \" << sumReverseDiagonal(rows, matrix) << endl;\n",
        "    cout << \"Sum of Corner Elements: \" << sumCornerElements(rows, cols, matrix) << endl;\n",
        "\n",
        "    return 0;\n",
        "}\n"
      ],
      "metadata": {
        "id": "bdZwinFIlI4C"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "markdown",
      "source": [
        "Left Rotation"
      ],
      "metadata": {
        "id": "ONVmYMWhlMvF"
      }
    },
    {
      "cell_type": "code",
      "source": [
        "#include <iostream>\n",
        "using namespace std;\n",
        "\n",
        "void inputArray(int arr[], int n) {\n",
        "    cout << \"Enter \" << n << \" elements:\\n\";\n",
        "    for (int i = 0; i < n; i++)\n",
        "        cin >> arr[i];\n",
        "}\n",
        "\n",
        "void leftRotate(int arr[], int n, int d) {\n",
        "    d = d % n;\n",
        "    int temp[50];\n",
        "    for (int i = 0; i < d; i++)\n",
        "        temp[i] = arr[i];\n",
        "    for (int i = 0; i < n - d; i++)\n",
        "        arr[i] = arr[i + d];\n",
        "    for (int i = 0; i < d; i++)\n",
        "        arr[n - d + i] = temp[i];\n",
        "}\n",
        "\n",
        "void displayArray(int arr[], int n) {\n",
        "    for (int i = 0; i < n; i++)\n",
        "        cout << arr[i] << \" \";\n",
        "    cout << endl;\n",
        "}\n",
        "\n",
        "int main() {\n",
        "    int n, d, arr[50];\n",
        "\n",
        "    cout << \"Enter size of array: \";\n",
        "    cin >> n;\n",
        "\n",
        "    inputArray(arr, n);\n",
        "\n",
        "    cout << \"Enter number of left rotations: \";\n",
        "    cin >> d;\n",
        "\n",
        "    leftRotate(arr, n, d);\n",
        "\n",
        "    cout << \"Array after left rotation:\\n\";\n",
        "    displayArray(arr, n);\n",
        "\n",
        "    return 0;\n",
        "}\n"
      ],
      "metadata": {
        "id": "RuIo4mwnlT_F"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "markdown",
      "source": [
        "Row with maximum ones"
      ],
      "metadata": {
        "id": "FlXtfAh5lVbR"
      }
    },
    {
      "cell_type": "code",
      "source": [
        "#include <iostream>\n",
        "using namespace std;\n",
        "\n",
        "void inputMatrix(int rows, int cols, int matrix[50][50]) {\n",
        "    cout << \"Enter elements (0 or 1) of matrix (\" << rows << \" x \" << cols << \"):\\n\";\n",
        "    for (int i = 0; i < rows; i++)\n",
        "        for (int j = 0; j < cols; j++)\n",
        "            cin >> matrix[i][j];\n",
        "}\n",
        "\n",
        "int rowWithMaxOnes(int rows, int cols, int matrix[50][50]) {\n",
        "    int maxCount = 0, rowIndex = -1;\n",
        "    for (int i = 0; i < rows; i++) {\n",
        "        int count = 0;\n",
        "        for (int j = 0; j < cols; j++)\n",
        "            if (matrix[i][j] == 1)\n",
        "                count++;\n",
        "        if (count > maxCount) {\n",
        "            maxCount = count;\n",
        "            rowIndex = i;\n",
        "        }\n",
        "    }\n",
        "    return rowIndex;\n",
        "}\n",
        "\n",
        "int main() {\n",
        "    int rows, cols, matrix[50][50];\n",
        "\n",
        "    cout << \"Enter number of rows: \";\n",
        "    cin >> rows;\n",
        "    cout << \"Enter number of columns: \";\n",
        "    cin >> cols;\n",
        "\n",
        "    inputMatrix(rows, cols, matrix);\n",
        "\n",
        "    int result = rowWithMaxOnes(rows, cols, matrix);\n",
        "\n",
        "    if (result != -1)\n",
        "        cout << \"Row with maximum 1s: \" << result << \" (0-based index)\" << endl;\n",
        "    else\n",
        "        cout << \"No 1s found in the matrix.\" << endl;\n",
        "\n",
        "    return 0;\n",
        "}\n"
      ],
      "metadata": {
        "id": "NcVflo5SlhRl"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "markdown",
      "source": [
        "Check if matrix is a X-Matrix"
      ],
      "metadata": {
        "id": "szgTDTRhljJz"
      }
    },
    {
      "cell_type": "code",
      "source": [
        "#include <iostream>\n",
        "using namespace std;\n",
        "\n",
        "void inputMatrix(int n, int matrix[50][50]) {\n",
        "    cout << \"Enter elements of matrix (\" << n << \" x \" << n << \"):\\n\";\n",
        "    for (int i = 0; i < n; i++)\n",
        "        for (int j = 0; j < n; j++)\n",
        "            cin >> matrix[i][j];\n",
        "}\n",
        "\n",
        "bool isXMatrix(int n, int matrix[50][50]) {\n",
        "    for (int i = 0; i < n; i++) {\n",
        "        for (int j = 0; j < n; j++) {\n",
        "            if (i == j || i + j == n - 1) {\n",
        "                if (matrix[i][j] == 0)\n",
        "                    return false;\n",
        "            } else {\n",
        "                if (matrix[i][j] != 0)\n",
        "                    return false;\n",
        "            }\n",
        "        }\n",
        "    }\n",
        "    return true;\n",
        "}\n",
        "\n",
        "int main() {\n",
        "    int n, matrix[50][50];\n",
        "    cout << \"Enter size of square matrix: \";\n",
        "    cin >> n;\n",
        "\n",
        "    inputMatrix(n, matrix);\n",
        "\n",
        "    if (isXMatrix(n, matrix))\n",
        "        cout << \"The matrix IS an X-Matrix.\\n\";\n",
        "    else\n",
        "        cout << \"The matrix is NOT an X-Matrix.\\n\";\n",
        "\n",
        "    return 0;\n",
        "}\n"
      ],
      "metadata": {
        "id": "Mv7usoFemK3v"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "markdown",
      "source": [
        "Check if Every Row and Column Contains All Numbers"
      ],
      "metadata": {
        "id": "YdI6KFublwzK"
      }
    },
    {
      "cell_type": "code",
      "source": [
        "#include <iostream>\n",
        "using namespace std;\n",
        "\n",
        "void inputMatrix(int n, int matrix[50][50]) {\n",
        "    cout << \"Enter elements of matrix (\" << n << \" x \" << n << \"):\\n\";\n",
        "    for (int i = 0; i < n; i++)\n",
        "        for (int j = 0; j < n; j++)\n",
        "            cin >> matrix[i][j];\n",
        "}\n",
        "\n",
        "bool containsAllNumbers(int arr[], int n) {\n",
        "    bool present[51] = {false};\n",
        "    for (int i = 0; i < n; i++) {\n",
        "        if (arr[i] < 1 || arr[i] > n)\n",
        "            return false;\n",
        "        present[arr[i]] = true;\n",
        "    }\n",
        "    for (int i = 1; i <= n; i++)\n",
        "        if (!present[i])\n",
        "            return false;\n",
        "    return true;\n",
        "}\n",
        "\n",
        "bool checkMatrix(int n, int matrix[50][50]) {\n",
        "    int temp[50];\n",
        "\n",
        "    for (int i = 0; i < n; i++) {\n",
        "        for (int j = 0; j < n; j++)\n",
        "            temp[j] = matrix[i][j];\n",
        "        if (!containsAllNumbers(temp, n))\n",
        "            return false;\n",
        "    }\n",
        "\n",
        "    for (int j = 0; j < n; j++) {\n",
        "        for (int i = 0; i < n; i++)\n",
        "            temp[i] = matrix[i][j];\n",
        "        if (!containsAllNumbers(temp, n))\n",
        "            return false;\n",
        "    }\n",
        "\n",
        "    return true;\n",
        "}\n",
        "\n",
        "int main() {\n",
        "    int n, matrix[50][50];\n",
        "    cout << \"Enter size of square matrix: \";\n",
        "    cin >> n;\n",
        "\n",
        "    inputMatrix(n, matrix);\n",
        "\n",
        "    if (checkMatrix(n, matrix))\n",
        "        cout << \"Yes, every row and column contains all numbers from 1 to \" << n << \".\\n\";\n",
        "    else\n",
        "        cout << \"No, the matrix does not satisfy the condition.\\n\";\n",
        "\n",
        "    return 0;\n",
        "}\n"
      ],
      "metadata": {
        "id": "FzjtA1jolxmp"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "markdown",
      "source": [
        "Convert 1D Array Into 2D Array"
      ],
      "metadata": {
        "id": "6JaHNfnNl0j_"
      }
    },
    {
      "cell_type": "code",
      "source": [
        "#include <iostream>\n",
        "using namespace std;\n",
        "\n",
        "void input1DArray(int arr[], int size) {\n",
        "    cout << \"Enter \" << size << \" elements:\\n\";\n",
        "    for (int i = 0; i < size; i++)\n",
        "        cin >> arr[i];\n",
        "}\n",
        "\n",
        "void convertTo2D(int arr[], int rows, int cols, int matrix[50][50]) {\n",
        "    int k = 0;\n",
        "    for (int i = 0; i < rows; i++)\n",
        "        for (int j = 0; j < cols; j++)\n",
        "            matrix[i][j] = arr[k++];\n",
        "}\n",
        "\n",
        "void display2DArray(int rows, int cols, int matrix[50][50]) {\n",
        "    cout << \"2D Array:\\n\";\n",
        "    for (int i = 0; i < rows; i++) {\n",
        "        for (int j = 0; j < cols; j++)\n",
        "            cout << matrix[i][j] << \"\\t\";\n",
        "        cout << endl;\n",
        "    }\n",
        "}\n",
        "\n",
        "int main() {\n",
        "    int rows, cols, arr[250], matrix[50][50];\n",
        "\n",
        "    cout << \"Enter number of rows: \";\n",
        "    cin >> rows;\n",
        "    cout << \"Enter number of columns: \";\n",
        "    cin >> cols;\n",
        "\n",
        "    int size = rows * cols;\n",
        "    input1DArray(arr, size);\n",
        "\n",
        "    convertTo2D(arr, rows, cols, matrix);\n",
        "    display2DArray(rows, cols, matrix);\n",
        "\n",
        "    return 0;\n",
        "}\n"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/",
          "height": 106
        },
        "id": "YHzHwXw8l6XC",
        "outputId": "8ce354fb-39eb-463c-e4b7-98c678afb40d"
      },
      "execution_count": 2,
      "outputs": [
        {
          "output_type": "error",
          "ename": "SyntaxError",
          "evalue": "invalid syntax (ipython-input-3537647054.py, line 2)",
          "traceback": [
            "\u001b[0;36m  File \u001b[0;32m\"/tmp/ipython-input-3537647054.py\"\u001b[0;36m, line \u001b[0;32m2\u001b[0m\n\u001b[0;31m    using namespace std;\u001b[0m\n\u001b[0m          ^\u001b[0m\n\u001b[0;31mSyntaxError\u001b[0m\u001b[0;31m:\u001b[0m invalid syntax\n"
          ]
        }
      ]
    }
  ]
}