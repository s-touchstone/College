/* Steven Touchstone
 * Advanced Programming Language (Java)
 * Prof. Jalal Omer
 * Assignment 4 
 * 04/01/2020
 * Magic Squares
 * Input: 
 * Output:  
*/
// ****************************************************************
// SquareTest.java
// Uses the Square class to read in a square data and tell if it is magic or not.
// ****************************************************************
import java.util.Scanner;
public class SquareTest {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter the size of the square:");
		int size = scan.nextInt(); //size of next square
		Square sq = new Square(size);//create a new Square of the given size
		sq.readSquare(scan);//call its read method to read the values of the square
		sq.printSquare();//print the square
		for (int i = 0; i < size; i++)//print the sums of its rows
			System.out.printf("The sum of row %d is %d.\n", i + 1, sq.sumRow(i));
		for (int i = 0; i < size; i++)//print the sums of its columns
			System.out.printf("The sum of column %d is %d.\n", i + 1, sq.sumCol(i));
		System.out.printf("The sum of the main diagonal is %d.\n", sq.sumMainDiag());//print the sum of the main diagonal
		System.out.printf("The sum of the other diagonal is %d.\n", sq.sumOtherDiag());//print the sum of the other diagonal
		if (sq.magic())//determine and print whether it is a magic square
			System.out.println("This is a magic square!");
		else
			System.out.println("This is NOT a magic square!");
		}
}
