// shield.c

#include <armor.h>

inherit SHIELD;

void create()
{
    set_name("�ټ׶�", ({ "shield" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("material", "leather");
		set("unit", "��");
        set("value", 1);
        set("armor_prop/armor", 10);
        
	}
	::init_shield();
}
