#include <ansi.h>

inherit NPC;
void backattack();
void create()
{
        set_name("���ʻ���", ({ "nightmare"}) );
        set("long", "���ǵ����еĶ�ħ���ܵ�а��ʿ���ٻ������˼䡣");
        set("race","��");
        set("attitude", "friendly");
        set("no_fly",1);
        set("no_arrest",1);

        set("str",75);
        set("force_factor",1);
        set("agi",65);
        set("cor",65);
        set("cps",65);
        
        // ���׳�ȥ
        set("max_kee",4000);
        set("eff_kee",query("max_kee"));
        set("kee",query("max_kee"));
        set("max_gin",4000);
        set("gin",query("max_kee"));
        set("eff_gin",query("max_kee"));
        set("max_sen",4000);
        set("eff_sen",query("max_kee"));
        set("sen",query("max_kee"));
        
        set("max_force",2000);
        set("force",query("max_force")*2);

        set_skill("move",500);
        set_skill("unarmed",250);
        set_skill("dual-attack",150);
        set_skill("demon-strike",200);
        set_temp("apply/haste",150);
        map_skill("unarmed","demon-strike");
        
        set("combat_exp", 5000000); 
        
        setup();
        call_out("leave",20);   // ֻ����20�롣
}

int heal_up()
{
        if( environment() && !is_fighting() ) {
                call_out("leave", 1);
                return 1;
        }
        return ::heal_up() + 1;
}

void leave()
{
        object owner,*pros;
        if (environment())
        message("vision",MAG"���ʻ�����һ˲�仯��һ���Ϲ⣬û�����¡�\n" NOR, environment(),this_object() );
        if(objectp(owner=this_object()->query("possessed")))
        {
                pros = owner->query_temp("protectors");
                        pros -= ({ this_object() });
                owner->set_temp("protectors",pros);
        } 
	// Remove all buffs to clean up annied
	ANNIE_D->debuff(this_object(),"all");                               
        destruct(this_object());
}

void invocation(object who, int level)
{
        int i, bonus_skill;
        object *enemy,*pros;

        pros = who->query_temp("protectors");
        if(sizeof(pros))
                pros += ({ this_object() });
        else
                pros = ({ this_object() });
        who->set_temp("protectors",pros);
        
        enemy = who->query_enemy();
        i = sizeof(enemy);
        while(i--) {
                if( enemy[i] && living(enemy[i]) ) {
                        kill_ob(enemy[i]);
                        if( userp(enemy[i]) ) enemy[i]->fight_ob(this_object());
                        else enemy[i]->kill_ob(this_object());
                }
        }
        set_leader(who);
        set("possessed",who);
}


void unconcious() {
        die();
}

void die()
{
        leave();
}


void heart_beat()
{
        object leader;
        
        ::heart_beat();

        if(!this_object()) 		return;
        
        if(query_temp("is_unconcious")||is_busy())
                return ;
        if(objectp(query("possessed")))
        {
                leader=query("possessed");
                if(objectp(leader) && environment(leader)!=environment()&&(!leader->is_ghost()))
                {
                        message_vision(MAG"һ�������������ߴܿ�ȥ������\n"NOR,this_object());
                        this_object()->move(environment(leader));
                        message_vision(MAG"һ�����̴��˹���������\n"NOR,this_object());
                        delete("leave_room");
                }
        }
        
        else
        {
                if(!query("leave_room"))
                        set("leave_room",1);
                else
                        add("leave_room",1);
                if(query("leave_room")==5)
                        leave();
        }
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
