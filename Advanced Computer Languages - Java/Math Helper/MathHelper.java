/* Steven Touchstone
 * Advanced Programming Language (Java)
 * Prof. Jalal Omer
 * Assignment 3
 * 03/08/2020
 * 
 * Basic GUI program using JOptionPane class from javax.swing package to emulate a
 * 		multiplication game to teach children to use multiplication.
 * 
 * Input1: integer as an answer to a multiplication question
 * Input2: string as an answer to whether or not to continue with a new question
 * Output: A multiplication question, a question to continue, and a message about whether
 * 		the question was answered correctly or not
*/

import javax.swing.JOptionPane;

public class MathHelper{
	static int x, y , z;
	static String question;
	
	private static String gen_question() {
		x = (int) (Math.random() * 10);
		y = (int) (Math.random() * 10);
		String question = String.format("How much is %d times %d?", x, y);
		return question;
	}
	
	public static void main(String[] args) {
		question = gen_question();
		while (true){ 
			z = Integer.parseInt(JOptionPane.showInputDialog(question));
			if (z == (x * y)) {
				JOptionPane.showMessageDialog(null, "Very Good!");
				String opt = JOptionPane.showInputDialog("Do you want to try another question?(Y/N)");
				if ((opt.contentEquals("y")) || (opt.contentEquals("Y"))) {
					question  = gen_question();
					continue;
				}
				else {
					break;
				}
					
			}
			else {
				JOptionPane.showMessageDialog(null, "No. Please try again.");
				continue;
			}//end else
		}//end while
	}//end main
}//end MathHelper