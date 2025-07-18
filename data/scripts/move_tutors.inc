# 1 "data/scripts/move_tutors.pory"

# 2 "data/scripts/move_tutors.pory"
SlateportCity_PokemonFanClub_EventScript_SwaggerTutor::
# 3 "data/scripts/move_tutors.pory"
	lock
# 4 "data/scripts/move_tutors.pory"
	faceplayer
# 5 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SWAGGER, MoveTutor_EventScript_SwaggerTaught
# 6 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerTeach, MSGBOX_YESNO
# 7 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SwaggerDeclined
# 8 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 9 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SwaggerDeclined
# 10 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerWhichMon, MSGBOX_DEFAULT
# 11 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 12 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 13 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SwaggerDeclined
# 14 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_SWAGGER
# 15 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SwaggerTaught
# 16 "data/scripts/move_tutors.pory"
	end
# 17 "data/scripts/move_tutors.pory"

# 18 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_SwaggerDeclined::
# 19 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerDeclined, MSGBOX_DEFAULT
# 20 "data/scripts/move_tutors.pory"
	release
# 21 "data/scripts/move_tutors.pory"
	end
# 22 "data/scripts/move_tutors.pory"

# 23 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_SwaggerTaught::
# 24 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerTaught, MSGBOX_DEFAULT
# 25 "data/scripts/move_tutors.pory"
	release
# 26 "data/scripts/move_tutors.pory"
	end
# 27 "data/scripts/move_tutors.pory"

# 28 "data/scripts/move_tutors.pory"
MauvilleCity_EventScript_RolloutTutor::
# 29 "data/scripts/move_tutors.pory"
	lock
# 30 "data/scripts/move_tutors.pory"
	faceplayer
# 31 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT, MoveTutor_EventScript_RolloutTaught
# 32 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RolloutTeach, MSGBOX_YESNO
# 33 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RolloutDeclined
# 34 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 35 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RolloutDeclined
# 36 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RolloutWhichMon, MSGBOX_DEFAULT
# 37 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ROLLOUT
# 38 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 39 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_RolloutDeclined
# 40 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT
# 41 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_RolloutTaught
# 42 "data/scripts/move_tutors.pory"
	end
# 43 "data/scripts/move_tutors.pory"

# 44 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_RolloutDeclined::
# 45 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RolloutDeclined, MSGBOX_DEFAULT
# 46 "data/scripts/move_tutors.pory"
	release
# 47 "data/scripts/move_tutors.pory"
	end
# 48 "data/scripts/move_tutors.pory"

# 49 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_RolloutTaught::
# 50 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RolloutTaught, MSGBOX_DEFAULT
# 51 "data/scripts/move_tutors.pory"
	release
# 52 "data/scripts/move_tutors.pory"
	end
# 53 "data/scripts/move_tutors.pory"

# 54 "data/scripts/move_tutors.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_FuryCutterTutor::
# 55 "data/scripts/move_tutors.pory"
	lock
# 56 "data/scripts/move_tutors.pory"
	faceplayer
# 57 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER, MoveTutor_EventScript_FuryCutterTaught
# 58 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_FuryCutterTeach, MSGBOX_YESNO
# 59 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_FuryCutterDeclined
# 60 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 61 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_FuryCutterDeclined
# 62 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_FuryCutterWhichMon, MSGBOX_DEFAULT
# 63 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FURY_CUTTER
# 64 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 65 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_FuryCutterDeclined
# 66 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER
# 67 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_FuryCutterTaught
# 68 "data/scripts/move_tutors.pory"
	end
# 69 "data/scripts/move_tutors.pory"

# 70 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_FuryCutterDeclined::
# 71 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_FuryCutterDeclined, MSGBOX_DEFAULT
# 72 "data/scripts/move_tutors.pory"
	release
# 73 "data/scripts/move_tutors.pory"
	end
# 74 "data/scripts/move_tutors.pory"

# 75 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_FuryCutterTaught::
# 76 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_FuryCutterTaught, MSGBOX_DEFAULT
# 77 "data/scripts/move_tutors.pory"
	release
# 78 "data/scripts/move_tutors.pory"
	end
# 79 "data/scripts/move_tutors.pory"

# 80 "data/scripts/move_tutors.pory"
LavaridgeTown_House_EventScript_MimicTutor::
# 81 "data/scripts/move_tutors.pory"
	lock
