// Copyright (C) 1995, by Tie Yu and Daniel Yu. All rights reserved.
// This software can not be used, copied, or modified in any form without
// the written permission from authors.
inherit NPC;
void create()
{
	set_name("����С����", ({ "toughman" }) );
	set("gender", "����" );
	set("age", 47);
	set("long", "�����һ���������������ˡ�\n");
	set("combat_exp", 10000);
	set("chat_chance", 1);
	set("chat_msg", ({
		"����С���ܸ�����������ӵĵ��������ˣ���Ҳû����һ����\n",
	}) );
        setup();
	carry_object("/obj/armor/cloth")->wear();
	carry_object(__DIR__"obj/miaodao")->wield();
	add_money("coin", 1);
}
