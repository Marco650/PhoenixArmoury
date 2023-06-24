class CfgPatches
{
	class PhoenixArmoury_Unit_56thASR
	{
		author="Marco";
		name="Phoenix Armoury 56thASR";
		url = "https://discord.gg/sM7krRhPmh";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneArmor2",
			"PhoenixCore",
		};
		units[]=
		{
			"PhoenixArmoury_Unit_56thASR_Backpack",
			"PhoenixArmoury_Unit_56thASR_Trooper",
			"PhoenixArmoury_Unit_56thASR_Veteran",
			"PhoenixArmoury_Unit_56thASR_Corporal",
			"PhoenixArmoury_Unit_56thASR_Captain",
		};
		weapons[]=
		{
			"PhoenixArmoury_Unit_56thASR_Trooper_Helmet",
			"PhoenixArmoury_Unit_56thASR_Veteran_Helmet",
			"PhoenixArmoury_Unit_56thASR_Corporal_Helmet",
			"PhoenixArmoury_Unit_56thASR_Captain_Helmet",
			"PhoenixArmoury_Unit_56thASR_Trooper_Vest",
			"PhoenixArmoury_Unit_56thASR_Officer_Vest",
			"PhoenixArmoury_Unit_56thASR_Heavy_Vest",
			"PhoenixArmoury_Unit_56thASR_Airborne_Vest",
			"PhoenixArmoury_Unit_56thASR_Lieutenant_Vest",
			"PhoenixArmoury_Unit_56thASR_Suspender_Vest",
			"PhoenixArmoury_Unit_56thASR_Trooper_Uniform",
			"PhoenixArmoury_Unit_56thASR_Veteran_Uniform",
			"PhoenixArmoury_Unit_56thASR_Corporal_Uniform",
			"PhoenixArmoury_Unit_56thASR_Captain_Uniform",
		};
	};
};	
class CfgWeapons
{
	class UniformItem;
	class VestItem;
	class HeadgearItem;
	class JLTS_CloneNVGRange;
	class JLTS_CloneArmor;
	class PhoenixCore_P1_Helmet;
	class JLTS_CloneVestHolster;
	class JLTS_CloneVestOfficer;
	class JLTS_CloneVestAirborne;
	class JLTS_CloneVestLieutenant;
	class JLTS_CloneVestSuspender;


	class PhoenixArmoury_Unit_56thASR_Trooper_Helmet: PhoenixCore_P1_Helmet
	{
		author="Hando";
		displayName="Clone Trooper Helmet [56thASR]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Trooper_Helmet_co.paa"
		};
	};
	class PhoenixArmoury_Unit_56thASR_Veteran_Helmet: PhoenixCore_P1_Helmet
	{
		author="Hando";
		displayName="Clone Veteran Helmet [56thASR]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Veteran_Helmet_co.paa"
		};
	};
	class PhoenixArmoury_Unit_56thASR_Corporal_Helmet: PhoenixCore_P1_Helmet
	{
		author="Hando";
		displayName="Clone Corporal Helmet [56thASR]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Corporal_Helmet_co.paa"
		};
	};
	class PhoenixArmoury_Unit_56thASR_Captain_Helmet: PhoenixCore_P1_Helmet
	{
		author="Hando";
		displayName="Clone Captain Helmet [56thASR]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Captain_Helmet_co.paa"
		};
	};
	class PhoenixArmoury_Unit_56thASR_Trooper_Vest: JLTS_CloneVestHolster
	{
		author="Hando";
		displayName="Clone Trooper Holster (56thASR)";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Officer_Vest_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
			containerClass="Supply70";
			hiddenSelections[]=
			{
				"camo1",
			};
		};	
	};
	class PhoenixArmoury_Unit_56thASR_Officer_Vest: JLTS_CloneVestOfficer
	{
		author="Hando";
		displayName="Clone Officer Vest (56thASR)";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Officer_Vest_co.paa"
		};
	};
	class PhoenixArmoury_Unit_56thASR_Heavy_Vest: JLTS_CloneVestAirborne
	{
		author="Hando";
		displayName="Clone Heavy Vest (56thASR)";
		hiddenSelectionsTextures[]=
		{
			
			"",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Heavy_Vest_co.paa"
		};
	};	
	class PhoenixArmoury_Unit_56thASR_Airborne_Vest: JLTS_CloneVestAirborne
	{
		author="Hando";
		displayName="Clone Clone Heavy Vest with Kama (56thASR)";
		hiddenSelectionsTextures[]=
		{
			
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Officer_Vest_co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Heavy_Vest_co.paa"
		};
	};
	class PhoenixArmoury_Unit_56thASR_Lieutenant_Vest: JLTS_CloneVestLieutenant
	{
		author="Hando";
		displayName="Clone Lieutenant Vest (56thASR)";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Officer_Vest_co.paa"
		};
	};
	class PhoenixArmoury_Unit_56thASR_Suspender_Vest: JLTS_CloneVestSuspender
	{
		author="Hando";
		displayName="Clone Suspender Vest (56thASR)";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Suspender_Vest_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_56thASR_Trooper_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Clone Trooper Uniform [56thASR]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_56thASR_Trooper";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_56thASR_Veteran_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Clone Veteran Uniform [56thASR]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_56thASR_Veteran";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_56thASR_Corporal_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Clone Corporal Uniform [56thASR]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_56thASR_Corporal";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_56thASR_Captain_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Clone Captain Uniform [56thASR]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_56thASR_Captain";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
};
class CfgVehicles
{
    class JLTS_Clone_belt_bag;
	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_rto;
	class JLTS_Clone_P2_DC15A;