# 82 "data/scripts/move_tutors.pory"
	faceplayer
# 83 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_MIMIC, MoveTutor_EventScript_MimicTaught
# 84 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_MimicTeach, MSGBOX_YESNO
# 85 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MimicDeclined
# 86 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 87 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MimicDeclined
# 88 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_MimicWhichMon, MSGBOX_DEFAULT
# 89 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MIMIC
# 90 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 91 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_MimicDeclined
# 92 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_MIMIC
# 93 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_MimicTaught
# 94 "data/scripts/move_tutors.pory"
	end
# 95 "data/scripts/move_tutors.pory"

# 96 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_MimicDeclined::
# 97 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_MimicDeclined, MSGBOX_DEFAULT
# 98 "data/scripts/move_tutors.pory"
	release
# 99 "data/scripts/move_tutors.pory"
	end
# 100 "data/scripts/move_tutors.pory"

# 101 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_MimicTaught::
# 102 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_MimicTaught, MSGBOX_DEFAULT
# 103 "data/scripts/move_tutors.pory"
	release
# 104 "data/scripts/move_tutors.pory"
	end
# 105 "data/scripts/move_tutors.pory"

# 106 "data/scripts/move_tutors.pory"
FallarborTown_Mart_EventScript_MetronomeTutor::
# 107 "data/scripts/move_tutors.pory"
	lock
# 108 "data/scripts/move_tutors.pory"
	faceplayer
# 109 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_METRONOME, MoveTutor_EventScript_MetronomeTaught
# 110 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_MetronomeTeach, MSGBOX_YESNO
# 111 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MetronomeDeclined
# 112 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 113 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MetronomeDeclined
# 114 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_MetronomeWhichMon, MSGBOX_DEFAULT
# 115 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_METRONOME
# 116 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 117 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_MetronomeDeclined
# 118 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_METRONOME
# 119 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_MetronomeTaught
# 120 "data/scripts/move_tutors.pory"
	end
# 121 "data/scripts/move_tutors.pory"

# 122 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_MetronomeDeclined::
# 123 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_MetronomeDeclined, MSGBOX_DEFAULT
# 124 "data/scripts/move_tutors.pory"
	release
# 125 "data/scripts/move_tutors.pory"
	end
# 126 "data/scripts/move_tutors.pory"

# 127 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_MetronomeTaught::
# 128 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_MetronomeTaught, MSGBOX_DEFAULT
# 129 "data/scripts/move_tutors.pory"
	release
# 130 "data/scripts/move_tutors.pory"
	end
# 131 "data/scripts/move_tutors.pory"

# 132 "data/scripts/move_tutors.pory"
FortreeCity_House2_EventScript_SleepTalkTutor::
# 133 "data/scripts/move_tutors.pory"
	lock
# 134 "data/scripts/move_tutors.pory"
	faceplayer
# 135 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK, MoveTutor_EventScript_SleepTalkTaught
# 136 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkTeach, MSGBOX_YESNO
# 137 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SleepTalkDeclined
# 138 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 139 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SleepTalkDeclined
# 140 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkWhichMon, MSGBOX_DEFAULT
# 141 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
# 142 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 143 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SleepTalkDeclined
# 144 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK
# 145 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SleepTalkTaught
# 146 "data/scripts/move_tutors.pory"
	end
# 147 "data/scripts/move_tutors.pory"

# 148 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_SleepTalkDeclined::
# 149 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkDeclined, MSGBOX_DEFAULT
# 150 "data/scripts/move_tutors.pory"
	release
# 151 "data/scripts/move_tutors.pory"
	end
# 152 "data/scripts/move_tutors.pory"

# 153 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_SleepTalkTaught::
# 154 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkTaught, MSGBOX_DEFAULT
# 155 "data/scripts/move_tutors.pory"
	release
# 156 "data/scripts/move_tutors.pory"
	end
# 157 "data/scripts/move_tutors.pory"

# 158 "data/scripts/move_tutors.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_SubstituteTutor::
# 159 "data/scripts/move_tutors.pory"
	lock
# 160 "data/scripts/move_tutors.pory"
	faceplayer
