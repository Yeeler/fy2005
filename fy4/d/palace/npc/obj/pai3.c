inherit ITEM;
void create()
{
	string *name=({"Ͱ"});
	string *num = ({"һ","��","��"});
	set_name( num[random(3)]+name[random(1)] , ({ "majiangpai tong","majiangpai","tong"}) );
	set_weight(1);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һֻ���µ������齫��\n");
		set("unit", "��");
		set("value", 10);
	}
	::init_item();
}
