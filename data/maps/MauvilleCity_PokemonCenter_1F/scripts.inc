# 1 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 11 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx
# 13 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 14 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 15 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx::
# 16 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special SetMauvilleOldManObjEventGfx
# 17 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Nurse::
# 20 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 21 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 22 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 24 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
# 25 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman1::
# 28 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings, MSGBOX_NPC
# 29 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman2::
# 32 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner, MSGBOX_NPC
# 33 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Youngster::
# 36 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun, MSGBOX_NPC
# 37 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 38 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings:
# 40 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "That man over there, he says weird\n"
# 41 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "things!\p"
# 42 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "He's funny in a weird way.\n"
# 43 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I doubt I'll forget about him!$"
# 44 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner:
# 46 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "When I accessed the RECORD CORNER,\n"
# 47 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "the data for what's hot in DEWFORD\l"
# 48 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "got updated.\p"
# 49 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Now that bit of data is the same\n"
# 50 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "as my friend's!$"
# 51 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun:
# 53 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "A RECORD CORNER opened upstairs in\n"
# 54 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "the POKéMON CENTER.\p"
# 55 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I don't know what it's about, but it\n"
# 56 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "sounds fun. I'll go check it out!$"
# 57 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_EventScript_Poochyena::
# 59 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	lock
# 60 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 61 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitse
# 62 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 63 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_Poochyena, MSGBOX_DEFAULT
# 64 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 65 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
# 66 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 67 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 68 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_Poochyena:
# 69 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    .string "Bow...$"

Fang_Tutor::
# 73 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 74 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	lock
# 75 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MoveTutor_Text_Fang_Tutor_Intro, MSGBOX_DEFAULT
# 76 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 77 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Fang_Tutor_2
# 81 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call MoveTutor_EventScript_Fang_Tutor
Fang_Tutor_1:
# 83 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MoveTutor_Text_Fang_Tutor_Outro2
# 84 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
	return

Fang_Tutor_2:
# 78 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call MoveTutor_EventScript_Fang_Tutor_Badge5
	goto Fang_Tutor_1


MoveTutor_EventScript_Fang_Tutor_Exit::
# 90 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MoveTutor_Text_Fang_Tutor_Outro, MSGBOX_DEFAULT
# 91 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
	end


MoveTutor_Text_Fang_Tutor_Intro::
# 95 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Ah, hello! I'm what people call the Fang\n"
	.string "Tutor. I can teach your POKéMON various\p"
	.string "biting moves.$"

MoveTutor_Text_Fang_Tutor_select::
# 101 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "What move would you like to learn?$"

MoveTutor_Text_Fang_Tutor_Outro::
# 105 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Perhaps another time, then?$"

MoveTutor_Text_Fang_Tutor_Outro2::
# 109 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Come back anytime!$"