# 161 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE, MoveTutor_EventScript_SubstituteTaught
# 162 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SubstituteTeach, MSGBOX_YESNO
# 163 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SubstituteDeclined
# 164 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 165 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SubstituteDeclined
# 166 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SubstituteWhichMon, MSGBOX_DEFAULT
# 167 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SUBSTITUTE
# 168 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 169 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SubstituteDeclined
# 170 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE
# 171 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SubstituteTaught
# 172 "data/scripts/move_tutors.pory"
	end
# 173 "data/scripts/move_tutors.pory"

# 174 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_SubstituteDeclined::
# 175 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SubstituteDeclined, MSGBOX_DEFAULT
# 176 "data/scripts/move_tutors.pory"
	release
# 177 "data/scripts/move_tutors.pory"
	end
# 178 "data/scripts/move_tutors.pory"

# 179 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_SubstituteTaught::
# 180 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SubstituteTaught, MSGBOX_DEFAULT
# 181 "data/scripts/move_tutors.pory"
	release
# 182 "data/scripts/move_tutors.pory"
	end
# 183 "data/scripts/move_tutors.pory"

# 184 "data/scripts/move_tutors.pory"
MossdeepCity_EventScript_DynamicPunchTutor::
# 185 "data/scripts/move_tutors.pory"
	lock
# 186 "data/scripts/move_tutors.pory"
	faceplayer
# 187 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH, MoveTutor_EventScript_DynamicPunchTaught
# 188 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchTeach, MSGBOX_YESNO
# 189 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DynamicPunchDeclined
# 190 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 191 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DynamicPunchDeclined
# 192 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchWhichMon, MSGBOX_DEFAULT
# 193 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DYNAMIC_PUNCH
# 194 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 195 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DynamicPunchDeclined
# 196 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH
# 197 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_DynamicPunchTaught
# 198 "data/scripts/move_tutors.pory"
	end
# 199 "data/scripts/move_tutors.pory"

# 200 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_DynamicPunchDeclined::
# 201 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchDeclined, MSGBOX_DEFAULT
# 202 "data/scripts/move_tutors.pory"
	release
# 203 "data/scripts/move_tutors.pory"
	end
# 204 "data/scripts/move_tutors.pory"

# 205 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_DynamicPunchTaught::
# 206 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchTaught, MSGBOX_DEFAULT
# 207 "data/scripts/move_tutors.pory"
	release
# 208 "data/scripts/move_tutors.pory"
	end
# 209 "data/scripts/move_tutors.pory"

# 210 "data/scripts/move_tutors.pory"
SootopolisCity_PokemonCenter_1F_EventScript_DoubleEdgeTutor::
# 211 "data/scripts/move_tutors.pory"
	lock
# 212 "data/scripts/move_tutors.pory"
	faceplayer
# 213 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE, MoveTutor_EventScript_DoubleEdgeTaught
# 214 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DoubleEdgeTeach, MSGBOX_YESNO
# 215 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DoubleEdgeDeclined
# 216 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 217 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DoubleEdgeDeclined
# 218 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DoubleEdgeWhichMon, MSGBOX_DEFAULT
# 219 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
# 220 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 221 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DoubleEdgeDeclined
# 222 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE
# 223 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_DoubleEdgeTaught
# 224 "data/scripts/move_tutors.pory"
	end
# 225 "data/scripts/move_tutors.pory"

# 226 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_DoubleEdgeDeclined::
# 227 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DoubleEdgeDeclined, MSGBOX_DEFAULT
# 228 "data/scripts/move_tutors.pory"
	release
# 229 "data/scripts/move_tutors.pory"
	end
# 230 "data/scripts/move_tutors.pory"

# 231 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_DoubleEdgeTaught::
# 232 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DoubleEdgeTaught, MSGBOX_DEFAULT
# 233 "data/scripts/move_tutors.pory"
	release
# 234 "data/scripts/move_tutors.pory"
	end
# 235 "data/scripts/move_tutors.pory"

# 236 "data/scripts/move_tutors.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_ExplosionTutor::
# 237 "data/scripts/move_tutors.pory"
	lock
# 238 "data/scripts/move_tutors.pory"
	faceplayer
# 239 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION, MoveTutor_EventScript_ExplosionTaught
# 240 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ExplosionTeach, MSGBOX_YESNO
# 241 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclined
# 242 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 243 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclined
# 244 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ExplosionWhichMon, MSGBOX_DEFAULT
# 245 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_EXPLOSION
# 246 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 247 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_ExplosionDeclined
# 248 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION
# 249 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_ExplosionTaught
# 250 "data/scripts/move_tutors.pory"
	end
