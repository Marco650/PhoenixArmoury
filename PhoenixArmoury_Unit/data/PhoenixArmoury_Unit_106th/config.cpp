class CfgPatches
{
	class PhoenixArmoury_Unit_106th
	{
		author="Marco";
		name="Phoenix Armoury 106th";
		url = "https://discord.gg/sM7krRhPmh";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneArmor2",
			"PhoenixCore",
		};
		units[]=
		{
			"PhoenixArmoury_Unit_106th_Backpack",
			"PhoenixArmoury_Unit_106th_Trooper",
		};
		weapons[]=
		{
			"PhoenixArmoury_Unit_106th_Trooper_Helmet",
			"PhoenixArmoury_Unit_106th_Trooper_Vest",
			"PhoenixArmoury_Unit_106th_Officer_Vest",
			"PhoenixArmoury_Unit_106th_Heavy_Vest",
			"PhoenixArmoury_Unit_106th_Airborne_Vest",
			"PhoenixArmoury_Unit_106th_Lieutenant_Vest",
			"PhoenixArmoury_Unit_106th_Suspender_Vest",
			"PhoenixArmoury_Unit_106th_Trooper_Uniform",
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
	class JLTS_CloneHelmetP2;
	class JLTS_CloneVestRecon;
	class JLTS_CloneVestOfficer;
	class JLTS_CloneVestAirborne;
	class JLTS_CloneVestLieutenant;
	class JLTS_CloneVestSuspender;


	class PhoenixArmoury_Unit_106th_Trooper_Helmet: JLTS_CloneHelmetP2
	{
		author="Marco";
		displayName="Clone Trooper Helmet [106th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_106th\PhoenixArmoury_Unit_106th_Trooper_Helmet_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_106th_Trooper_Vest: JLTS_CloneVestRecon
	{
		author="Marco";
		displayName="Clone Trooper Holster [106th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_106th\PhoenixArmoury_Unit_106th_Officer_Vest_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_106th_Officer_Vest: JLTS_CloneVestOfficer
	{
		author="Marco";
		displayName="Clone officer vest [106th])";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_106th\PhoenixArmoury_Unit_106th_Officer_Vest_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_106th_Heavy_Vest: JLTS_CloneVestAirborne
	{
		author="Marco";
		displayName="Clone heavy vest [106th]";
		hiddenSelectionsTextures[]=
		{
			
			"",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_106th\PhoenixArmoury_Unit_106th_Heavy_Vest_Co.paa"
		};
	};	
	class PhoenixArmoury_Unit_106th_Airborne_Vest: JLTS_CloneVestAirborne
	{
		author="Marco";
		displayName="Clone heavy vest with kama [106th]";
		hiddenSelectionsTextures[]=
		{
			
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_106th\PhoenixArmoury_Unit_106th_Officer_Vest_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_106th\PhoenixArmoury_Unit_106th_Heavy_Vest_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_106th_Lieutenant_Vest: JLTS_CloneVestLieutenant
	{
		author="Marco";
		displayName="Clone lieutenant vest [106th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_106th\PhoenixArmoury_Unit_106th_Officer_Vest_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_106th_Suspender_Vest: JLTS_CloneVestSuspender
	{
		author="Marco";
		displayName="Clone suspender vest [106th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_106th\PhoenixArmoury_Unit_106th_Suspender_Vest_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_106th_Trooper_Uniform: JLTS_CloneArmor
	{
	    author="Marco";
		displayName="Clone Trooper Uniform [106th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_106th_Trooper";
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


	class PhoenixArmoury_Unit_106th_Backpack: JLTS_Clone_backpack
	{
		author="Marco";
		displayname="Clone Backpack [106th]";
		hiddenselectionstextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_106th\PhoenixArmoury_Unit_106th_Backpack_Co.paa",
		};
	};
	class PhoenixArmoury_Unit_106th_Trooper: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="Clone Trooper";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_106th_Sub";
		backpack="PhoenixArmoury_Unit_106th_Backpack";
		uniformclass="PhoenixArmoury_Unit_106th_Trooper_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_106th\PhoenixArmoury_Unit_106th_Trooper_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_106th\PhoenixArmoury_Unit_106th_Trooper_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_106th_Trooper_Helmet",
			"PhoenixArmoury_Unit_106th_Trooper_Vest",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_106th_Trooper_Helmet",
			"PhoenixArmoury_Unit_106th_Trooper_Vest",
		};
	};
};