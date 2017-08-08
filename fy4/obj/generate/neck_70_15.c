#include <ansi.h>
#include <armor.h>

inherit NECK;

void create() {
	set_name(CYN"千草香包"NOR, ({ "necklace"}) );
	set_weight(300);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "件");
		set("generate_item",1);
		set("lore",1);
		set("material", "cloth");
		set("female_only", 1);
		set("level_required", 50);
		set("armor_prop/armor", 5);
		set("armor_prop/strength", 5);
		set("armor_prop/intelligence", 5);
		set("armor_prop/composure", 25);
		set("armor_prop/constitutionx", 0);	// 已废弃
		set("armor_prop/agility", 5);
		set("armor_prop/karma", 5);
		set("armor_prop/max_gin", 72);
		set("armor_prop/max_kee", 90);
		set("armor_prop/max_sen", 72);
		set("long","用一千种草药编织成的小小香囊。\n");	// 已废弃
	}
	::init_neck();
}

// 凝輕·dancing_faery@hotmail.com