# 251 "data/scripts/move_tutors.pory"

# 252 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_ExplosionDeclined::
# 253 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ExplosionDeclined, MSGBOX_DEFAULT
# 254 "data/scripts/move_tutors.pory"
	release
# 255 "data/scripts/move_tutors.pory"
	end
# 256 "data/scripts/move_tutors.pory"

# 257 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_ExplosionTaught::
# 258 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ExplosionTaught, MSGBOX_DEFAULT
# 259 "data/scripts/move_tutors.pory"
	release
# 260 "data/scripts/move_tutors.pory"
	end
# 261 "data/scripts/move_tutors.pory"

# 262 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_OpenPartyMenu::
# 263 "data/scripts/move_tutors.pory"
	special ChooseMonForMoveTutor
# 264 "data/scripts/move_tutors.pory"
	waitstate
# 265 "data/scripts/move_tutors.pory"
	lock
# 266 "data/scripts/move_tutors.pory"
	faceplayer
# 267 "data/scripts/move_tutors.pory"
	return
# 268 "data/scripts/move_tutors.pory"

# 269 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_CanOnlyBeLearnedOnce::
# 270 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
# 271 "data/scripts/move_tutors.pory"
	return
# 272 "data/scripts/move_tutors.pory"

# 273 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_Exit::
# 274 "data/scripts/move_tutors.pory"
	release
# 275 "data/scripts/move_tutors.pory"
	end

MoveTutor_EventScript_Fang_Tutor::
# 279 "data/scripts/move_tutors.pory"
	lock
# 280 "data/scripts/move_tutors.pory"
	faceplayer
# 281 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_Fang_Tutor_select, MSGBOX_DEFAULT
# 282 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Text_0, 0
# 283 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Text_1, 1
# 284 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Text_2, 2
# 285 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Text_3, 3
# 286 "data/scripts/move_tutors.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 287 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 288 "data/scripts/move_tutors.pory"
	case 0, MoveTutor_EventScript_Fang_Tutor_2
# 291 "data/scripts/move_tutors.pory"
	case 1, MoveTutor_EventScript_Fang_Tutor_3
# 294 "data/scripts/move_tutors.pory"
	case 2, MoveTutor_EventScript_Fang_Tutor_4
# 297 "data/scripts/move_tutors.pory"
	case 3, MoveTutor_EventScript_Fang_Tutor_5
# 300 "data/scripts/move_tutors.pory"
	case MULTI_B_PRESSED, MoveTutor_EventScript_Fang_Tutor_6
	return

MoveTutor_EventScript_Fang_Tutor_2:
# 289 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
# 290 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_3:
# 292 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
# 293 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_4:
# 295 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
# 296 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_5:
# 298 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_POISON_FANG
# 299 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_6:
# 301 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_Fang_Tutor_Exit
	return


MoveTutor_EventScript_Fang_Tutor_Badge5::
# 306 "data/scripts/move_tutors.pory"
	lock
# 307 "data/scripts/move_tutors.pory"
	faceplayer
# 308 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_Fang_Tutor_select, MSGBOX_DEFAULT
# 309 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Text_0, 0
# 310 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Text_1, 1
# 311 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Text_2, 2
# 312 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Text_3, 3
# 313 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Badge5_Text_0, 4
# 314 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Badge5_Text_1, 5
# 315 "data/scripts/move_tutors.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 316 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 317 "data/scripts/move_tutors.pory"
	case 0, MoveTutor_EventScript_Fang_Tutor_Badge5_2
# 320 "data/scripts/move_tutors.pory"
	case 1, MoveTutor_EventScript_Fang_Tutor_Badge5_3
# 323 "data/scripts/move_tutors.pory"
	case 2, MoveTutor_EventScript_Fang_Tutor_Badge5_4
# 326 "data/scripts/move_tutors.pory"
	case 3, MoveTutor_EventScript_Fang_Tutor_Badge5_5
# 329 "data/scripts/move_tutors.pory"
	case 4, MoveTutor_EventScript_Fang_Tutor_Badge5_6
# 332 "data/scripts/move_tutors.pory"
	case 5, MoveTutor_EventScript_Fang_Tutor_Badge5_7
# 335 "data/scripts/move_tutors.pory"
	case MULTI_B_PRESSED, MoveTutor_EventScript_Fang_Tutor_Badge5_8
	return

