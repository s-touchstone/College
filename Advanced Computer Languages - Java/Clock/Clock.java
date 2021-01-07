public class Clock{
	
	private int hours;
	private int minutes;
	private int seconds;
	
	public Clock() {
		hours = 12;
		minutes = 0;
		seconds = 0;
	}
	
	public Clock(int hours,int minutes, int seconds) {
		this.hours = hours;
		this.minutes = minutes;
		this.seconds = seconds;
	}
	
	public Clock(int seconds) {
		setClock(seconds);
	}
	
	public void setClock(int seconds) {
		setSeconds(seconds % 60);
		int temp = seconds / 60;
		setMinutes(temp % 60);
		temp /= 60;
		setHours(temp);
	}
	
	public int getHours() {
		return hours;
	}
	
	public int getMinutes() {
		return minutes;
	}
	
	public int getSeconds() {
		return seconds;
	}
	
	public void setHours(int hours) {
		while (hours > 23) {
			hours -= 24;
		}
		this.hours = hours;
	}
	
	public void setMinutes(int minutes) {
		this.minutes = minutes;
	}
	
	public void setSeconds(int seconds) {
		this.seconds = seconds;
	}
	
	public void tick() {
		int temp = (((hours * 60) + minutes) * 60) + seconds;
		temp++;
		setClock(temp);
	}
	
	public void addClock(Clock clk) {
		int temp1 = (((hours * 60) + minutes) * 60) + seconds;
		int temp2 = (((clk.getHours() * 60) + clk.getMinutes()) * 60) + clk.getSeconds();
		temp1 += temp2;
		setClock(temp1);
	}
	
	public String toString() {
		if (hours < 12 && hours > 0)
			return String.format("(%02d:%02d:%02d AM)", hours, minutes, seconds);
		else if (hours == 0)
			return String.format("(%02d:%02d:%02d AM)", hours + 12, minutes, seconds);
		else if (hours == 12)
			return String.format("(%02d:%02d:%02d PM)", hours, minutes, seconds);
		else
			return String.format("(%02d:%02d:%02d PM)", hours - 12, minutes, seconds);
	}
	
	public void tickDown() {
		int temp = (((hours * 60) + minutes) * 60) + seconds;
		temp--;
		setClock(temp);
	}
	
	public void subtractClock(Clock clk) {
		int temp1 = (((hours * 60) + minutes) * 60) + seconds;
		int temp2 = (((clk.getHours() * 60) + clk.getMinutes()) * 60) + clk.getSeconds();
		temp1 -= temp2;
		setClock(temp1);
	}
}