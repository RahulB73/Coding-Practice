// Spiral traversing of the matrix

import java.util.Scanner;
import java.util.ArrayList;

class Main {
    
    static void spiralPrint(int[][] matrix, int rows, int columns) {
        int dir = 0;
        int top = 0;
        int bottom = rows - 1;
        int left = 0;
        int right = columns - 1;
        ArrayList<Integer> vector = new ArrayList<Integer>();

        while (top <= bottom && left <= right) {
            if (dir == 0) {
                for (int i = left; i <= right; i++) {
                    vector.add(matrix[top][i]);
                }
                top++;
            } else if (dir == 1) {
                for (int i = top; i <= bottom; i++) {
                    vector.add(matrix[i][right]);
                }
                right--;
            } else if (dir == 2) {
                for (int i = right; i >= left; i--) {
                    vector.add(matrix[bottom][i]);
                }
                bottom--;
            } else if (dir == 3) {
                for (int i = bottom; i >= top; i--) {
                    vector.add(matrix[i][left]);
                }
                left++;
            }
            dir = (dir + 1) % 4;
        }

        for (Integer i : vector) {
            System.out.print(i + " ");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of rows : ");
        int rows = sc.nextInt();

        System.out.println("Enter the number of columns : ");
        int columns = sc.nextInt();

        int[][] matrix = new int[rows][columns];

        System.out.println("Enter the elements of the matrix : ");

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        spiralPrint(matrix, rows, columns);
    }
}
