class Box 
{
double width;
double height;
double depth;
void volume()
{
System.out.println("Volume is  "+(width*height*depth));
}
}
class BoxDemo
{
public static void main(String arg[])
{
Box b=new Box();
b.width=10;
b.height=20;
b.depth=30;
b.volume();

Box b2=new Box();
b2.width=40;
b2.height=50;
b2.depth=60;

b2.volume();

Box b3=new Box();
b3.width=20;
b3.height=20;
b3.depth=30;
b3.volume();

Box b4=new Box();
b4.width=10;
b4.height=30;
b4.depth=40;
b4.volume();

}
}
