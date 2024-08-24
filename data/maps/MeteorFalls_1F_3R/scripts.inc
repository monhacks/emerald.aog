MeteorFalls_1F_3R_MapScripts::
	.byte 0


MeteorFalls_1F_3R_EventScript_Grant_Battle::
# 6 "data/maps/MeteorFalls_1F_3R/scripts.pory"
	trainerbattle_single TRAINER_GRANT, GrantIntro, GrantOutro
# 7 "data/maps/MeteorFalls_1F_3R/scripts.pory"
	msgbox GrantBeaten, MSGBOX_AUTOCLOSE
# 8 "data/maps/MeteorFalls_1F_3R/scripts.pory"
	waitmessage
	end


GrantIntro::
# 13 "data/maps/MeteorFalls_1F_3R/scripts.pory"
	.string "I came here to hone my skills as a\n"
	.string "Dragon Tamer.\p"
	.string "Now let me show you my power!$"

GrantOutro::
# 19 "data/maps/MeteorFalls_1F_3R/scripts.pory"
	.string "...\n$"

GrantBeaten::
# 23 "data/maps/MeteorFalls_1F_3R/scripts.pory"
	.string "Not strong enough yet...$"
