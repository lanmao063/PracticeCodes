package coin;
import java.util.HashMap;
import java.util.Scanner;
public class Coin {
	private HashMap<Integer,String> coinNames=new HashMap<Integer,String>();
	public Coin()
	{
		coinNames.put(1,"penny");
		coinNames.put(10,"dime");
		coinNames.put(25,"quarter");
		coinNames.put(50,"half-dollar");
	}
	public String getName(int amount)
	{
		if(coinNames.containsKey(amount))
		{
			return coinNames.get(amount);
		}
		else
		{
			return "None";
		}
	}
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int amount=in.nextInt();
		Coin k=new Coin();
		String name=k.getName(amount);
		System.out.println(name);

	}

}
