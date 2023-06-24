class CfgPatches
{
	class PhoenixArmoury_Freelancer
	{
		author="Marco";
		name="Phoenix Armoury Freelancer";
		url = "https://discord.gg/sM7krRhPmh";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneArmor2",
			"PhoenixCore",
		};
		units[]=
		{
			"PhoenixArmoury_Freelancer_King_Backpack",
			"PhoenixArmoury_Freelancer_King"
		};
		weapons[]=
		{
			"PhoenixArmoury_Freelancer_King_Helmet",
			"PhoenixArmoury_Freelancer_King_Vest",
			"PhoenixArmoury_Freelancer_King_Uniform"
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
	class JLTS_CloneHelmetBARC;
	class JLTS_CloneVestRecon;


	class PhoenixArmoury_Freelancer_King_Helmet: JLTS_CloneHelmetBARC
	{
		author="Marco";
		displayName="King's Helmet [PA]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Freelancer\data\PhoenixArmoury_Freelancer_King_Helmet_Co.paa"
		};
	};
	class PhoenixArmoury_Freelancer_King_Vest: JLTS_CloneVestRecon
	{
		author="Marco";
		displayName="King's Vest [PA]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Freelancer\data\PhoenixArmoury_Freelancer_King_Vest_Co.paa"
		};
	};
	class PhoenixArmoury_Freelancer_King_Uniform: JLTS_CloneArmor
	{
	    author="Marco";
		displayName="King's Armour [PA]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Freelancer_King";
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


	class PhoenixArmoury_Freelancer_King_Backpack: JLTS_Clone_backpack
	{
		author="Marco";
		displayname="King's Backpack [PA]";
		maximumload=300;
		hiddenselectionstextures[]=
		{
			"PhoenixArmoury_Freelancer\data\PhoenixArmoury_Freelancer_King_Backpack_Co.paa",
		};
	};	
	class PhoenixArmoury_Freelancer_King: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="Freelancer King";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Freelancer_Sub";
		backpack="PhoenixArmoury_Freelancer_King_Backpack";
		uniformclass="PhoenixArmoury_Freelancer_King_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Freelancer\data\PhoenixArmoury_Freelancer_King_Upper_Co.paa",
			"PhoenixArmoury_Freelancer\data\PhoenixArmoury_Freelancer_King_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Freelancer_King_Helmet",
			"PhoenixArmoury_Freelancer_King_Vest",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Freelancer_King_Helmet",
			"PhoenixArmoury_Freelancer_King_Vest",
		};
	};
};