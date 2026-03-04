package cd;

public class DVD extends Item{
//	private String title;//如果子类和父类有完全相同的两个变量，可以同时存在，但是在哪个类里，this方法就是那个类的
	private String director;
//	private int numofTracks;
//	private int playingtime;
//	private boolean rent=false;
//	private String comment;
	public DVD(String title, String director, int numofTracks, int playingtime, String comment) {
		super(title,numofTracks,playingtime,comment);
//		this.title = title;
		this.director = director;
//		this.numofTracks = numofTracks;
//		this.playingtime = playingtime;
//		this.comment = comment;
	}
	public void print()
	{
		super.print();
		System.out.printf(":"+director);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
