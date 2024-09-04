RoughCaveB2_MapScripts::
	.byte 0


RoughCaveB2_EventScript_AnelaceBattle::
# 6 "data/maps/RoughCaveB2/scripts.pory"
	trainerbattle_single TRAINER_ANELACE, AnelaceIntro, AnelaceOutro
# 7 "data/maps/RoughCaveB2/scripts.pory"
	msgbox AnelaceBeaten, MSGBOX_DEFAULT
# 8 "data/maps/RoughCaveB2/scripts.pory"
	waitmessage
	end


AnelaceIntro::
# 13 "data/maps/RoughCaveB2/scripts.pory"
	.string "Can you withstand the power of a\n"
	.string "snowstorm?$"

AnelaceOutro::
# 18 "data/maps/RoughCaveB2/scripts.pory"
	.string "What a chilling battle.$"

AnelaceBeaten::
# 22 "data/maps/RoughCaveB2/scripts.pory"
	.string "I thought I could hone my skills down\n"
	.string "here, but it might be a little too cold.$"
