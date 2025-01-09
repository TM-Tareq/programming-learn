int m, n;
    scanf("%d%d", &n, &m);

    int matrix[n][m];

    // for taking input
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // for column swapping
    for(int i = 0; i < n; i++) {
        // for(int j = 0; j < m; j++) {
            // if(j == 0 || j == m - 1) {
                int temp = matrix[i][0];
                matrix[i][0] = matrix[i][m - 1];
                matrix[i][m - 1] = temp;
            // }
        // }
    }

    // for row swapping
    for(int i = 0; i < n; i++) {
        // for(int j = 0; j < m; j++) {
        //     if(i == 0 || i == n - 1) {
                int temp = matrix[0][j];
                matrix[0][j] = matrix[n - 1][j];
                matrix[n - 1][j] = temp;
            // }
        // }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }