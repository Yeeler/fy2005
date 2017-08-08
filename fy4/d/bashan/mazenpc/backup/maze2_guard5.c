#include <ansi.h>
inherit SMART_NPC;

void create()
{
	object weapon;
	set_name("�����޲���", ({ "disciple" }) );
	set("title",YEL"�������"NOR);
	set("gender", "Ů��" );

	set("no_fly",1);
	set("no_curse",1);
	set("no_arrest",1);

		set("attitude", "aggressive");

	set("chat_chance_combat", 100);
	set("chat_msg_combat", ({
		(: auto_smart_fight(100) :),
	}) );

	set("combat_exp", 6000000);

	set("death_msg",CYN"\n$N������������λ�������ξ壿Ī����ȥ��Ī����ȥ����\n"NOR);

	setup();
	add_money("coin" , 1+random(100));

	auto_npc_setup("disciple",200,200,0,"/obj/weapon/","fighter_w","illusionstick2",4);

	weapon=carry_object("/obj/armor/cloth");
	weapon->set_name("�޺�����", ({ "monk cloth","cloth" }) );
	weapon->set("long","һ�����о���ħ����������ġ�\n");
	weapon->set("value",0);
	weapon->wear();

	weapon=carry_object("/obj/weapon/staff");
	weapon->set_name(HIG"��Ҷ�����"NOR, ({ "bamboo stick","stick" }) );
	weapon->set("long","һ����Ҷ�������\n");
	weapon->set("value",0);
	weapon->wield();

}

int kill_ob(object who)
{
	::kill_ob(who);
	auto_smart_fight(100);	// rascal design :p
	return 1;
}

/*

���������������X�Y
���������������U�t�r
���������������U���t�r
���������������U�����t�r
���������������U��������
���������������^�k�k�k�_

��������������- FengYun - ������
������������annie 08.2003
������dancing_faery@hotmail.com
*/