MoveTutor_EventScript_Fang_Tutor_Badge5_2:
# 318 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
# 319 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_Badge5_3:
# 321 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
# 322 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_Badge5_4:
# 324 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
# 325 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_Badge5_5:
# 327 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_POISON_FANG
# 328 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_Badge5_6:
# 330 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_CRUNCH
# 331 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_Badge5_7:
# 333 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_FANGS
# 334 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_Badge5_8:
# 336 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_Fang_Tutor_Exit
	return


MoveTutor_EventScript_HotSpring_Tutor::
# 341 "data/scripts/move_tutors.pory"
	lock
# 342 "data/scripts/move_tutors.pory"
	faceplayer
# 343 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_Fang_Tutor_select, MSGBOX_DEFAULT
# 344 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_HotSpring_Tutor_Text_0, 0
# 345 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_HotSpring_Tutor_Text_1, 1
# 346 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_HotSpring_Tutor_Text_2, 2
# 347 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_HotSpring_Tutor_Text_3, 3
# 348 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_HotSpring_Tutor_Text_4, 4
# 349 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_HotSpring_Tutor_Text_5, 5
# 350 "data/scripts/move_tutors.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 351 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 352 "data/scripts/move_tutors.pory"
	case 0, MoveTutor_EventScript_HotSpring_Tutor_2
# 355 "data/scripts/move_tutors.pory"
	case 1, MoveTutor_EventScript_HotSpring_Tutor_3
# 358 "data/scripts/move_tutors.pory"
	case 2, MoveTutor_EventScript_HotSpring_Tutor_4
# 361 "data/scripts/move_tutors.pory"
	case 3, MoveTutor_EventScript_HotSpring_Tutor_5
# 364 "data/scripts/move_tutors.pory"
	case 4, MoveTutor_EventScript_HotSpring_Tutor_6
# 367 "data/scripts/move_tutors.pory"
	case 5, MoveTutor_EventScript_HotSpring_Tutor_7
# 370 "data/scripts/move_tutors.pory"
	case MULTI_B_PRESSED, MoveTutor_EventScript_HotSpring_Tutor_8
	return

MoveTutor_EventScript_HotSpring_Tutor_2:
# 353 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_TEMPER_FLARE
# 354 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_HotSpring_Tutor_3:
# 356 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
# 357 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_HotSpring_Tutor_4:
# 359 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SCORCHING_SANDS
# 360 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_HotSpring_Tutor_5:
# 362 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FLASH_CANNON
# 363 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_HotSpring_Tutor_6:
# 365 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_BURNING_JEALOUSY
# 366 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_HotSpring_Tutor_7:
# 368 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_HEX
# 369 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_HotSpring_Tutor_8:
# 371 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_HotSpring_Tutor_Exit
	return


MoveTutor_EventScript_Slash_Tutor::
# 376 "data/scripts/move_tutors.pory"
	lock
# 377 "data/scripts/move_tutors.pory"
	faceplayer
# 378 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_Slash_Tutor_Select, MSGBOX_DEFAULT
# 379 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slash_Tutor_Text_0, 0
# 380 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slash_Tutor_Text_1, 1
# 381 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slash_Tutor_Text_2, 2
# 382 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slash_Tutor_Text_3, 3
# 383 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slash_Tutor_Text_4, 4
# 384 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slash_Tutor_Text_5, 5
# 385 "data/scripts/move_tutors.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 386 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 387 "data/scripts/move_tutors.pory"
	case 0, MoveTutor_EventScript_Slash_Tutor_2
# 390 "data/scripts/move_tutors.pory"
	case 1, MoveTutor_EventScript_Slash_Tutor_3
# 393 "data/scripts/move_tutors.pory"
	case 2, MoveTutor_EventScript_Slash_Tutor_4
# 396 "data/scripts/move_tutors.pory"
	case 3, MoveTutor_EventScript_Slash_Tutor_5
# 399 "data/scripts/move_tutors.pory"
	case 4, MoveTutor_EventScript_Slash_Tutor_6
# 402 "data/scripts/move_tutors.pory"
	case 5, MoveTutor_EventScript_Slash_Tutor_7
# 405 "data/scripts/move_tutors.pory"
	case MULTI_B_PRESSED, MoveTutor_EventScript_Slash_Tutor_8
	return

