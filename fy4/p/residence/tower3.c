

inherit __DIR__"ann_residence.c";

void create ()
{
  set("floor",3);

  set ("short", "非天塔"+CHINESE_D->chinese_number(query("floor"))+"层");
  set ("long", @LONG

这世上不但有肝胆相照的朋友，也有肝胆相照的仇敌。
仇敌与朋友间的分别，就正如生与死之间的分别。

LONG);
        set("exits", ([
  "down" : __DIR__"tower"+(query("floor")-1),
  "up" : __DIR__"tower"+(query("floor")+1), 
]));
  	set("coor/x",-10);
	set("coor/y",-40);
	set("coor/z",query("floor")*40);
	setup();
}

/*
 
               (\~~~/)            
               ( ．．)        

               (_____)~．      
   
　　　　　　　- FengYun - 　　　
　　　　　　annie 10.2003
　　　dancing_faery@hotmail.com
*/
