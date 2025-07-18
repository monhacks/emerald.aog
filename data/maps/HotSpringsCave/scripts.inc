HotSpringsCave_MapScripts::
	.byte 0


HotspringsCave_Nature_Maniac_Shop::
# 6 "data/maps/HotSpringsCave/scripts.pory"
	lock
# 7 "data/maps/HotSpringsCave/scripts.pory"
	faceplayer
# 8 "data/maps/HotSpringsCave/scripts.pory"
	msgbox NatureManiacIntro
# 9 "data/maps/HotSpringsCave/scripts.pory"
	waitmessage
# 10 "data/maps/HotSpringsCave/scripts.pory"
	pokemart HotSpringsCave_Pokemart_NatureManiac
# 11 "data/maps/HotSpringsCave/scripts.pory"
	msgbox NatureManiacOutro
# 12 "data/maps/HotSpringsCave/scripts.pory"
	release
	end


HotSpringsCave_Girl_3::
# 17 "data/maps/HotSpringsCave/scripts.pory"
	lock
# 18 "data/maps/HotSpringsCave/scripts.pory"
	faceplayer
# 19 "data/maps/HotSpringsCave/scripts.pory"
	msgbox Girl3Text
# 20 "data/maps/HotSpringsCave/scripts.pory"
	release
	end


# 24 "data/maps/HotSpringsCave/scripts.pory"

# 25 "data/maps/HotSpringsCave/scripts.pory"

# 26 "data/maps/HotSpringsCave/scripts.pory"
.align 2
# 27 "data/maps/HotSpringsCave/scripts.pory"
HotSpringsCave_Pokemart_NatureManiac::
# 28 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 29 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 30 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 31 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 32 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 33 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 34 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 35 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_LAX_MINT
# 36 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 37 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 38 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_MILD_MINT
# 39 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_RASH_MINT
# 40 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 41 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_CALM_MINT
# 42 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 43 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 44 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 45 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 46 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 47 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 48 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 49 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_NONE
# 50 "data/maps/HotSpringsCave/scripts.pory"
	release
# 51 "data/maps/HotSpringsCave/scripts.pory"
	end

HotSpring_Tutor::
# 69 "data/maps/HotSpringsCave/scripts.pory"
	lock
# 70 "data/maps/HotSpringsCave/scripts.pory"
	faceplayer
# 71 "data/maps/HotSpringsCave/scripts.pory"
	release
# 72 "data/maps/HotSpringsCave/scripts.pory"
	msgbox MoveTutor_Text_HotSpring_Tutor_Intro, MSGBOX_DEFAULT
# 73 "data/maps/HotSpringsCave/scripts.pory"
	waitmessage
# 74 "data/maps/HotSpringsCave/scripts.pory"
	call MoveTutor_EventScript_HotSpring_Tutor
# 75 "data/maps/HotSpringsCave/scripts.pory"
	msgbox MoveTutor_Text_HotSpring_Tutor_Outro2
# 76 "data/maps/HotSpringsCave/scripts.pory"
	release
	return


MoveTutor_EventScript_HotSpring_Tutor_Exit::
# 80 "data/maps/HotSpringsCave/scripts.pory"
	msgbox MoveTutor_Text_HotSpring_Tutor_Outro, MSGBOX_DEFAULT
# 81 "data/maps/HotSpringsCave/scripts.pory"
	release
	end


NatureManiacIntro::
# 54 "data/maps/HotSpringsCave/scripts.pory"
	.string "Kehehe. I'm the Nature Maniac. My mints\n"
	.string "will change the nature of your POKéMON!$"

NatureManiacOutro::
# 59 "data/maps/HotSpringsCave/scripts.pory"
	.string "Kehehe. A pleasure doing business.$"

Girl3Text::
# 63 "data/maps/HotSpringsCave/scripts.pory"
	.string "Apparently Flannery trains here when\n"
	.string "she isn't busy at her Gym.$"

MoveTutor_Text_HotSpring_Tutor_Intro::
# 85 "data/maps/HotSpringsCave/scripts.pory"
	.string "Hello, dear. I come down to this cave to\n"
	.string "train my body and spirit. I can also teach\p"
	.string "your POKéMON moves if you'd like.$"

MoveTutor_Text_HotSpring_Tutor_Select::
# 91 "data/maps/HotSpringsCave/scripts.pory"
	.string "What move would you like to learn?$"

MoveTutor_Text_HotSpring_Tutor_Outro::
# 95 "data/maps/HotSpringsCave/scripts.pory"
	.string "Perhaps another time, then?$"

MoveTutor_Text_HotSpring_Tutor_Outro2::
# 99 "data/maps/HotSpringsCave/scripts.pory"
	.string "Come back anytime, dearie!$"
