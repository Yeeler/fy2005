#include <armor.h>
#include <ansi.h>
inherit HEAD;

void create() {
	set_name(RED"��ӧñ"NOR, ({ "red hat","hat" }) );
	set_weight(6);
	if(clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","һ���ٲ��Ǵ��ĺ�ӧñ��");
		set("value", 8);
		set("material", "cloth");
	}
	::init_head();
}
