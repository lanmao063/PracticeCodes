package clock;

import display.display;

public class clock 
{
	private display hour=new display(24);
	private display minute=new display(60);
	public void start()
	{
		while(true) 
		{
			minute.increase();
			if (minute.getValue()==0)
			{
				hour.increase();
			}
			System.out.printf("%02d:%02d\n",hour.getValue(),minute.getValue());
		}	
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		clock d=new clock();
		d.start();
	}

}
