DewfordMasionRoom_MapScripts::
	.byte 0


DewfordMasionRoom_Eventscript_PhoebeLeave::
# 6 "data/maps/DewfordMasionRoom/scripts.pory"
	lock
# 7 "data/maps/DewfordMasionRoom/scripts.pory"
	msgbox PhoebeTalkingToSelf, MSGBOX_AUTOCLOSE
# 8 "data/maps/DewfordMasionRoom/scripts.pory"
	waitmessage
# 9 "data/maps/DewfordMasionRoom/scripts.pory"
	applymovement 1, PhoebeExclamation
# 10 "data/maps/DewfordMasionRoom/scripts.pory"
	playse SE_PIN
# 11 "data/maps/DewfordMasionRoom/scripts.pory"
	waitmovement 0
# 12 "data/maps/DewfordMasionRoom/scripts.pory"
	delay 10
# 13 "data/maps/DewfordMasionRoom/scripts.pory"
	faceplayer
# 14 "data/maps/DewfordMasionRoom/scripts.pory"
	msgbox PhoebeTalkingToPlayer, MSGBOX_AUTOCLOSE
# 15 "data/maps/DewfordMasionRoom/scripts.pory"
	waitmessage
# 16 "data/maps/DewfordMasionRoom/scripts.pory"
	setflag FLAG_HIDE_PHOEBE_MANOR
# 17 "data/maps/DewfordMasionRoom/scripts.pory"
	delay 30
# 18 "data/maps/DewfordMasionRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 19 "data/maps/DewfordMasionRoom/scripts.pory"
	removeobject 1
# 20 "data/maps/DewfordMasionRoom/scripts.pory"
	delay 20
# 21 "data/maps/DewfordMasionRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 22 "data/maps/DewfordMasionRoom/scripts.pory"
	release
	end


# 44 "data/maps/DewfordMasionRoom/scripts.pory"
PhoebeExclamation:
# 45 "data/maps/DewfordMasionRoom/scripts.pory"
	emote_exclamation_mark
	step_end

PhoebeTalkingToSelf::
# 27 "data/maps/DewfordMasionRoom/scripts.pory"
	.string "Come on, PHOEBE. You used to be a\n"
	.string "member of the ELITE FOUR.\p"
	.string "Being a GYM LEADER shouldn't be a\n"
	.string "huge deal…$"

PhoebeTalkingToPlayer::
# 34 "data/maps/DewfordMasionRoom/scripts.pory"
	.string "Oh, Hello! I didn't think anyone else\n"
	.string "would be here.\p"
	.string "… … …\p"
	.string "Oh they're waiting for me at the GYM?\n"
	.string "Oops! I guess I didn't realize how long \l"
	.string "I was gone for. I'll head there right\l"
	.string "away!$"
