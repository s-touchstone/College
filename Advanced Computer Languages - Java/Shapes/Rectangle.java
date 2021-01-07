
public class Rectangle extends Shape {

	private int height, width;
	
	public int getHeight() {return height;}
	public void setHeight(int height) {this.height = height;}
	public int getWidth() {return width;}
	public void setWidth(int width) {this.width = width;}
	
	public Rectangle() {}
	public Rectangle(int x, int y, int height, int width) {
		super(x, y);
		this.height = height;
		this.width = width;
	}
	
	public void display() {
		System.out.println("Rectangle: x-coordinate = " + getX() + ", y-coordinate = " + getY() + ", height = " + height + ", width = " + width);
	}
	public double area() {return ((double) width * height);}
}
