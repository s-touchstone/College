// ****************************************************************
// Square.java
// Define a Square class with methods to create and read in
// info for a square matrix and to compute the sum of a row,
// a col, either diagonal, and whether it is magic.
// ****************************************************************
import java.util.Scanner;
public class Square {
	int[][] square;
	//create new square of given size
	public Square(int size) {
		square = new int[size][size];
	}
	//return the sum of the values in the given row
	public int sumRow(int row) {
		int sum = 0;
		for (int col = 0; col < square.length; col++)
			sum += square[row][col];
		return sum;
	}
	//return the sum of the values in the given column
	public int sumCol(int col) {
		int sum = 0;
		for (int row = 0; row < square.length; row++)
			sum += square[row][col];
		return sum;
	}
	//return the sum of the values in the main diagonal
	public int sumMainDiag() {
		int sum = 0;
		for (int i = 0; i < square.length; i++)
			sum += square[i][i];
		return sum;
	}
	//return the sum of the values in the other ("reverse") diagonal
	public int sumOtherDiag() {
		int sum = 0;
		int j = square.length - 1;
		for (int i = 0; i < square.length; i++) {
			sum += square[i][j];
			j--;
		}
		return sum;
	}
	//return true if the square is magic (all rows, cols, and diags have
	//same sum), false otherwise
	public boolean magic() {
		int basenum = sumMainDiag();
		for (int i = 0; i < square.length; i++) {
			int num = sumRow(i);
			if (num != basenum)
				return false;
		}
		for (int i = 0; i < square.length; i++) {
			int num = sumCol(i);
			if (num != basenum)
				return false;
		}
		if (basenum != sumOtherDiag())
			return false;
		else
			return true;
	}
	//read info into the square from the standard input.
	public void readSquare(Scanner scan) {
		for (int row = 0; row < square.length; row++) {
			System.out.printf("Enter the values of row %d of the square:", row + 1);
			for (int col = 0; col < square.length; col++)
				square[row][col] = scan.nextInt();
		}
	}
	//print the contents of the square, neatly formatted
	public void printSquare() {
		System.out.print("***Square***");
		for (int row = 0; row < square.length; row++) {
			System.out.println();
			for (int col = 0; col < square.length; col++)
				System.out.printf(" %3d", square[row][col]);
		}
		System.out.println();
	}
}
