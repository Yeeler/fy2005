
#include <armor.h>

inherit FINGER;

void create()
{
	set_name("���ָ", ({ "jade"}) );
	set_weight(1);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ���������ε����ָ\n");
		set("unit", "��");
		set("value", 100000);
		set("armor_prop/armor", 0);
		set("wear_msg", "$N����ذ�һ��$n������ָ�ϡ�\n");
		set("unwield_msg", "$N����ذ�$n����ָ�ϳ���������\n");


	}
	::init_finger();
}
