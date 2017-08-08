#include <ansi.h>
inherit MAZE_NPC;
void create()
{
        set_name("观想虫", ({ "mind bug", "bug" }) );
         set("race", "野兽");
        set("class","taoist");
        set("age", 3);
        set("maze","cave");
        set("long", "这是一只由修道人的杂念绮思所化的观想兽，会缠住人的魂魄。\n"); 
	
        set("combat_exp",1500000);
		if (!random(10))	set("attitude","aggressive");
		set("target_name","观想兽");
		    
		set("chat_chance_combat", 100);
    	set("chat_msg_combat", ({
	     (: auto_smart_fight(20) :),
        }) );
    	
    	auto_npc_setup("wang",150,120,1,"/obj/weapon/","fighter_w","scratmancy",1);
        setup();
}
