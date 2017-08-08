#include <ansi.h>
#include <armor.h>

inherit WRISTS;

void create() {
	set_name(WHT"草编手链"NOR, ({ "wrists"}) );
	set_weight(300);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "条");
		set("generate_item_common",1);
		set("lore",1);
		set("material", "cloth");
		set("common_only", 1);
		set("value",1200);	// 有value，允许在用过后卖回商店；但建议设立前期保管处进行保存。
		set("level_required", 0);
		set("armor_prop/armor", 1);
		set("armor_prop/strength", -10);
		set("armor_prop/intelligence", 0);
		set("armor_prop/composure", -10);
		set("armor_prop/constitutionx", 0);	// 已废弃
		set("armor_prop/agility", -10);
		set("armor_prop/karma", -10);
		set("armor_prop/max_gin", 0);
		set("armor_prop/max_kee", 100);
		set("armor_prop/max_sen", 0);
		set("long","一条小草编就的手链，是小孩们的玩物。\n");	// 已废弃
	}
	::init_wrists();
}

// 凝輕·dancing_faery@hotmail.com

