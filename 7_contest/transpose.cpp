int** transpose(int** matrix, unsigned int N, unsigned int M){
    int** new_matrix = new int* [M];
    for (auto i = 0u; i < M; i++){
       new_matrix[i] = new int [N];
    }
    for (auto i = 0u; i < N; i++){
        for (auto j = 0u; j < M; j++){
            new_matrix[j][i] = matrix[i][j];
        }
    }
    return new_matrix;
}