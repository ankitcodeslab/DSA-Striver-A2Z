int rows;
cout << "Enter number of rows for jagged array: ";
cin >> rows;

int** jagged = new int*[rows];
for (int i = 0; i < rows; i++) {
    int cols;
    cout << "Enter number of columns for row " << i << ": ";
    cin >> cols;
    jagged[i] = new int[cols];

    // Initialize
    for (int j = 0; j < cols; j++) {
        jagged[i][j] = i + j;
    }
}

// Print jagged array
cout << "Jagged Array:" << endl;
for (int i = 0; i < rows; i++) {
    for (int j = 0; jagged[i][j]; j++) {
        cout << jagged[i][j] << " ";
    }
    cout << endl;
}

// Free memory
for (int i = 0; i < rows; i++) {
    delete[] jagged[i];
}
delete[] jagged;
