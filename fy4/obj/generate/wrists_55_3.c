#include <ansi.h>
#include <armor.h>

inherit WRISTS;

void create() {
	set_name(BLK"��������"NOR, ({ "wrists"}) );
	set_weight(300);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("generate_item",1);
		set("lore",1);
		set("material", "cloth");
		set("1_only", 1);
		set("level_required", 40);
		set("armor_prop/armor", 4);
		set("armor_prop/strength", 4);
		set("armor_prop/intelligence", 4);
		set("armor_prop/composure", 4);
		set("armor_prop/constitutionx", 3);	// �ѷ���
		set("armor_prop/agility", 4);
		set("armor_prop/karma", 20);
		set("armor_prop/max_gin", 56);
		set("armor_prop/max_kee", 70);
		set("armor_prop/max_sen", 56);
//		set("long","����\n");	// �ѷ���
	}
	::init_wrists();
}

// ���p��dancing_faery@hotmail.com