MoveTutor_EventScript_Slash_Tutor_2:
# 388 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SLASH
# 389 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slash_Tutor_3:
# 391 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_NIGHT_SLASH
# 392 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slash_Tutor_4:
# 394 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_PSYCHO_CUT
# 395 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slash_Tutor_5:
# 397 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_RAZOR_SHELL
# 398 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slash_Tutor_6:
# 400 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_CROSS_POISON
# 401 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slash_Tutor_7:
# 403 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_X_SCISSOR
# 404 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slash_Tutor_8:
# 406 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_Slash_Tutor_Exit
	return


MoveTutor_EventScript_Dewford_Tutor1::
# 411 "data/scripts/move_tutors.pory"
	lock
# 412 "data/scripts/move_tutors.pory"
	faceplayer
# 413 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HotSpring_Tutor_Select, MSGBOX_DEFAULT
# 414 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor1_Text_0, 0
# 415 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor1_Text_1, 1
# 416 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor1_Text_2, 2
# 417 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor1_Text_3, 3
# 418 "data/scripts/move_tutors.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 419 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 420 "data/scripts/move_tutors.pory"
	case 0, MoveTutor_EventScript_Dewford_Tutor1_2
# 423 "data/scripts/move_tutors.pory"
	case 1, MoveTutor_EventScript_Dewford_Tutor1_3
# 426 "data/scripts/move_tutors.pory"
	case 2, MoveTutor_EventScript_Dewford_Tutor1_4
# 429 "data/scripts/move_tutors.pory"
	case 3, MoveTutor_EventScript_Dewford_Tutor1_5
# 432 "data/scripts/move_tutors.pory"
	case MULTI_B_PRESSED, MoveTutor_EventScript_Dewford_Tutor1_6
	return

MoveTutor_EventScript_Dewford_Tutor1_2:
# 421 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
# 422 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor1_3:
# 424 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SEISMIC_TOSS
# 425 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor1_4:
# 427 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FOCUS_ENERGY
# 428 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor1_5:
# 430 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
# 431 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor1_6:
# 433 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_Slash_Tutor_Exit
	return


MoveTutor_EventScript_Dewford_Tutor2::
# 438 "data/scripts/move_tutors.pory"
	lock
# 439 "data/scripts/move_tutors.pory"
	faceplayer
# 440 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HotSpring_Tutor_Select, MSGBOX_DEFAULT
# 441 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor1_Text_0, 0
# 442 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor1_Text_1, 1
# 443 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor1_Text_2, 2
# 444 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor1_Text_3, 3
# 445 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor2_Text_0, 4
# 446 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor2_Text_1, 5
# 447 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor2_Text_2, 6
# 448 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor2_Text_3, 7
# 449 "data/scripts/move_tutors.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 450 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 451 "data/scripts/move_tutors.pory"
	case 0, MoveTutor_EventScript_Dewford_Tutor2_2
# 454 "data/scripts/move_tutors.pory"
	case 1, MoveTutor_EventScript_Dewford_Tutor2_3
# 457 "data/scripts/move_tutors.pory"
	case 2, MoveTutor_EventScript_Dewford_Tutor2_4
# 460 "data/scripts/move_tutors.pory"
	case 3, MoveTutor_EventScript_Dewford_Tutor2_5
# 463 "data/scripts/move_tutors.pory"
	case 4, MoveTutor_EventScript_Dewford_Tutor2_6
# 466 "data/scripts/move_tutors.pory"
	case 5, MoveTutor_EventScript_Dewford_Tutor2_7
# 469 "data/scripts/move_tutors.pory"
	case 6, MoveTutor_EventScript_Dewford_Tutor2_8
# 472 "data/scripts/move_tutors.pory"
	case 7, MoveTutor_EventScript_Dewford_Tutor2_9
# 475 "data/scripts/move_tutors.pory"
	case MULTI_B_PRESSED, MoveTutor_EventScript_Dewford_Tutor2_10
	return

MoveTutor_EventScript_Dewford_Tutor2_2:
# 452 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
# 453 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor2_3:
# 455 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SEISMIC_TOSS
# 456 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor2_4:
# 458 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FOCUS_ENERGY
# 459 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor2_5:
# 461 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
# 462 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor2_6:
# 464 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_AURA_SPHERE
# 465 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor2_7:
# 467 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SUBMISSION
# 468 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor2_8:
# 470 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_BODY_SLAM
# 471 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor2_9:
# 473 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MEGA_KICK
# 474 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor2_10:
# 476 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_Slash_Tutor_Exit
	return


