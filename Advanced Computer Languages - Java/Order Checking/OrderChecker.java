/* Steven Touchstone
 * Advanced Programming Language (Java)
 * Prof. Jalal Omer
 * Assignment 1 
 * 01/23/2020
 * Order Checker
 * Input: Number of bolts, nuts, and washers
 * Output: Status of order and Total cost */

import java.util.Scanner;

public class OrderChecker{
	public static void main(String[] a) {
		Scanner inp = new Scanner(System.in);
		final int boltPrice = 5;
		final int nutPrice = 3;
		final int washerPrice = 1;
		int bolts, nuts, washers;
		System.out.print("Number of bolts: ");
		bolts = inp.nextInt();
		System.out.print("\nNumber of nuts: ");
		nuts = inp.nextInt();
		System.out.print("\nNumber of washers: ");
		washers = inp.nextInt();
		inp.close(); // To correct Warning
		// Check if there are at least as many nuts as bolts
		if(nuts < bolts)
			System.out.println("\nCheck the Order: too few nuts");
		// Check if there are  at least twice as many washers as bolts
		else if(washers / 2 < bolts)
			System.out.println("\nCheck the Order: too few washers");
		else
			System.out.println("\nOrder is OK");
		System.out.printf("\nTotal cost: %d\n", (bolts * boltPrice) + (nuts * nutPrice) + (washers * washerPrice));
	}
}