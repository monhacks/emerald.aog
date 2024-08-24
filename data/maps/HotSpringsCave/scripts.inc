HotSpringsCave_MapScripts::
	.byte 0


HotspringsCave_Nature_Maniac_Shop::
# 6 "data/maps/HotSpringsCave/scripts.pory"
	lock
# 7 "data/maps/HotSpringsCave/scripts.pory"
	faceplayer
# 8 "data/maps/HotSpringsCave/scripts.pory"
	message NatureManiacIntro
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
	message Girl3Text
	end


# 21 "data/maps/HotSpringsCave/scripts.pory"

# 22 "data/maps/HotSpringsCave/scripts.pory"

# 23 "data/maps/HotSpringsCave/scripts.pory"
.align 2
# 24 "data/maps/HotSpringsCave/scripts.pory"
HotSpringsCave_Pokemart_NatureManiac::
# 25 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 26 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 27 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 28 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 29 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 30 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 31 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 32 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_LAX_MINT
# 33 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 34 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 35 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_MILD_MINT
# 36 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_RASH_MINT
# 37 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 38 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_CALM_MINT
# 39 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 40 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 41 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 42 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 43 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 44 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 45 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 46 "data/maps/HotSpringsCave/scripts.pory"
	.2byte ITEM_NONE
# 47 "data/maps/HotSpringsCave/scripts.pory"
	release
# 48 "data/maps/HotSpringsCave/scripts.pory"
	end

HotSpring_Tutor::
# 66 "data/maps/HotSpringsCave/scripts.pory"
	faceplayer
# 67 "data/maps/HotSpringsCave/scripts.pory"
	lock
# 68 "data/maps/HotSpringsCave/scripts.pory"
	msgbox MoveTutor_Text_HotSpring_Tutor_Intro, MSGBOX_DEFAULT
# 69 "data/maps/HotSpringsCave/scripts.pory"
	waitmessage
# 70 "data/maps/HotSpringsCave/scripts.pory"
	call MoveTutor_EventScript_HotSpring_Tutor
# 71 "data/maps/HotSpringsCave/scripts.pory"
	msgbox MoveTutor_Text_HotSpring_Tutor_Outro2
# 72 "data/maps/HotSpringsCave/scripts.pory"
	release
	return


MoveTutor_EventScript_HotSpring_Tutor_Exit::
# 76 "data/maps/HotSpringsCave/scripts.pory"
	msgbox MoveTutor_Text_HotSpring_Tutor_Outro, MSGBOX_DEFAULT
# 77 "data/maps/HotSpringsCave/scripts.pory"
	release
	end


NatureManiacIntro::
# 51 "data/maps/HotSpringsCave/scripts.pory"
	.string "Kehehe. I'm the Nature Maniac. My mints\n"
	.string "will change the nature of your POKéMON!$"

NatureManiacOutro::
# 56 "data/maps/HotSpringsCave/scripts.pory"
	.string "Kehehe. A pleasure doing business.$"

Girl3Text::
# 60 "data/maps/HotSpringsCave/scripts.pory"
	.string "Apparently Flannery trains here when\n"
	.string "she isn't busy at her Gym.$"

MoveTutor_Text_HotSpring_Tutor_Intro::
# 81 "data/maps/HotSpringsCave/scripts.pory"
	.string "Hello, dear. I come down to this cave to\n"
	.string "train my body and spirit. I can also teach\n"
	.string "your POKéMON moves if you'd like.$"

MoveTutor_Text_HotSpring_Tutor_Select::
# 87 "data/maps/HotSpringsCave/scripts.pory"
	.string "What move would you like to learn?$"

MoveTutor_Text_HotSpring_Tutor_Outro::
# 91 "data/maps/HotSpringsCave/scripts.pory"
	.string "Perhaps another time, then?$"

MoveTutor_Text_HotSpring_Tutor_Outro2::
# 95 "data/maps/HotSpringsCave/scripts.pory"
	.string "Come back anytime, dearie!$"
