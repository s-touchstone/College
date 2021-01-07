/* Steven Touchstone
 * Advanced Programming Language (Java)
 * Prof. Jalal Omer
 * Assignment 2 
 * 02/20/2020
 * 
 * Clock manipulation demonstrations
 * Input1: integer representing seconds after midnight
 * Input2: 3 integers representing hours, minutes, and seconds
 * Output: Various clock states */

import java.util.Scanner;

public class ClockDemo{
	public static void main(String[] args) {
		
		Clock firstClock = new Clock();
		Clock secondClock = new Clock();
		Clock thirdClock = new Clock();
		Scanner input = new Scanner(System.in);
		int temp;
		
		System.out.print("Set first clock (# of seconds): ");
		firstClock.setClock(input.nextInt());
		System.out.println("First Clock: " + firstClock.toString());
		for (int i = 1; i <= 10; i++) {
			firstClock.tick();
			System.out.println("First clock: " + firstClock.toString());
		}
		System.out.print("Set second clock (# of hours, minutes, seconds):\nSet hours: ");
		temp = input.nextInt();
		while (temp > 23) {
			System.out.print("Too high, hours should be (0 - 23): ");
			temp = input.nextInt();
		}
		secondClock.setHours(temp);
		System.out.print("Set Minutes: ");
		temp = input.nextInt();
		while (temp > 59) {
			System.out.print("Too high, minutes should be (0 - 59): ");
			temp = input.nextInt();
		}
		secondClock.setMinutes(temp);
		System.out.print("Set Seconds: ");
		temp = input.nextInt();
		while (temp > 59) {
			System.out.print("Too high, seconds should be (0 - 59): ");
			temp = input.nextInt();
		}
		secondClock.setSeconds(temp);
		System.out.println("Second Clock: " + secondClock.toString());
		for (int i = 1; i <= 10; i++) {
			secondClock.tick();
			System.out.println("Second clock: " + secondClock.toString());
		}
		System.out.print(firstClock.toString() + " + " + secondClock.toString() + " = ");
		firstClock.addClock(secondClock);
		System.out.println(firstClock.toString());
		thirdClock = firstClock;
		System.out.print(thirdClock.toString() + " - " + secondClock.toString() + " = ");
		thirdClock.subtractClock(secondClock);
		System.out.println(thirdClock.toString());
		System.out.println("First clock: " + firstClock.toString());
		System.out.println("Second clock: " + secondClock.toString());
		System.out.println("Third clock: " + thirdClock.toString());
		input.close();
	}
}