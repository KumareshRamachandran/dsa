package Weekly405;

import java.util.Arrays;

public class Question3 {
    public static void main(String[] args) {
        System.out.println(numberOfSubmatrices(new char[][]{{'X', 'X'}, {'X', 'Y'}}));
    }
    public static int numberOfSubmatrices(char[][] grid) {
        int rows = grid.length;
        int cols = grid[0].length;
        int[][] preSumX = new int[rows + 1][cols + 1];
        int[][] preSumY = new int[rows + 1][cols + 1];
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= cols; j++) {
                preSumX[i][j] = preSumX[i - 1][j] + preSumX[i][j - 1] - preSumX[i - 1][j - 1] + (grid[i - 1][j - 1] == 'X' ? 1 : 0);
                preSumY[i][j] = preSumY[i - 1][j] + preSumY[i][j - 1] - preSumY[i - 1][j - 1] + (grid[i - 1][j - 1] == 'Y' ? 1 : 0);
            }
        }
        System.out.println(Arrays.deepToString(preSumX));
        System.out.println(Arrays.deepToString(preSumY));
        int count = 0;
        for (int r1 = 0; r1 < rows; r1++) {
            for (int r2 = r1; r2 < rows; r2++) {
                for (int c1 = 0; c1 < cols; c1++) {
                    for (int c2 = c1; c2 < cols; c2++) {
                        int xCount = preSumX[r2 + 1][c2 + 1] - preSumX[r1][c2 + 1] - preSumX[r2 + 1][c1] + preSumX[r1][c1];
                        int yCount = preSumY[r2 + 1][c2 + 1] - preSumY[r1][c2 + 1] - preSumY[r2 + 1][c1] + preSumY[r1][c1];
                        if (xCount == yCount && xCount > 0) {
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
}
