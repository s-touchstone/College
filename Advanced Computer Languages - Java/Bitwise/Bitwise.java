/* Steven Touchstone
 * Advanced Programming Language (Java)
 * Prof. Jalal Omer
 * Bitwise Assignment
 * 03/04/2020
 * 
 * Input: Open gui window that prompts for user to enter an integer
 * Output: Open gui after counting the number of ones that occur in the integers binary representation 
 * */

import javax.swing.JOptionPane;

public class Bitwise{
	public static void main(String[] args) {
		String snum = JOptionPane.showInputDialog("Please Enter a Number");
		int num = Integer.parseInt(snum);
		int count = 0;
		for (int i = 31; i >= 0; i--) {
			if (((num >> i) & 1) == 1) {count++;}
		}
		JOptionPane.showMessageDialog(null, "There are " + count + " binary 1s the integer " + num ,"output", JOptionPane.INFORMATION_MESSAGE);
	}
}