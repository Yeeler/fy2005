//Tushen@Fygroup
//Based on Silencer's code.Copyrights all reserved.
inherit SMART_NPC;
#include <ansi.h>
void smart_fight();

void create()
{
        set_name("��ˮ", ({ "ashui" }) );
        set("gender", "����");
        set("age", 31);     
      	set("chat_chance", 1);
	set("chat_msg", ({
"��ˮа���Ц��������\n",
	}) );
        set("attitude", "friendly");
        set("title",HIW"�׻�"NOR);
        set("nickname", HIG"ˮ����ɽ"NOR);
        set("score", 200000);
        set("reward_npc", 1);
		    set("difficulty",50);
		    set("class","baiyun");
        set("death_msg",CYN"\n$N��������ա���������Ҳ������\n"NOR);
        set("combat_exp", 16000000);        
        
    set("perform_busy_d", "bat/dodge/fengyu-piaoxiang/zonghengsihai");
		set("perform_weapon_attack", "baiyun/magic/music/bainiao");
		set("perform_weapon_attack2", "baiyun/magic/music/guanglingsan");
		set("perform_unarmed_attack", "baiyun/unarmed/calligraphy/sangluan");
		set("perform_buff_1", "berserker/force/gaunforce/damageup");
		set("perform_buff_2", "berserker/force/gaunforce/powerup");
		  set("chat_chance_combat", 100);
    	set("chat_msg_combat", ({
	     	(: auto_smart_fight(100) :),
        }) );
          
        set_skill("move", 270);
        set_skill("perception", 300);
        set_skill("force", 270);
        set_skill("spells", 300);
        set_skill("unarmed", 280);
        set_skill("parry", 300);
        set_skill("dodge", 280);
        set_skill("magic", 300); 
        
        set_skill("gaunforce", 180);
		    set_skill("fengyu-piaoxiang", 200);
        set_skill("heavendance", 230);
        set_skill("music", 200);
        
        map_skill("force","gaunforce");
        map_skill("dodge","fengyu-piaoxiang");
        map_skill("move","fengyu-piaoxiang");
        map_skill("parry","calligraphy");
        map_skill("magic","music");
        mao_skill("unarmed","calligraphy");
        setup();

    	carry_object("/obj/weapon/fist",([	
    						"name":  "�Ǻ�",
    						"long": "����û���дʲô��\n",
    						 ]))->wield();  
    						 
    	carry_object("obj/music/chunlei");
    	
    	carry_object("/obj/armor/cloth",([	
    						"name":  "��װ",
    						"long": "һ����ʽ���ص��·�����˵��������\n",
    						 ]))->wear();  
}
void smart_fight()
{
	object ob,target;
	mapping buff;
	object *enemy;
	string msg;
	int i;
	object me = this_object();

	set("atman",query("max_atman")*2);

	switch (random(4))
	{
	case 0:		
		if (!present("��",environment()))
		{
			message_vision(MAG"\n��ˮ�ʷ����ת�ۼ����ڵ�������һ�����ġ������֡�\n"NOR,me);
			target = new(__DIR__"obj/ward2");
			target->move(environment());
			target->heal_ob(me,10);
			return;
		}
		break;
	case 1:
		if (!present("��",environment()))
		{
			message_vision(RED"\n��ˮ�ʷ����ת�ۼ����ڵ�������һ�����ġ��ˡ��֡�\n"NOR,me);
			target = new(__DIR__"obj/ward3");
			target->move(environment());
			target->heal_ob(me,10);
			return;
		}
		break;
	
	}

	if (!present("��",environment()) 
		&& (query("kee") < query("max_kee") / 3 || query("gin") < query("max_gin") / 3 || query("sen") < query("max_sen") / 3))
	{
		message_vision(CYN"\n��ˮ�ʷ����ת�ۼ����ڵ�������һ�����ġ������֡�\n"NOR,me);
		target = new(__DIR__"obj/ward");
		target->move(environment());
		target->heal_ob(select_opponent(),8);
		return;
	}

	
	// CDT 10 sec 's single perform
	if (query("timer/pfm/pfm_huibi") + 10 < time()) {
		
		set("timer/pfm/pfm_huibi",time());		
		target = select_opponent();
		message_vision(WHT"\n$N��Ȼ���˴󷢣���ͷɢ���������Ǻ�һ£����һƪ��֮ɥ����������ˮ��һ���ǳɣ�\n",me);
		add_temp("apply/attack",100);
		add_temp("apply/damage",150);
		msg=HIC"��֮���ף�\n"NOR WHT"$N����Ʈ�ݣ�����ʵ����ݺ�֮����������Ͱ���$n��ȥ��"NOR;
		COMBAT_D->do_attack(this_object(),target,TYPE_PERFORM,msg);

		if (me->query_busy())	// parry/dodge/ob_hit busy
		{
			message_vision(HIG"$N�ж����裬�ʷ��������飬���������������ơ�\n"NOR,me,target);
			me->stop_busy();
		}

		msg=HIC"��ɥ��֮������Ĺ���ݱ������\n"NOR WHT"$N���δ󿪴��أ�һ��һ�����Ǳ��ߣ���籩�������$n��"NOR;
		COMBAT_D->do_attack(this_object(),target,TYPE_PERFORM,msg);
	
		if (me->query_busy())	// parry/dodge/ob_hit busy
		{
			message_vision(HIG"$N�ж����裬�ʷ��������飬���������������ơ�\n"NOR,me,target);
			me->stop_busy();
		}

		msg=HIC"����׷Ω������\n"NOR WHT"$N���ⶸ�䣬���ֳٻ����أ�����ǧ��֮������$n��"NOR;
		COMBAT_D->do_attack(this_object(),target,TYPE_PERFORM,msg);
	
		if (me->query_busy())	// parry/dodge/ob_hit busy
		{
			message_vision(HIG"$N�ж����裬�ʷ��������飬���������������ơ�\n"NOR,me,target);
			me->stop_busy();
		}

		msg=HIC"����������Ľ�ݾ���ʹ���ĸΣ�\n"NOR WHT"$w"WHT"�������ɣ�����Ҳ���أ��Ƴ��֮��������Ҳ�վ��������֮�ѣ�"NOR;
		COMBAT_D->do_attack(this_object(),target,TYPE_PERFORM,msg);

		add_temp("apply/damage",-150);
		add_temp("apply/attack",-100);
	
	}
		
	return;
}
