//	�������ֹ�¥�ĺ���

inherit SMART_NPC;
void create()
{
//		string *name = ({"��","��","ʱ","��","��","��","��","��","��","��","��","ʷ"});
//      set_name("һ"+name[random(sizeof(name))], ({ "shaolin monk", "monk"}) );
        
        set_name("һ��",({ "shaolin monk", "monk" }));
        set("gender", "����" );
        set("age",random(20)+ 32);
        set("nickname","���ĵ�");
		create_family("������", 18, "����");
        set("long", "���������¹�¥�ϵĺ��С�\n");
		set("vendetta_mark","shaolin");
        set("combat_exp", 3200000);
        set("attitude", "friendly");

        set("chat_chance", 2);
        set("chat_msg", ({
                name()+"˵������ʱ���˰ɣ�\n",
        }) );

	
		set("chat_chance_combat", 100);
	    set("chat_msg_combat", ({
		     (: auto_smart_fight(20) :),
	     }) ); 		
	
		auto_npc_setup("wang",200,170,0,"/obj/weapon/","fighter_w","liuxing-hammer",1);
		
		setup();
		carry_object(__DIR__"obj/monk_cloth")->wear();
		carry_object(__DIR__"obj/hammer")->wield();
}