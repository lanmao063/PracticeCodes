package notebook;
import java.util.ArrayList;
public class Value {
	private int i;
	public void set(int i)
	{
		this.i=i;
	}
	public int get()
	{
		return i;
	}
	public String toString()
	{
		return ""+i;
	}//可将地址转化为指向的内容，格式必须一致
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Value[] a = new Value[10];
		for (int i=0;i<a.length;i++)
		{
			a[i]=new Value();
			a[i].set(i);
			
		}
		for(Value k : a)
		{
			k.set(0);
			System.out.println(k.get());
		}
		Value b = new Value();
		b.set(10);
		System.out.println(b);
		System.out.println("--------");
		ArrayList<String> k=new ArrayList<String>();
		k.add("first");
		k.add("second");
		k.add("third");
		System.out.println(k);
	}

}
