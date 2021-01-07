
public class Triangle extends Shape {

	private int height, base;
	
	public int getHeight() {return height;}
	public void setHeight(int height) {this.height = height;}
	public int getBase() {return base;}
	public void setBase(int base) {this.base = base;}
	
	public Triangle() {}
	public Triangle(int x, int y, int height, int base) {
		super(x, y);
		this.height = height;
		this.base = base;
	}
	
	public void display() {
		System.out.println("Triangle: x-coordinate = " + getX() + ", y-coordinate = " + getY() + ", height = " + height + ", base = " + base);
	}
	public double area() {return ((double).5 * base) * height;}
}
