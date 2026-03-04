package cd;

public class Item {
	private String title;
	private int numofTracks;
	private int playingtime;
	private boolean rent=false;
	private String comment;
	public Item()
	{
		//重载，为了应对super未传参的情况
	}
	
	public Item(String title, int numofTracks, int playingtime, String comment) {
		super();
		this.title = title;
		this.numofTracks = numofTracks;
		this.playingtime = playingtime;
		this.comment = comment;
	}

	public void print()
	{
		System.out.println(title);

	}

}
