void doubling(int** arr, unsigned int N){
    int * new_array = new int [2 * N];
    for (int i = 0; i < N; i++){
        new_array[i] = (*arr)[i];
    }
    delete [] (*arr);
    *arr = new_array;
}