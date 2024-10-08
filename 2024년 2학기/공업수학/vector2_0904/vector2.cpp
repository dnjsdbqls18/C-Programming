#include <iostream>
#include <vector>

using namespace std;

// 행렬 출력 함수
void printMatrix(const vector<vector<int>>& matrix) 
{
    for (const auto& row : matrix) 
    {
        for (int elem : row) 
        {
            cout << elem << " ";
        }
        cout << endl;
    }
}

// 행렬 덧셈 함수
vector<vector<int>> addMatrix(const vector<vector<int>>& A, const vector<vector<int>>& C) 
{
    int m = A.size();    // A의 행 수
    int n = A[0].size(); // A의 열 수

    vector<vector<int>> result(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            result[i][j] = A[i][j] + C[i][j];
        }
    }

    return result;
}

// 행렬 뺄셈 함수
vector<vector<int>> subtractMatrix(const vector<vector<int>>& A, const vector<vector<int>>& C) 
{
    int m = A.size();    // A의 행 수
    int n = A[0].size(); // A의 열 수

    vector<vector<int>> result(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            result[i][j] = A[i][j] - C[i][j];
        }
    }

    return result;
}

// 행렬 곱셈 함수
vector<vector<int>> multiplyMatrix(const vector<vector<int>>& A, const vector<vector<int>>& C) 
{
    int m = A.size();    // A의 행 수
    int n = A[0].size(); // A의 열 수 (C의 행 수)
    int p = C[0].size(); // C의 열 수

    // 결과 행렬 초기화
    vector<vector<int>> result(m, vector<int>(p, 0));

    // 행렬 곱셈 수행
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < p; j++) 
        {
            for (int k = 0; k < n; k++) 
            {
                result[i][j] += A[i][k] * C[k][j];
            }
        }
    }
    return result;
}

// 행렬 전치 함수
vector<vector<int>> transposeMatrix(const vector<vector<int>>& A) 
{
    int m = A.size();    // A의 행 수
    int n = A[0].size(); // A의 열 수

    vector<vector<int>> result(n, vector<int>(m, 0));

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            result[j][i] = A[i][j];
        }
    }

    return result;
}

// 3x3 행렬식 계산 함수
double determinant_3x3(const vector<vector<int>>& D) 
{
    double deter = 0.0;
    int m = D.size();    // D의 행 수
    int n = D[0].size(); // D의 열 수

    if ((m != 3) || (n != 3)) 
    {
        cout << "3x3 행렬이 아닙니다." << endl;
        return 0.0;
    }

    // 행렬식 계산
    deter = D[0][0] * (D[1][1] * D[2][2] - D[1][2] * D[2][1])
          - D[0][1] * (D[1][0] * D[2][2] - D[1][2] * D[2][0])
          + D[0][2] * (D[1][0] * D[2][1] - D[1][1] * D[2][0]);

    return deter;
}

int main() 
{
    // 행렬 A 정의
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // 행렬 B 정의 (곱셈에 사용)
    vector<vector<int>> B = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    // 행렬 C 정의
    vector<vector<int>> C = {
        {7, 8, 9},
        {10, 11, 12}
    };
    
    // 행렬 D 정의 (3x3 행렬)
    vector<vector<int>> D = {
        {3, 1, 1},
        {1, 2, 1},
        {1, 1, 2}
    };

    // A와 C의 행과 열 출력
    int mA = A.size();
    int nA = A[0].size();

    int mB = B.size();
    int nB = B[0].size();

    int mC = C.size();
    int nC = C[0].size();
    
    int mD = D.size();
    int nD = D[0].size();

    printf("Row number of A : %3d\n", mA);
    printf("Column number of A : %3d\n\n", nA);

    printf("Row number of B : %3d\n", mB);
    printf("Column number of B : %3d\n\n", nB);

    printf("Row number of C : %3d\n", mC);
    printf("Column number of C : %3d\n\n", nC);
    
    printf("Row number of D : %3d\n", mD);
    printf("Column number of D : %3d\n\n", nD);

    // 행렬 덧셈
    vector<vector<int>> addResult = addMatrix(A, C);
    cout << "Matrix A + C:" << endl;
    printMatrix(addResult);
    cout << endl;

    // 행렬 뺄셈
    vector<vector<int>> subtractResult = subtractMatrix(A, C);
    cout << "Matrix A - C:" << endl;
    printMatrix(subtractResult);
    cout << endl;

    // 행렬 곱셈
    vector<vector<int>> multiplyResult = multiplyMatrix(A, B);
    cout << "Matrix A * B:" << endl;
    printMatrix(multiplyResult);
    cout << endl;

    // 행렬 전치
    vector<vector<int>> transposeResult = transposeMatrix(A);
    cout << "Transpose of Matrix A:" << endl;
    printMatrix(transposeResult);
    cout << endl;

    // 3x3 행렬 D의 행렬식 계산
    double detD = determinant_3x3(D);
    cout << "Determinant of Matrix D: " << detD << endl;

    return 0;
}
