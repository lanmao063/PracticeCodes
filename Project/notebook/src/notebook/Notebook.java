package notebook;
import java.util.ArrayList;
import java.util.HashSet;
public class Notebook {
	private ArrayList<String> notes=new ArrayList<String>();	
	public void add(String s)
	{
		notes.add(s);
		//notes.add("www");
	}
	public void add(int index,String s)
	{
		notes.add(index,s);
	}
	public int getSize()
	{
		return notes.size();
	}
	public String getNote(int index)
	{
		return notes.get(index);
	}
	public void deleatNote(int index)
	{
		notes.remove(index);
	}
	public String[] list()
	{
		String[] a=new String[notes.size()];//a为对象数组，每个元素都是一个指针，指向字符串的地址
//		for (int i=0;i<notes.size();i++)
//		{
//			a[i]=notes.get(i);
//		}功能同下
		notes.toArray(a);
		return a;
	}

	public static void main(String[] args) {
		Notebook nb=new Notebook();
		nb.add("first");
		nb.add("second");
		nb.add(1,"third");//是插入功能，将原来这个位置的数据往后挪，并不覆盖
		System.out.println(nb.getSize());
		System.out.println(nb.getNote(0));
		System.out.println(nb.getNote(1));//和数组一样不能越界
		String[] a=nb.list();
		for (String s : a)
		{
			System.out.println(s);
		}
		System.out.println(a);
		System.out.println("--------------");
		HashSet<String> b=new HashSet<String>();
		b.add("first");
		b.add("second");
		b.add("third");
		System.out.println(b);
	}

}
