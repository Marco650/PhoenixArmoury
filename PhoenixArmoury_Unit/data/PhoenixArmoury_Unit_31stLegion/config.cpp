class CfgPatches
{
	class PhoenixArmoury_Unit_31stLegion
	{
		author="Marco";
		name="Phoenix Armoury 31st";
		url = "https://discord.gg/sM7krRhPmh";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneArmor2",
			"PhoenixCore",
		};
		units[]=
		{
			"PhoenixArmoury_Unit_31stLegion_Backpack",
			"PhoenixArmoury_Unit_31stLegion_Backpack_EOD",
			"PhoenixArmoury_Unit_31stLegion_Backpack_Medic",
			"PhoenixArmoury_Unit_31stLegion_Trooper",
			"PhoenixArmoury_Unit_31stLegion_EOD",
			"PhoenixArmoury_Unit_31stLegion_Medic",
			"PhoenixArmoury_Unit_31stLegion_Officer",
		};
		weapons[]=
		{
			"PhoenixArmoury_Unit_31stLegion_NVG",
			"PhoenixArmoury_Unit_31stLegion_NVG_Rangefinder",
			"PhoenixArmoury_Unit_31stLegion_NVG_Officer",   
			"PhoenixArmoury_Unit_31stLegion_NVG_Commander", 
			"PhoenixArmoury_Unit_31stLegion_Trooper_Helmet",
			"PhoenixArmoury_Unit_31stLegion_EOD_Helmet",
			"PhoenixArmoury_Unit_31stLegion_Medic_Helmet",
			"PhoenixArmoury_Unit_31stLegion_Trooper_Vest",
			"PhoenixArmoury_Unit_31stLegion_Kama_Vest",
			"PhoenixArmoury_Unit_31stLegion_Officer_Vest",
			"PhoenixArmoury_Unit_31stLegion_Lieutenant_Vest",
			"PhoenixArmoury_Unit_31stLegion_Trooper_Uniform",
			"PhoenixArmoury_Unit_31stLegion_EOD_Uniform",
			"PhoenixArmoury_Unit_31stLegion_Medic_Uniform",
		};
	};
};	
class CfgWeapons
{
	class UniformItem;
	class VestItem;
	class HeadgearItem;
	class JLTS_CloneNVG;
	class JLTS_CloneNVGRange;
	class JLTS_CloneNVGCC;
	class JLTS_CloneNVGMC;
	class JLTS_CloneArmor;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneVestHolster;
	class JLTS_CloneVestRecon;
	class JLTS_CloneVestOfficer;
	class JLTS_CloneVestKama;
	class JLTS_CloneVestLieutenant;