	class PhoenixArmoury_Unit_56thASR_Backpack: JLTS_Clone_backpack
	{
		author="Hando";
		displayname="Clone Backpack [56thASR]";
		hiddenselectionstextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Backpack_co.paa",
		};
	};
	class PhoenixArmoury_Unit_56thASR_Trooper: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Clone Trooper";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_56thASR_Sub";
		backpack="PhoenixArmoury_Unit_56thASR_Backpack";
		uniformclass="PhoenixArmoury_Unit_56thASR_Trooper_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Trooper_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Trooper_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_56thASR_Trooper_Helmet",
			"PhoenixArmoury_Unit_56thASR_Trooper_Vest",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_56thASR_Trooper_Helmet",
			"PhoenixArmoury_Unit_56thASR_Trooper_Vest",
		};
	};
	class PhoenixArmoury_Unit_56thASR_Veteran: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Clone Veteran";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_56thASR_Sub";
		backpack="PhoenixArmoury_Unit_56thASR_Backpack";
		uniformclass="PhoenixArmoury_Unit_56thASR_Veteran_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Veteran_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Veteran_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_56thASR_Veteran_Helmet",
			"PhoenixArmoury_Unit_56thASR_Heavy_Vest",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_56thASR_Veteran_Helmet",
			"PhoenixArmoury_Unit_56thASR_Heavy_Vest",
		};
	};
	class PhoenixArmoury_Unit_56thASR_Corporal: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Clone Corporal";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_56thASR_Sub";
		backpack="PhoenixArmoury_Unit_56thASR_Backpack";
		uniformclass="PhoenixArmoury_Unit_56thASR_Corporal_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Corporal_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Corporal_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_56thASR_Corporal_Helmet",
			"PhoenixArmoury_Unit_56thASR_Airborne_Vest",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_56thASR_Corporal_Helmet",
			"PhoenixArmoury_Unit_56thASR_Airborne_Vest",
		};
	};
	class PhoenixArmoury_Unit_56thASR_Captain: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Clone Captain";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_56thASR_Sub";
		backpack="PhoenixArmoury_Unit_56thASR_Backpack";
		uniformclass="PhoenixArmoury_Unit_56thASR_Captain_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Captain_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_56thASR\PhoenixArmoury_Unit_56thASR_Captain_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_56thASR_Captain_Helmet",
			"PhoenixArmoury_Unit_56thASR_Officer_Vest",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_56thASR_Captain_Helmet",
			"PhoenixArmoury_Unit_56thASR_Officer_Vest",
		};
	};
};