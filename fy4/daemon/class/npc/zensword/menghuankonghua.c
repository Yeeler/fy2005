// yawn pfm
// *bored,#10 *yawn,*bored annie
// ����ר��pfm? doubt


// 2009 FengYun
// Edit by hippo 2009.11
//��Ȼ��Ϊ2005fy7/7����ɽ�������,�������ʹ��.

#include <ansi.h>
#include <combat.h>
inherit SSERVER;
int perform(object me, object target)
{
	string dodskill,msg;
	int extra,extra2,busy,busy2,pp=0,pd=0;
	object weapon;
	mapping buff;
	
	if( !target ) target = offensive_target(me);
	if( !target
	||	!target->is_character()
	||	!me->is_fighting(target) )
		return notify_fail("���λÿջ���ֻ�ܶ�ս���еĶ���ʹ�á�\n");
/*
	if (me->query("marry") || me->query("divorced"))
		return notify_fail("����ͷ��������޷�ʩչ���λÿջ�����\n");

	if (me->query("quest"))
		return notify_fail("����ͷ���й���޷�ʩչ���λÿջ�����\n");
 		//���񲻿�ʹ��������,����.
*/
	
	if (me->query_skill("zen",1) < 50) //����fy2005��ѧϰfree zen�������.
		return notify_fail("������δ���޷�ʩչ���λÿջ�����\n");
	
	if (me->query_skill("xiaodao",1) < 150) //�����µ�riddle���Ի��xiaodao ����pf�Ѷ�
		return notify_fail("��Т��ǳ�����޷�ʩչ���λÿջ�����\n");
	
	if (me->query_skill("zensword",1) < 170) //�����Ѷ�
		return notify_fail("���λÿջ�����Ҫ170�������������\n");
	
	extra = me->query_skill("sword");
	extra /= 3;
	extra2 = me->query_skill("xiaodao",1);

	if (me->query("marry") || me->query("divorced")) {
		extra = extra * 9 / 10;
		extra2 = extra2 * 9 / 10;
	}
	me->add_temp("apply/attack",extra);
	//me->add_temp("apply/damage",me->query_skill("xiaodao",1));	
	me->add_temp("apply/damage",extra2);	

	msg =  CYN"$N"NOR CYN"˫��΢�ϣ�ֻ�����¿��ޣ�������ɺ������"+ (me->query_weapon())->name()+ NOR CYN"���������������裬���һ�����\n" NOR;
	message_vision(msg, me, target);
	
	busy = target->query_busy();
	busy2 = target->query("no_busy");

	
    msg =  YEL"�Ρ�"NOR;
        COMBAT_D->do_attack(me,target,TYPE_PERFORM,msg);
	if (target->query_temp("damaged_during_attack"))
	{
		message_vision(HIB"$Nֻ�����������紺��һ��������������Ȥ�����������ٻ���\n",target);
		target->start_busy(1);
	}
	
	
    msg =  NOR YEL  "�á�"NOR;
        COMBAT_D->do_attack(me,target,TYPE_PERFORM,msg);
        
        
	if (target->query_temp("damaged_during_attack") && !target->query("boss") && !target->query("big_boss"))
	{
		message_vision(HIB"������ʱ�����������ư�����$N��ǰ��$NĿ�����룬���Ǵ��ҡ�\n",target);
		pp = extra * 2;
		pd = me->query_skill("zen",1);
		if (me->query("marry") || me->query("divorced")) {
			pp = pp * 9 / 10;
			pd = pd * 9 / 10;
		}
		target->add_temp("apply/parry",-pp);
		target->add_temp("apply/dodge",-pd);	
	}
	
    msg =  NOR YEL  "�ա�"NOR;
        COMBAT_D->do_attack(me,target,TYPE_PERFORM,msg);
	if (target->query_temp("damaged_during_attack"))
	{
		message_vision(HIB"���׾�ʱ�����������ع�������һ���޳ɣ�$N���ɾ�����ͷһƬãȻ��\n",target);
		ANNIE_D->debuff(target,"powerup");
	}
	
	
    msg =  NOR YEL  "����"NOR;
        COMBAT_D->do_attack(me,target,TYPE_PERFORM,msg);
	
		me->add_temp("apply/attack",-extra);
		//me->add_temp("apply/damage",-me->query_skill("xiaodao",1));	
		me->add_temp("apply/damage",-extra2);	


	if (me->query("quest")) { //�޸�����Ϊ����ͷ�
		me->perform_busy(4);
	} else {
		me->perform_busy(3);
	}
		
	
	if (target) {
		target->stop_busy();
		target->perform_busy(busy);
		target->add_temp("apply/parry",pp);
		target->add_temp("apply/dodge",pd);	
		
		weapon = target->query_temp("weapon");
		if (target->query_temp("damaged_during_attack") 
			&& !target->query("boss") && !target->query("big_boss")
			&& target->query_temp("marks/disarmed") + 60 < time()
			&& weapon && !weapon->query("nodrop_weapon"))
		{
			if (random(me->query("combat_exp") + target->query("combat_exp")) > target->query("combat_exp") / 2 * 3)
			{
				if (weapon->query("skill_type") != "throwing" 
					&& weapon->query("skill_type") != "ring" 
					&& weapon->query("skill_type") != "unarmed")
				{
					message_vision(HIB"$N���������ң���ǧ�����������Լ�����֮��������̾Ϣһ����������"+weapon->name()+HIB"����\n"NOR,target);
					if(weapon->unequip()) {
					buff =
						([
							"caster":me,
							"who":  target,
							"type":"disarmed",
							"att":"curse",
							"name":"������������λÿջ�",
							"buff1":"disarmed",
							"buff1_c":1,
							"time":  60,
							"buff_msg":" ",			
						]);
					ANNIE_D->buffup(buff);
					}
				}
				target->set_temp("marks/disarmed",time());
			}
		}
	}
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
