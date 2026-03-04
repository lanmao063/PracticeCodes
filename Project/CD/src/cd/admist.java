package cd;
import java.util.ArrayList;
public class admist {
//	private ArrayList<DVD> listdvd=new ArrayList<DVD>();
//	private ArrayList<CD> listcd=new ArrayList<CD>();
	private ArrayList<Item> listItem=new ArrayList<Item>();
//	public void add(CD cd)
//	{
//		listcd.add(cd);
//	}
//	public void add(DVD dvd)
//	{
//		listdvd.add(dvd);
//	}
	public void add(Item item)
	{
		listItem.add(item);//需要父类变量的参数也可以传入子类的变量。此为多态变量。Item为静态类型，CD与DVD为动态类型
	}					/*此为向上造型，在子类被向上构造为了父类后不能在被直接赋值给子类的对象（不能被子类的对象所指向），但可以通过强制转换实现	
						向上造型并没有将该变量的类型改变，而是将他“看作”父类类型的对象*/
						/*在使用时，看似是Item类型的对象在add,实际上调用的是动态类型的add函数
						当通过对象调用函数时，调用哪个函数叫做绑定。Java默认动态绑定，即调用动态类型的函数*/
	
//	public void list()
//	{
//		for (CD k:listcd)
//		{
//			k.print();
//		}
//		for (DVD j:listdvd)
//		{
//			j.print();
//		}
//	}
	public void list()
	{
		for (Item k : listItem)
		{
			k.print();
		}
	}
	public static void main(String[] args) {
		admist db=new admist();
//		CD k =new CD("asd","qwe",1,2,"zxc");
//		db.add(k);
		db.add(new CD("fgh","rty",3,4,"vbn"));
		db.add(new DVD("a","b",1,2,"qqq"));
		db.list();	
	}

}
