class Question1 {
    int[][] grid;
    int n;
    public Question1(int[][] grid) {
        this.grid = grid;
        n = grid.length;
    }

    public int adjacentSum(int value) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if(grid[i][j]==value){
                    if(j-1>=0) sum += grid[i][j-1];
                    if(i-1>=0) sum += grid[i-1][j];
                    if(i+1<n) sum += grid[i+1][j];
                    if(j+1<n) sum += grid[i][j+1];
                    break;
                }
            }
        }
        return sum;
    }

    public int diagonalSum(int value) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if(grid[i][j]==value){
                    if(j-1>=0 && i-1>=0) sum += grid[i-1][j-1];
                    if(i-1>=0 && j+1<n) sum += grid[i-1][j+1];
                    if(i+1<n && j-1>=0) sum += grid[i+1][j-1];
                    if(j+1<n && i+1<n) sum += grid[i+1][j+1];
                    break;
                }
            }
        }
        return sum;
    }
}