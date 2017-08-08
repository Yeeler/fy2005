#include <ansi.h>
#include <armor.h>

inherit CLOTH;

void create() {
	set_name(HIR"����ϼ��"NOR, ({ "cloth"}) );
	set_weight(300);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("material", "cloth");
		set("female_only", 1);
		set("level_required", 10);
		set("armor_prop/armor", 14);
		set("armor_prop/strength", 0);
		set("armor_prop/intelligence", 0);
		set("armor_prop/composure", 0);
		set("armor_prop/constitutionx", 0);	// �ѷ���
		set("armor_prop/agility", 0);
		set("armor_prop/karma", 0);
		set("armor_prop/max_gin", 20);
		set("armor_prop/max_kee", 60);
		set("armor_prop/max_sen", 0);
//		set("long","����\n");	// �ѷ���
	}
	::init_cloth();
}
