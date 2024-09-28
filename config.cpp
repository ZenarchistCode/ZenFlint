class CfgPatches
{
	class ZenFlint
	{
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};

class CfgMods
{
	class ZenFlint
	{
		dir = "ZenFlint";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ZenFlint";
		credits = "";
		author = "Zenarchist";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = { "Game","World","Mission" };
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = { "ZenFlint/scripts/3_game" };
			};
			class worldScriptModule
			{
				value = "";
				files[] = { "ZenFlint/scripts/4_world" };
			};
			class missionScriptModule
			{
				value = "";
				files[] = { "ZenFlint/scripts/5_mission" };
			};
		};
	};
};

class CfgVehicles
{
	//! FLINT
	class Inventory_Base;
	class ZenFlint : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ZenFlint0";
		descriptionShort = "$STR_CfgVehicles_ZenFlint1";
		model = "\ZenFlint\data\models\Flint\flint.p3d";
		animClass = "Knife";
		rotationFlags = 34;
		stackedUnit = "percentage";
		weight = 200;
		itemSize[] = { 1,2 };
		quantityBar = 1;
		varQuantityInit = 100;
		varQuantityMin = 0;
		varQuantityMax = 100;
		absorbency = 0;
		hiddenSelections[] = { "flint" };
		hiddenSelectionsTextures[] = { "ZenFlint\data\textures\flint\flintandsteel_co.paa" };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] =
					{

						{
							1,

							{
								"ZenFlint\data\textures\flint\flint.rvmat"
							}
						},

						{
							0.69999999,

							{
								"ZenFlint\data\textures\flint\flint.rvmat"
							}
						},

						{
							0.5,

							{
								"ZenFlint\data\textures\flint\flint_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"ZenFlint\data\textures\flint\flint_damage.rvmat"
							}
						},

						{
							0,

							{
								"ZenFlint\data\textures\flint\flint_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet = "sewingkit_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "sewingkit_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};

class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class Zen_FlintStrike_loop_Soundshader : baseCharacter_SoundShader
	{
		samples[] =
		{
			{ "ZenFlint\data\sounds\Flint\flint1", 1 },
			{ "ZenFlint\data\sounds\Flint\flint2", 1 }
		};
		volume = 0.5;
	};
};

class CfgSoundSets
{
	class baseCharacter_SoundSet;
	class Zen_FlintStrike_loop_SoundSet : baseCharacter_SoundSet
	{
		soundShaders[] = { "Zen_FlintStrike_loop_Soundshader" };
	};
};

class CfgSoundTables
{
	class CfgActionsSoundTables
	{
		class Craft_LookupTable
		{
			class Zen_FlintStrike_loop
			{
				category = "Zen_FlintStrike";
				soundSets[] = { "Zen_FlintStrike_loop_SoundSet" };
			};
		};
	};
};