package display;

public class display {
	private int value = 0;
	private int limit = 0;
	static int i=1;/*类变量，是属于类的变量，而不属于任意一个成员，但是可以通过成员访问该变量来改变他的值。
					修改之后再通过任意一个成员或者类访问该变量时他的值都为修改过后的值*/
	public display(int limit)
	{
		this.limit = limit;
	}
	public void increase()
	{
		value++;
		if(value==limit)
		{
			value=0;
		}
	}
	public int getValue()
	{
		return value;
	}
	public static void main(String[] args) {//类函数。类函数之间可以相互调用，同时类函数也只能调用类变量，否则需要通过类的方式访问
		// TODO Auto-generated method stub
		display d=new display(24);
		
		while (true)
		{
			d.increase();
			System.out.println(d.getValue());
		}
		
	}

}
/*private 的访问范围：该private所在的类（包括他的main函数）
  friendly的访问范围：该类所在的包都可以访问
  public的访问范围：整个project，但是在跨包访问时需要使用import*/
/*private只能用于成员变量或成员函数*/
/*如果一个类的类型是public，那么他的名字一定与源代码文件的名字相同*/
