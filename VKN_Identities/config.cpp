class CfgPatches
{
	class vkn_identities
	{
		author = "Jonmo";
		hideName = 0;
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_beta","A3_Characters_F_epa","A3_Characters_F_epb","A3_Characters_F_epc","A3_Characters_F_exp"};
	};
};
class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class Man_A3: Default
	{
		class Default;
		class WhiteHead_01;
		class AfricanHead_01;
		class AsianHead_A3_01;
		class GreekHead_A3_01;
		class TanoanHead_A3_01;
		class vkn_id_ves_A3: WhiteHead_01
		{
			displayname = "Ves";
			texture = "vkn_identities\data\id_ves_co.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Jonmo";
			material = "vkn_identities\data\id_ves.rvmat";
			disabled = 0;
			materialWounded1 = "A3\Characters_F_epb\Heads\Data\m_White_20_injury.rvmat";
			materialWounded2 = "A3\Characters_F_epb\Heads\Data\m_White_20_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
		class vkn_id_oleg_A3: WhiteHead_01
		{
			displayname = "Oleg";
			texture = "vkn_identities\data\id_oleg_co.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Jonmo";
			material = "vkn_identities\data\id_oleg.rvmat";
			disabled = 0;
			materialWounded1 = "A3\Characters_F_epb\Heads\Data\m_White_20_injury.rvmat";
			materialWounded2 = "A3\Characters_F_epb\Heads\Data\m_White_20_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
		class vkn_id_hammond_A3: WhiteHead_01
		{
			displayname = "Hammond";
			texture = "vkn_identities\data\id_hammond_co.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Jonmo";
			material = "vkn_identities\data\id_hammond.rvmat";
			disabled = 0;
			materialWounded1 = "A3\Characters_F_epb\Heads\Data\m_White_20_injury.rvmat";
			materialWounded2 = "A3\Characters_F_epb\Heads\Data\m_White_20_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
		class vkn_id_amir_A3: WhiteHead_01
		{
			displayname = "Amir";
			texture = "vkn_identities\data\id_amir_co.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Jonmo";
			material = "vkn_identities\data\id_amir.rvmat";
			disabled = 0;
			materialWounded1 = "A3\Characters_F_epb\Heads\Data\m_White_20_injury.rvmat";
			materialWounded2 = "A3\Characters_F_epb\Heads\Data\m_White_20_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
		class vkn_id_jake_A3: WhiteHead_01
		{
			displayname = "Jake";
			texture = "vkn_identities\data\id_Jake_co.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Jonmo";
			material = "vkn_identities\data\id_Jake.rvmat";
			disabled = 0;
			materialWounded1 = "A3\Characters_F_epb\Heads\Data\m_White_20_injury.rvmat";
			materialWounded2 = "A3\Characters_F_epb\Heads\Data\m_White_20_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
	};
};