MoveTutor_EventScript_Fang_Tutor_Text_0:
# 282 "data/scripts/move_tutors.pory"
	.string "FIRE FANG$"

MoveTutor_EventScript_Fang_Tutor_Text_1:
# 283 "data/scripts/move_tutors.pory"
	.string "ICE FANG$"

MoveTutor_EventScript_Fang_Tutor_Text_2:
# 284 "data/scripts/move_tutors.pory"
	.string "THUNDER FANG$"

MoveTutor_EventScript_Fang_Tutor_Text_3:
# 285 "data/scripts/move_tutors.pory"
	.string "POISON FANG$"

MoveTutor_EventScript_Fang_Tutor_Badge5_Text_0:
# 313 "data/scripts/move_tutors.pory"
	.string "CRUNCH$"

MoveTutor_EventScript_Fang_Tutor_Badge5_Text_1:
# 314 "data/scripts/move_tutors.pory"
	.string "PSYCHIC FANGS$"

MoveTutor_EventScript_HotSpring_Tutor_Text_0:
# 344 "data/scripts/move_tutors.pory"
	.string "TEMPER FLARE$"

MoveTutor_EventScript_HotSpring_Tutor_Text_1:
# 345 "data/scripts/move_tutors.pory"
	.string "ICY WIND$"

MoveTutor_EventScript_HotSpring_Tutor_Text_2:
# 346 "data/scripts/move_tutors.pory"
	.string "SCORCHING SANDS$"

MoveTutor_EventScript_HotSpring_Tutor_Text_3:
# 347 "data/scripts/move_tutors.pory"
	.string "FLASH CANNON$"

MoveTutor_EventScript_HotSpring_Tutor_Text_4:
# 348 "data/scripts/move_tutors.pory"
	.string "BURNING JEALOUSY$"

MoveTutor_EventScript_HotSpring_Tutor_Text_5:
# 349 "data/scripts/move_tutors.pory"
	.string "HEX$"

MoveTutor_EventScript_Slash_Tutor_Text_0:
# 379 "data/scripts/move_tutors.pory"
	.string "SLASH$"

MoveTutor_EventScript_Slash_Tutor_Text_1:
# 380 "data/scripts/move_tutors.pory"
	.string "NIGHT SLASH$"

MoveTutor_EventScript_Slash_Tutor_Text_2:
# 381 "data/scripts/move_tutors.pory"
	.string "PSYCHO CUT$"

MoveTutor_EventScript_Slash_Tutor_Text_3:
# 382 "data/scripts/move_tutors.pory"
	.string "RAZOR SHELL$"

MoveTutor_EventScript_Slash_Tutor_Text_4:
# 383 "data/scripts/move_tutors.pory"
	.string "CROSS POISON$"

MoveTutor_EventScript_Slash_Tutor_Text_5:
# 384 "data/scripts/move_tutors.pory"
	.string "X-SCISSOR$"

MoveTutor_EventScript_Dewford_Tutor1_Text_0:
# 414 "data/scripts/move_tutors.pory"
	.string "LOW KICK$"

MoveTutor_EventScript_Dewford_Tutor1_Text_1:
# 415 "data/scripts/move_tutors.pory"
	.string "SEISMIC TOSS$"

MoveTutor_EventScript_Dewford_Tutor1_Text_2:
# 416 "data/scripts/move_tutors.pory"
	.string "FOCUS ENERGY$"

MoveTutor_EventScript_Dewford_Tutor1_Text_3:
# 417 "data/scripts/move_tutors.pory"
	.string "MEGA PUNCH$"

MoveTutor_EventScript_Dewford_Tutor2_Text_0:
# 445 "data/scripts/move_tutors.pory"
	.string "AURA SPHERE$"

MoveTutor_EventScript_Dewford_Tutor2_Text_1:
# 446 "data/scripts/move_tutors.pory"
	.string "SUBMISSION$"

MoveTutor_EventScript_Dewford_Tutor2_Text_2:
# 447 "data/scripts/move_tutors.pory"
	.string "BODY SLAM$"

MoveTutor_EventScript_Dewford_Tutor2_Text_3:
# 448 "data/scripts/move_tutors.pory"
	.string "MEGA KICK$"
