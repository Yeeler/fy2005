#include <armor.h>
inherit CLOTH;

void create()
{
	set_name("����", ({ "black cloth","cloth" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "һ����ɫ�Ķ���������մ������������\n");
		set("material", "cloth");
		set("armor_prop/armor", 10);
	}
	::init_cloth();
}