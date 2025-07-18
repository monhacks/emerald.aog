DesertCave_MapScripts::
	.byte 0


DesertCave_Rock_Shop::
# 6 "data/maps/DesertCave/scripts.pory"
	lock
# 7 "data/maps/DesertCave/scripts.pory"
	faceplayer
# 8 "data/maps/DesertCave/scripts.pory"
	message RockShopIntro
# 9 "data/maps/DesertCave/scripts.pory"
	waitmessage
# 10 "data/maps/DesertCave/scripts.pory"
	pokemart DesertCave_Pokemart_RockShop
# 11 "data/maps/DesertCave/scripts.pory"
	msgbox RockShopOutro
# 12 "data/maps/DesertCave/scripts.pory"
	release
	end


# 25 "data/maps/DesertCave/scripts.pory"

# 26 "data/maps/DesertCave/scripts.pory"
.align 2
# 27 "data/maps/DesertCave/scripts.pory"
DesertCave_Pokemart_RockShop::
# 28 "data/maps/DesertCave/scripts.pory"
	.2byte ITEM_HARD_STONE
# 29 "data/maps/DesertCave/scripts.pory"
    .2byte ITEM_KINGS_ROCK
# 30 "data/maps/DesertCave/scripts.pory"
    .2byte ITEM_PRISM_SCALE
# 31 "data/maps/DesertCave/scripts.pory"
    .2byte ITEM_EVIOLITE
# 32 "data/maps/DesertCave/scripts.pory"
    .2byte ITEM_HEAT_ROCK
# 33 "data/maps/DesertCave/scripts.pory"
    .2byte ITEM_DAMP_ROCK
# 34 "data/maps/DesertCave/scripts.pory"
    .2byte ITEM_SMOOTH_ROCK
# 35 "data/maps/DesertCave/scripts.pory"
    .2byte ITEM_ICY_ROCK
# 36 "data/maps/DesertCave/scripts.pory"
	.2byte ITEM_NONE
# 37 "data/maps/DesertCave/scripts.pory"
	release
# 38 "data/maps/DesertCave/scripts.pory"
	end

RockShopIntro::
# 16 "data/maps/DesertCave/scripts.pory"
	.string "Ahoy! Would you be interested in buying\n"
	.string "some rare rocks and stones?$"

RockShopOutro::
# 21 "data/maps/DesertCave/scripts.pory"
	.string "I'll be here if you want to buy more.$"
