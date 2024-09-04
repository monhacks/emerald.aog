RoughCave_MapScripts::
	.byte 0


RoughCave_EventScript_StarkBattle::
# 6 "data/maps/RoughCave/scripts.pory"
	trainerbattle_single TRAINER_STARK, StarkIntro, StarkOutro
# 7 "data/maps/RoughCave/scripts.pory"
	msgbox StarkBeaten, MSGBOX_AUTOCLOSE
# 8 "data/maps/RoughCave/scripts.pory"
	waitmessage
	end


StarkIntro::
# 13 "data/maps/RoughCave/scripts.pory"
	.string "YEEEEEEEAAAARGH!$"

StarkOutro::
# 17 "data/maps/RoughCave/scripts.pory"
	.string "Huff…Huff…I need to…catch…my breath…$"

StarkBeaten::
# 21 "data/maps/RoughCave/scripts.pory"
	.string "Sorry. It's just so dark in here that\n"
	.string "you startled me.$"