	class PhoenixArmoury_Unit_31stLegion_NVG: JLTS_CloneNVG
	{	
		author="Marco";
		displayName="Clone Trooper NVG [31st]";
		modelOptics="PhoenixCore\data\NVG\PhoenixCore_NVG_Proxy.p3d";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_NVG_Co.paa"
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class PhoenixArmoury_Unit_31stLegion_NVG_Rangefinder: JLTS_CloneNVGRange
	{
		author="Marco";
		displayName="Clone Rangefinder NVG [31st]";
		modelOptics="PhoenixCore\data\NVG\PhoenixCore_NVG_Proxy.p3d";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_NVG_Rangefinder_Co.paa"
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class PhoenixArmoury_Unit_31stLegion_NVG_Officer: JLTS_CloneNVGCC
	{
		author="Marco";
		displayName="Clone Officer NVG [31st]";
		modelOptics="PhoenixCore\data\NVG\PhoenixCore_NVG_Proxy.p3d";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_NVG_Officer_Co.paa"
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class PhoenixArmoury_Unit_31stLegion_NVG_Commander: JLTS_CloneNVGMC
	{
		author="Marco";
		displayName="Clone Commander NVG [31st]";
		modelOptics="PhoenixCore\data\NVG\PhoenixCore_NVG_Proxy.p3d";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_NVG_Officer_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_NVG_Officer_Co.paa",
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class PhoenixArmoury_Unit_31stLegion_Trooper_Helmet: JLTS_CloneHelmetP2
	{
		author="Marco";
		displayName="Clone Trooper Helmet [31st]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_Trooper_Helmet_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_31stLegion_EOD_Helmet: JLTS_CloneHelmetP2
	{
		author="Marco";
		displayName="Clone EOD Helmet [31st]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_EOD_Helmet_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_31stLegion_Medic_Helmet: JLTS_CloneHelmetP2
	{
		author="Marco";
		displayName="Clone Medic Helmet [31st]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_Medic_Helmet_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_31stLegion_Trooper_Vest: JLTS_CloneVestHolster
	{
		author="Marco";
		displayName="Clone Trooper Vest [31st]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_Officer_Vest_Co.paa"
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
	class PhoenixArmoury_Unit_31stLegion_Kama_Vest: JLTS_CloneVestKama
	{
		author="Marco";
		displayName="Clone Kama vest [31st]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_Officer_Vest_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_31stLegion_Officer_Vest: JLTS_CloneVestOfficer
	{
		author="Marco";
		displayName="Clone Officer vest [31st])";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_Officer_Vest_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_31stLegion_Lieutenant_Vest: JLTS_CloneVestLieutenant
	{
		author="Marco";
		displayName="Clone Lieutenant vest [31st]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_Officer_Vest_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_31stLegion_Trooper_Uniform: JLTS_CloneArmor
	{
	    author="Marco";
		displayName="Clone Trooper Uniform [31st]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_31stLegion_Trooper";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_31stLegion_EOD_Uniform: JLTS_CloneArmor
	{
	    author="Marco";
		displayName="Clone EOD Uniform [31st]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_31stLegion_EOD";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_31stLegion_Medic_Uniform: JLTS_CloneArmor
	{
	    author="Marco";
		displayName="Clone Medic Uniform [31st]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_31stLegion_Medic";
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


	class PhoenixArmoury_Unit_31stLegion_Backpack: JLTS_Clone_backpack
	{
		author="Marco";
		displayname="Clone Backpack [31st]";
		hiddenselectionstextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_Backpack_Co.paa",
		};
	};
	class PhoenixArmoury_Unit_31stLegion_Backpack_EOD: JLTS_Clone_backpack
	{
		author="Marco";
		displayname="Clone EOD Backpack [31st]";
		hiddenselectionstextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_Backpack_EOD_Co.paa",
		};
	};
	class PhoenixArmoury_Unit_31stLegion_Backpack_Medic: JLTS_Clone_backpack
	{
		author="Marco";
		displayname="Clone Medical Backpack [31st]";
		hiddenselectionstextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_Backpack_Medic_Co.paa",
		};
	};
	class PhoenixArmoury_Unit_31stLegion_Trooper: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="Clone Trooper";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_31stLegion_Sub";
		backpack="PhoenixArmoury_Unit_31stLegion_Backpack";
		uniformclass="PhoenixArmoury_Unit_31stLegion_Trooper_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_Trooper_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_Trooper_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_31stLegion_Trooper_Helmet",
			"PhoenixArmoury_Unit_31stLegion_Trooper_Vest",
			"PhoenixArmoury_Unit_31stLegion_NVG",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_31stLegion_Trooper_Helmet",
			"PhoenixArmoury_Unit_31stLegion_Trooper_Vest",
			"PhoenixArmoury_Unit_31stLegion_NVG",
		};
	};
	class PhoenixArmoury_Unit_31stLegion_EOD: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="Clone EOD";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_31stLegion_Sub";
		backpack="PhoenixArmoury_Unit_31stLegion_Backpack_EOD";
		uniformclass="PhoenixArmoury_Unit_31stLegion_EOD_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_EOD_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_EOD_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_31stLegion_EOD_Helmet",
			"PhoenixArmoury_Unit_31stLegion_Trooper_Vest",
			"PhoenixArmoury_Unit_31stLegion_NVG",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_31stLegion_EOD_Helmet",
			"PhoenixArmoury_Unit_31stLegion_Trooper_Vest",
			"PhoenixArmoury_Unit_31stLegion_NVG",
		};
	};
	class PhoenixArmoury_Unit_31stLegion_Medic: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="Clone Medic";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_31stLegion_Sub";
		backpack="PhoenixArmoury_Unit_31stLegion_Backpack_Medic";
		uniformclass="PhoenixArmoury_Unit_31stLegion_Medic_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_Medic_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_31stLegion\PhoenixArmoury_Unit_31stLegion_Medic_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_31stLegion_Medic_Helmet",
			"PhoenixArmoury_Unit_31stLegion_Trooper_Vest",
			"PhoenixArmoury_Unit_31stLegion_NVG",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_31stLegion_Medic_Helmet",
			"PhoenixArmoury_Unit_31stLegion_Trooper_Vest",
			"PhoenixArmoury_Unit_31stLegion_NVG",
		};
	};
	class PhoenixArmoury_Unit_31stLegion_Officer: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="Clone Officer";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_31stLegion_Sub";
		backpack="PhoenixArmoury_Unit_31stLegion_Backpack";
		uniformclass="PhoenixArmoury_Unit_31stLegion_Trooper_Uniform";
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_31stLegion_Trooper_Helmet",
			"PhoenixArmoury_Unit_31stLegion_Officer_Vest",
			"PhoenixArmoury_Unit_31stLegion_NVG_Officer",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_31stLegion_Trooper_Helmet",
			"PhoenixArmoury_Unit_31stLegion_Officer_Vest",
			"PhoenixArmoury_Unit_31stLegion_NVG_Officer",
		};
	};
};