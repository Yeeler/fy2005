// feng.c

inherit NPC;
string lishi_kill(object);
void create()
{
    	set_name("�����",({"feng jiuyou","feng"}));
    	set("long","������»꣬��������\n");
    	set("nickname","��������");
    	set("gender","����");
    	set("age",42);
    
    	set("combat_exp",400000);  
    
    	set_skill("nine-moon-claw",100);
    	set_skill("force",100);
    	set_skill("demon-steps",100);
    	set_skill("unarmed",100);
    	set_skill("parry",150);
    	set_skill("dodge",150);
    
    	map_skill("dodge","demon-steps");
    	map_skill("unarmed","nine-moon-claw");
    
    	set("attitude", "heroism");
    	set("chat_chance_combat", 90);
    	set("chat_msg_combat", ({
        	 (: exert_function, "mihun" :),
         	(: lishi_kill(this_object()) :),
    	})  );
    
    
    	setup();
    	carry_object("/obj/armor/cloth")->wear();   
    
}
string lishi_kill(object feng)
{
	int i;
	object *enemy;
	object lishi;
	seteuid(getuid());
	lishi = present("li shi",environment());
    if (!objectp(lishi)) return "";
	
	message_vision("$N��ȣ�������ʿ���ڣ���\n", this_object() );
	enemy = feng->query_enemy();
	i = sizeof(enemy);
	while(i--) {
		if( enemy[i] && living(enemy[i]) ) {
			lishi->kill_ob(enemy[i]);
			enemy[i]->kill_ob(lishi);
		}
	}
}
