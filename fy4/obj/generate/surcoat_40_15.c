#include <ansi.h>
#include <armor.h>

inherit SURCOAT;

void create() {
	set_name(YEL"��������"NOR, ({ "surcoat"}) );
	set_weight(300);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("generate_item",1);
		set("lore",1);
		set("material", "cloth");
		set("female_only", 1);
		set("level_required", 30);
		set("armor_prop/armor", 6);
		set("armor_prop/strength", 15);
		set("armor_prop/intelligence", 3);
		set("armor_prop/composure", 3);
		set("armor_prop/constitutionx", 2);	// �ѷ���
		set("armor_prop/agility", 3);
		set("armor_prop/karma", 3);
		set("armor_prop/max_gin", 40);
		set("armor_prop/max_kee", 50);
		set("armor_prop/max_sen", 40);
//		set("long","����\n");	// �ѷ���
	}
	::init_surcoat();
}

// ���p��dancing_faery@hotmail.com

