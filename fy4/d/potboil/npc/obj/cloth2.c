#include <ansi.h>
#include <armor.h>

inherit CLOTH;

void create() {
	set_name(YEL"����Ѫ��"NOR, ({ "robe"}) );
	set_weight(300);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value",4500);
		set("lore",1);
		set("material", "cloth");
		set("male_only", 1);
		set("level_required", 90);
		set("armor_prop/armor", 60);
		set("armor_prop/intelligence", -10);
		set("armor_prop/max_gin", 200);
		set("armor_prop/max_kee", 200);
		set("armor_prop/max_sen", 200);
//		set("long","����\n");	// �ѷ���
	}
	::init_cloth();
}


int init()
{
	if (environment())
		if (userp(environment()))
			set("value",0);
}
// ���p��dancing_faery@hotmail.com

