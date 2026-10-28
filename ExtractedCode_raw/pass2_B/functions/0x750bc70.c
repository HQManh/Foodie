// rea decompile_all
// name: System.Globalization.TimeSpanParse$$ProcessTerminal_HMS_F_D
// address: 0x750bc70
// body: available
// range: 0x750bc70-0x750c6fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750bd40 to 0x752c730 System.Globalization.TimeSpanParse.TimeSpanResult$$SetFailure (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Globalization_TimeSpanParse__ProcessTerminal_HMS_F_D
                (long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 local_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  undefined8 local_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 local_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 local_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 local_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 local_8d0;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  if ((DAT_095216c7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0920efa0);
    FUN_03f5c2a4(&DAT_0920dc98);
    DAT_095216c7 = 1;
  }
  local_58 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if ((*(int *)(param_1 + 8) != 5) || ((param_2 >> 2 & 1) != 0)) {
    uVar4 = System_Globalization_TimeSpanParse_TimeSpanResult__SetFailure
                      (param_3,2,DAT_0920dc98,0,0,0);
    return uVar4;
  }
  uVar3 = param_2 & 0xff;
  local_58 = 0;
  System_Globalization_TimeSpanParse_TimeSpanToken___ctor(&local_80,0,0);
  if ((param_2 & 1) == 0) {
    if ((uVar3 >> 1 & 1) == 0) {
LAB_0750c6c0:
      uVar5 = 2;
      uVar6 = DAT_0920dc98;
    }
    else {
      uVar1 = 0;
LAB_0750c2bc:
      System_Globalization_TimeSpanParse_TimeSpanRawInfo__get_PositiveLocalized
                (&local_588,param_1,0);
      uStack_5a8 = uStack_580;
      local_5b0 = local_588;
      uStack_598 = uStack_570;
      local_5a0 = uStack_578;
      local_590 = local_568;
      uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullHMSFMatch
                        (param_1,&local_5b0,0);
      if ((uVar4 & 1) != 0) {
        uStack_5e8 = *(undefined8 *)(param_1 + 0x80);
        local_5f0 = *(undefined8 *)(param_1 + 0x78);
        uStack_5c8 = uStack_78;
        local_5d0 = local_80;
        uStack_5d8 = *(undefined8 *)(param_1 + 0x90);
        local_5e0 = *(undefined8 *)(param_1 + 0x88);
        uStack_5b8 = uStack_68;
        local_5c0 = local_70;
        uStack_608 = *(undefined8 *)(param_1 + 0xa0);
        local_610 = *(undefined8 *)(param_1 + 0x98);
        uStack_5f8 = *(undefined8 *)(param_1 + 0xb0);
        local_600 = *(undefined8 *)(param_1 + 0xa8);
        uStack_618 = *(undefined8 *)(param_1 + 0xd0);
        local_620 = *(undefined8 *)(param_1 + 200);
        uStack_628 = *(undefined8 *)(param_1 + 0xc0);
        local_630 = *(undefined8 *)(param_1 + 0xb8);
        uStack_638 = *(undefined8 *)(param_1 + 0xf0);
        local_640 = *(undefined8 *)(param_1 + 0xe8);
        uStack_648 = *(undefined8 *)(param_1 + 0xe0);
        local_650 = *(undefined8 *)(param_1 + 0xd8);
        uVar3 = System_Globalization_TimeSpanParse__TryTimeToTicks
                          (1,&local_5d0,&local_5f0,&local_610,&local_630,&local_650,&local_58);
        if ((uVar3 & 1) == 0) {
          uVar1 = uVar1 | uVar3 ^ 1;
          goto LAB_0750c374;
        }
        goto LAB_0750c68c;
      }
LAB_0750c374:
      System_Globalization_TimeSpanParse_TimeSpanRawInfo__get_PositiveLocalized
                (&local_588,param_1,0);
      uStack_678 = uStack_580;
      local_680 = local_588;
      uStack_668 = uStack_570;
      uStack_670 = uStack_578;
      local_660 = local_568;
      uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullDHMSMatch
                        (param_1,&local_680,0);
      if ((uVar4 & 1) != 0) {
        uStack_698 = *(undefined8 *)(param_1 + 0x80);
        local_6a0 = *(undefined8 *)(param_1 + 0x78);
        uStack_688 = *(undefined8 *)(param_1 + 0x90);
        uStack_690 = *(undefined8 *)(param_1 + 0x88);
        uStack_6b8 = *(undefined8 *)(param_1 + 0xa0);
        local_6c0 = *(undefined8 *)(param_1 + 0x98);
        uStack_6a8 = *(undefined8 *)(param_1 + 0xb0);
        uStack_6b0 = *(undefined8 *)(param_1 + 0xa8);
        uStack_6d8 = *(undefined8 *)(param_1 + 0xc0);
        local_6e0 = *(undefined8 *)(param_1 + 0xb8);
        uStack_6c8 = *(undefined8 *)(param_1 + 0xd0);
        uStack_6d0 = *(undefined8 *)(param_1 + 200);
        uStack_6e8 = *(undefined8 *)(param_1 + 0xf0);
        uStack_6f0 = *(undefined8 *)(param_1 + 0xe8);
        uStack_6f8 = *(undefined8 *)(param_1 + 0xe0);
        local_700 = *(undefined8 *)(param_1 + 0xd8);
        uStack_718 = uStack_78;
        local_720 = local_80;
        uStack_708 = uStack_68;
        uStack_710 = local_70;
        uVar3 = System_Globalization_TimeSpanParse__TryTimeToTicks
                          (1,&local_6a0,&local_6c0,&local_6e0,&local_700,&local_720,&local_58);
        if ((uVar3 & 1) != 0) goto LAB_0750c68c;
        uVar1 = uVar1 | uVar3 ^ 1;
      }
      System_Globalization_TimeSpanParse_TimeSpanRawInfo__get_PositiveLocalized
                (&local_588,param_1,0);
      uStack_748 = uStack_580;
      local_750 = local_588;
      uStack_738 = uStack_570;
      uStack_740 = uStack_578;
      local_730 = local_568;
      uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullAppCompatMatch
                        (param_1,&local_750,0);
      if ((uVar4 & 1) != 0) {
        uStack_768 = *(undefined8 *)(param_1 + 0x80);
        local_770 = *(undefined8 *)(param_1 + 0x78);
        uStack_758 = *(undefined8 *)(param_1 + 0x90);
        uStack_760 = *(undefined8 *)(param_1 + 0x88);
        uStack_788 = *(undefined8 *)(param_1 + 0xa0);
        local_790 = *(undefined8 *)(param_1 + 0x98);
        uStack_778 = *(undefined8 *)(param_1 + 0xb0);
        uStack_780 = *(undefined8 *)(param_1 + 0xa8);
        uStack_7a8 = *(undefined8 *)(param_1 + 0xc0);
        local_7b0 = *(undefined8 *)(param_1 + 0xb8);
        uStack_798 = *(undefined8 *)(param_1 + 0xd0);
        uStack_7a0 = *(undefined8 *)(param_1 + 200);
        uStack_7d8 = *(undefined8 *)(param_1 + 0xf0);
        uStack_7e0 = *(undefined8 *)(param_1 + 0xe8);
        uStack_7c8 = uStack_78;
        local_7d0 = local_80;
        uStack_7b8 = uStack_68;
        uStack_7c0 = local_70;
        uStack_7e8 = *(undefined8 *)(param_1 + 0xe0);
        local_7f0 = *(undefined8 *)(param_1 + 0xd8);
        uVar3 = System_Globalization_TimeSpanParse__TryTimeToTicks
                          (1,&local_770,&local_790,&local_7b0,&local_7d0,&local_7f0,&local_58);
        if ((uVar3 & 1) != 0) goto LAB_0750c68c;
        uVar1 = uVar1 | uVar3 ^ 1;
      }
      System_Globalization_TimeSpanParse_TimeSpanRawInfo__get_NegativeLocalized
                (&local_588,param_1,0);
      uStack_818 = uStack_580;
      local_820 = local_588;
      uStack_808 = uStack_570;
      uStack_810 = uStack_578;
      local_800 = local_568;
      uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullHMSFMatch
                        (param_1,&local_820,0);
      if ((uVar4 & 1) == 0) {
LAB_0750c548:
        System_Globalization_TimeSpanParse_TimeSpanRawInfo__get_NegativeLocalized
                  (&local_588,param_1,0);
        uStack_8e8 = uStack_580;
        local_8f0 = local_588;
        uStack_8d8 = uStack_570;
        uStack_8e0 = uStack_578;
        local_8d0 = local_568;
        uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullDHMSMatch
                          (param_1,&local_8f0,0);
        if ((uVar4 & 1) != 0) {
          uStack_908 = *(undefined8 *)(param_1 + 0x80);
          local_910 = *(undefined8 *)(param_1 + 0x78);
          uStack_8f8 = *(undefined8 *)(param_1 + 0x90);
          uStack_900 = *(undefined8 *)(param_1 + 0x88);
          uStack_928 = *(undefined8 *)(param_1 + 0xa0);
          local_930 = *(undefined8 *)(param_1 + 0x98);
          uStack_918 = *(undefined8 *)(param_1 + 0xb0);
          uStack_920 = *(undefined8 *)(param_1 + 0xa8);
          uStack_948 = *(undefined8 *)(param_1 + 0xc0);
          local_950 = *(undefined8 *)(param_1 + 0xb8);
          uStack_938 = *(undefined8 *)(param_1 + 0xd0);
          uStack_940 = *(undefined8 *)(param_1 + 200);
          uStack_958 = *(undefined8 *)(param_1 + 0xf0);
          uStack_960 = *(undefined8 *)(param_1 + 0xe8);
          uStack_968 = *(undefined8 *)(param_1 + 0xe0);
          local_970 = *(undefined8 *)(param_1 + 0xd8);
          uStack_988 = uStack_78;
          local_990 = local_80;
          uStack_978 = uStack_68;
          uStack_980 = local_70;
          uVar3 = System_Globalization_TimeSpanParse__TryTimeToTicks
                            (0,&local_910,&local_930,&local_950,&local_970,&local_990,&local_58);
          if ((uVar3 & 1) != 0) goto LAB_0750c678;
          uVar1 = uVar1 | uVar3 ^ 1;
        }
        System_Globalization_TimeSpanParse_TimeSpanRawInfo__get_NegativeLocalized
                  (&local_588,param_1,0);
        uStack_9b8 = uStack_580;
        local_9c0 = local_588;
        uStack_9a8 = uStack_570;
        uStack_9b0 = uStack_578;
        local_9a0 = local_568;
        uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullAppCompatMatch
                          (param_1,&local_9c0,0);
        if ((uVar4 & 1) != 0) {
          uStack_9d8 = *(undefined8 *)(param_1 + 0x80);
          local_9e0 = *(undefined8 *)(param_1 + 0x78);
          uStack_9c8 = *(undefined8 *)(param_1 + 0x90);
          uStack_9d0 = *(undefined8 *)(param_1 + 0x88);
          uStack_9f8 = *(undefined8 *)(param_1 + 0xa0);
          local_a00 = *(undefined8 *)(param_1 + 0x98);
          uStack_9e8 = *(undefined8 *)(param_1 + 0xb0);
          uStack_9f0 = *(undefined8 *)(param_1 + 0xa8);
          uStack_a18 = *(undefined8 *)(param_1 + 0xc0);
          local_a20 = *(undefined8 *)(param_1 + 0xb8);
          uStack_a08 = *(undefined8 *)(param_1 + 0xd0);
          uStack_a10 = *(undefined8 *)(param_1 + 200);
          uStack_a48 = *(undefined8 *)(param_1 + 0xf0);
          uStack_a50 = *(undefined8 *)(param_1 + 0xe8);
          uStack_a38 = uStack_78;
          local_a40 = local_80;
          uStack_a28 = uStack_68;
          uStack_a30 = local_70;
          uStack_a58 = *(undefined8 *)(param_1 + 0xe0);
          local_a60 = *(undefined8 *)(param_1 + 0xd8);
          uVar3 = System_Globalization_TimeSpanParse__TryTimeToTicks
                            (0,&local_9e0,&local_a00,&local_a20,&local_a40,&local_a60,&local_58);
          if ((uVar3 & 1) != 0) goto LAB_0750c678;
          uVar1 = uVar1 | uVar3 ^ 1;
        }
LAB_0750c6a4:
        if ((uVar1 & 1) == 0) goto LAB_0750c6c0;
      }
      else {
        uStack_858 = *(undefined8 *)(param_1 + 0x80);
        local_860 = *(undefined8 *)(param_1 + 0x78);
        uStack_838 = uStack_78;
        local_840 = local_80;
        uStack_828 = uStack_68;
        uStack_830 = local_70;
        uStack_848 = *(undefined8 *)(param_1 + 0x90);
        uStack_850 = *(undefined8 *)(param_1 + 0x88);
        uStack_878 = *(undefined8 *)(param_1 + 0xa0);
        local_880 = *(undefined8 *)(param_1 + 0x98);
        uStack_868 = *(undefined8 *)(param_1 + 0xb0);
        uStack_870 = *(undefined8 *)(param_1 + 0xa8);
        uStack_888 = *(undefined8 *)(param_1 + 0xd0);
        uStack_890 = *(undefined8 *)(param_1 + 200);
        uStack_898 = *(undefined8 *)(param_1 + 0xc0);
        local_8a0 = *(undefined8 *)(param_1 + 0xb8);
        uStack_8a8 = *(undefined8 *)(param_1 + 0xf0);
        uStack_8b0 = *(undefined8 *)(param_1 + 0xe8);
        uStack_8b8 = *(undefined8 *)(param_1 + 0xe0);
        local_8c0 = *(undefined8 *)(param_1 + 0xd8);
        uVar3 = System_Globalization_TimeSpanParse__TryTimeToTicks
                          (0,&local_840,&local_860,&local_880,&local_8a0,&local_8c0,&local_58);
        if ((uVar3 & 1) == 0) {
          uVar1 = uVar1 | uVar3 ^ 1;
          goto LAB_0750c548;
        }
LAB_0750c678:
        local_58 = -local_58;
        if (local_58 < 1) goto LAB_0750c68c;
      }
      uVar5 = 4;
      uVar6 = DAT_0920efa0;
    }
    uVar3 = System_Globalization_TimeSpanParse_TimeSpanResult__SetFailure(param_3,uVar5,uVar6,0,0,0)
    ;
  }
  else {
    if (DAT_095216d2 == '\0') {
      FUN_03f5c2a4(&DAT_0918bd68);
      DAT_095216d2 = '\x01';
    }
    if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar8 = *(undefined8 **)(DAT_0918bd68 + 0xb8);
    uStack_a8 = puVar8[1];
    local_b0 = *puVar8;
    uStack_98 = puVar8[3];
    local_a0 = puVar8[2];
    local_90 = puVar8[4];
    uVar1 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullHMSFMatch(param_1,&local_b0,0);
    if ((uVar1 & 1) == 0) {
LAB_0750be38:
      if (DAT_095216d2 == '\0') {
        FUN_03f5c2a4(&DAT_0918bd68);
        DAT_095216d2 = '\x01';
      }
      if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar8 = *(undefined8 **)(DAT_0918bd68 + 0xb8);
      uStack_178 = puVar8[1];
      local_180 = *puVar8;
      uStack_168 = puVar8[3];
      local_170 = puVar8[2];
      local_160 = puVar8[4];
      uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullDHMSMatch
                        (param_1,&local_180,0);
      if ((uVar4 & 1) == 0) {
LAB_0750bf18:
        if (DAT_095216d2 == '\0') {
          FUN_03f5c2a4(&DAT_0918bd68);
          DAT_095216d2 = '\x01';
        }
        if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar8 = *(undefined8 **)(DAT_0918bd68 + 0xb8);
        uStack_248 = puVar8[1];
        local_250 = *puVar8;
        uStack_238 = puVar8[3];
        local_240 = puVar8[2];
        local_230 = puVar8[4];
        uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullAppCompatMatch
                          (param_1,&local_250,0);
        if ((uVar4 & 1) != 0) {
          uStack_268 = *(undefined8 *)(param_1 + 0x80);
          local_270 = *(undefined8 *)(param_1 + 0x78);
          uStack_258 = *(undefined8 *)(param_1 + 0x90);
          local_260 = *(undefined8 *)(param_1 + 0x88);
          uStack_288 = *(undefined8 *)(param_1 + 0xa0);
          local_290 = *(undefined8 *)(param_1 + 0x98);
          uStack_278 = *(undefined8 *)(param_1 + 0xb0);
          local_280 = *(undefined8 *)(param_1 + 0xa8);
          uStack_2a8 = *(undefined8 *)(param_1 + 0xc0);
          local_2b0 = *(undefined8 *)(param_1 + 0xb8);
          uStack_298 = *(undefined8 *)(param_1 + 0xd0);
          local_2a0 = *(undefined8 *)(param_1 + 200);
          uStack_2d8 = *(undefined8 *)(param_1 + 0xf0);
          local_2e0 = *(undefined8 *)(param_1 + 0xe8);
          uStack_2c8 = uStack_78;
          local_2d0 = local_80;
          uStack_2e8 = *(undefined8 *)(param_1 + 0xe0);
          local_2f0 = *(undefined8 *)(param_1 + 0xd8);
          uStack_2b8 = uStack_68;
          local_2c0 = local_70;
          uVar2 = System_Globalization_TimeSpanParse__TryTimeToTicks
                            (1,&local_270,&local_290,&local_2b0,&local_2d0,&local_2f0,&local_58);
          bVar7 = true;
          uVar1 = uVar1 | uVar2 ^ 1;
          if ((uVar2 & 1) != 0) goto LAB_0750c1bc;
        }
        if (DAT_095216d3 == '\0') {
          FUN_03f5c2a4(&DAT_0918bd68);
          DAT_095216d3 = '\x01';
        }
        if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = *(long *)(DAT_0918bd68 + 0xb8);
        uStack_318 = *(undefined8 *)(lVar9 + 0x30);
        local_320 = *(undefined8 *)(lVar9 + 0x28);
        uStack_308 = *(undefined8 *)(lVar9 + 0x40);
        local_310 = *(undefined8 *)(lVar9 + 0x38);
        local_300 = *(undefined8 *)(lVar9 + 0x48);
        uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullHMSFMatch
                          (param_1,&local_320,0);
        if ((uVar4 & 1) != 0) {
          uStack_358 = *(undefined8 *)(param_1 + 0x80);
          local_360 = *(undefined8 *)(param_1 + 0x78);
          uStack_338 = uStack_78;
          local_340 = local_80;
          uStack_348 = *(undefined8 *)(param_1 + 0x90);
          local_350 = *(undefined8 *)(param_1 + 0x88);
          uStack_328 = uStack_68;
          local_330 = local_70;
          uStack_378 = *(undefined8 *)(param_1 + 0xa0);
          local_380 = *(undefined8 *)(param_1 + 0x98);
          uStack_368 = *(undefined8 *)(param_1 + 0xb0);
          local_370 = *(undefined8 *)(param_1 + 0xa8);
          uStack_388 = *(undefined8 *)(param_1 + 0xd0);
          local_390 = *(undefined8 *)(param_1 + 200);
          uStack_398 = *(undefined8 *)(param_1 + 0xc0);
          local_3a0 = *(undefined8 *)(param_1 + 0xb8);
          uStack_3a8 = *(undefined8 *)(param_1 + 0xf0);
          local_3b0 = *(undefined8 *)(param_1 + 0xe8);
          uStack_3b8 = *(undefined8 *)(param_1 + 0xe0);
          local_3c0 = *(undefined8 *)(param_1 + 0xd8);
          uVar2 = System_Globalization_TimeSpanParse__TryTimeToTicks
                            (0,&local_340,&local_360,&local_380,&local_3a0,&local_3c0,&local_58);
          uVar1 = uVar1 | uVar2 ^ 1;
          if ((uVar2 & 1) == 0) goto LAB_0750c0d8;
LAB_0750c1b4:
          bVar7 = false;
          goto LAB_0750c1bc;
        }
LAB_0750c0d8:
        if (DAT_095216d3 == '\0') {
          FUN_03f5c2a4(&DAT_0918bd68);
          DAT_095216d3 = '\x01';
        }
        if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = *(long *)(DAT_0918bd68 + 0xb8);
        uStack_3e8 = *(undefined8 *)(lVar9 + 0x30);
        local_3f0 = *(undefined8 *)(lVar9 + 0x28);
        uStack_3d8 = *(undefined8 *)(lVar9 + 0x40);
        local_3e0 = *(undefined8 *)(lVar9 + 0x38);
        local_3d0 = *(undefined8 *)(lVar9 + 0x48);
        uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullDHMSMatch
                          (param_1,&local_3f0,0);
        if ((uVar4 & 1) != 0) {
          uStack_408 = *(undefined8 *)(param_1 + 0x80);
          local_410 = *(undefined8 *)(param_1 + 0x78);
          uStack_3f8 = *(undefined8 *)(param_1 + 0x90);
          local_400 = *(undefined8 *)(param_1 + 0x88);
          uStack_428 = *(undefined8 *)(param_1 + 0xa0);
          local_430 = *(undefined8 *)(param_1 + 0x98);
          uStack_418 = *(undefined8 *)(param_1 + 0xb0);
          local_420 = *(undefined8 *)(param_1 + 0xa8);
          uStack_448 = *(undefined8 *)(param_1 + 0xc0);
          local_450 = *(undefined8 *)(param_1 + 0xb8);
          uStack_458 = *(undefined8 *)(param_1 + 0xf0);
          local_460 = *(undefined8 *)(param_1 + 0xe8);
          uStack_438 = *(undefined8 *)(param_1 + 0xd0);
          local_440 = *(undefined8 *)(param_1 + 200);
          uStack_468 = *(undefined8 *)(param_1 + 0xe0);
          local_470 = *(undefined8 *)(param_1 + 0xd8);
          uStack_478 = uStack_68;
          local_480 = local_70;
          uStack_488 = uStack_78;
          local_490 = local_80;
          uVar2 = System_Globalization_TimeSpanParse__TryTimeToTicks
                            (0,&local_410,&local_430,&local_450,&local_470,&local_490,&local_58);
          uVar1 = uVar1 | uVar2 ^ 1;
          if ((uVar2 & 1) != 0) goto LAB_0750c1b4;
        }
        if (DAT_095216d3 == '\0') {
          FUN_03f5c2a4(&DAT_0918bd68);
          DAT_095216d3 = '\x01';
        }
        if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = *(long *)(DAT_0918bd68 + 0xb8);
        uStack_4b8 = *(undefined8 *)(lVar9 + 0x30);
        local_4c0 = *(undefined8 *)(lVar9 + 0x28);
        uStack_4a8 = *(undefined8 *)(lVar9 + 0x40);
        local_4b0 = *(undefined8 *)(lVar9 + 0x38);
        local_4a0 = *(undefined8 *)(lVar9 + 0x48);
        uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullAppCompatMatch
                          (param_1,&local_4c0,0);
        if ((uVar4 & 1) != 0) {
          uStack_4d8 = *(undefined8 *)(param_1 + 0x80);
          local_4e0 = *(undefined8 *)(param_1 + 0x78);
          uStack_4c8 = *(undefined8 *)(param_1 + 0x90);
          local_4d0 = *(undefined8 *)(param_1 + 0x88);
          uStack_4f8 = *(undefined8 *)(param_1 + 0xa0);
          local_500 = *(undefined8 *)(param_1 + 0x98);
          uStack_4e8 = *(undefined8 *)(param_1 + 0xb0);
          local_4f0 = *(undefined8 *)(param_1 + 0xa8);
          uStack_518 = *(undefined8 *)(param_1 + 0xc0);
          local_520 = *(undefined8 *)(param_1 + 0xb8);
          uStack_508 = *(undefined8 *)(param_1 + 0xd0);
          local_510 = *(undefined8 *)(param_1 + 200);
          uStack_548 = *(undefined8 *)(param_1 + 0xf0);
          local_550 = *(undefined8 *)(param_1 + 0xe8);
          uStack_538 = uStack_78;
          local_540 = local_80;
          uStack_558 = *(undefined8 *)(param_1 + 0xe0);
          local_560 = *(undefined8 *)(param_1 + 0xd8);
          uStack_528 = uStack_68;
          local_530 = local_70;
          uVar2 = System_Globalization_TimeSpanParse__TryTimeToTicks
                            (0,&local_4e0,&local_500,&local_520,&local_540,&local_560,&local_58);
          bVar7 = false;
          uVar1 = uVar1 | uVar2 ^ 1;
          goto joined_r0x0750c2a8;
        }
        if ((uVar3 >> 1 & 1) != 0) goto LAB_0750c2bc;
        goto LAB_0750c6a4;
      }
      uStack_198 = *(undefined8 *)(param_1 + 0x80);
      local_1a0 = *(undefined8 *)(param_1 + 0x78);
      uStack_188 = *(undefined8 *)(param_1 + 0x90);
      local_190 = *(undefined8 *)(param_1 + 0x88);
      uStack_1b8 = *(undefined8 *)(param_1 + 0xa0);
      local_1c0 = *(undefined8 *)(param_1 + 0x98);
      uStack_1a8 = *(undefined8 *)(param_1 + 0xb0);
      local_1b0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_1d8 = *(undefined8 *)(param_1 + 0xc0);
      local_1e0 = *(undefined8 *)(param_1 + 0xb8);
      uStack_1e8 = *(undefined8 *)(param_1 + 0xf0);
      local_1f0 = *(undefined8 *)(param_1 + 0xe8);
      uStack_1c8 = *(undefined8 *)(param_1 + 0xd0);
      local_1d0 = *(undefined8 *)(param_1 + 200);
      uStack_1f8 = *(undefined8 *)(param_1 + 0xe0);
      local_200 = *(undefined8 *)(param_1 + 0xd8);
      uStack_208 = uStack_68;
      local_210 = local_70;
      uStack_218 = uStack_78;
      local_220 = local_80;
      uVar2 = System_Globalization_TimeSpanParse__TryTimeToTicks
                        (1,&local_1a0,&local_1c0,&local_1e0,&local_200,&local_220,&local_58);
      bVar7 = true;
      uVar1 = uVar1 | uVar2 ^ 1;
      if ((uVar2 & 1) == 0) goto LAB_0750bf18;
LAB_0750c1bc:
      uVar2 = 1;
joined_r0x0750c2a8:
      if ((uVar3 >> 1 & 1) == 0) goto LAB_0750c1c0;
LAB_0750c2ac:
      if ((uVar2 & 1) == 0) goto LAB_0750c2bc;
    }
    else {
      uStack_e8 = *(undefined8 *)(param_1 + 0x80);
      local_f0 = *(undefined8 *)(param_1 + 0x78);
      uStack_c8 = uStack_78;
      local_d0 = local_80;
      uStack_d8 = *(undefined8 *)(param_1 + 0x90);
      local_e0 = *(undefined8 *)(param_1 + 0x88);
      uStack_b8 = uStack_68;
      local_c0 = local_70;
      uStack_108 = *(undefined8 *)(param_1 + 0xa0);
      local_110 = *(undefined8 *)(param_1 + 0x98);
      uStack_f8 = *(undefined8 *)(param_1 + 0xb0);
      local_100 = *(undefined8 *)(param_1 + 0xa8);
      uStack_118 = *(undefined8 *)(param_1 + 0xd0);
      local_120 = *(undefined8 *)(param_1 + 200);
      uStack_128 = *(undefined8 *)(param_1 + 0xc0);
      local_130 = *(undefined8 *)(param_1 + 0xb8);
      uVar2 = 1;
      uStack_138 = *(undefined8 *)(param_1 + 0xf0);
      local_140 = *(undefined8 *)(param_1 + 0xe8);
      uStack_148 = *(undefined8 *)(param_1 + 0xe0);
      local_150 = *(undefined8 *)(param_1 + 0xd8);
      uVar4 = System_Globalization_TimeSpanParse__TryTimeToTicks
                        (1,&local_d0,&local_f0,&local_110,&local_130,&local_150,&local_58);
      if ((uVar4 & 1) == 0) goto LAB_0750be38;
      uVar1 = 0;
      bVar7 = true;
      if ((uVar3 >> 1 & 1) != 0) goto LAB_0750c2ac;
LAB_0750c1c0:
      if ((uVar2 & 1) == 0) goto LAB_0750c6a4;
    }
    if (!bVar7) goto LAB_0750c678;
LAB_0750c68c:
    uVar3 = 1;
    *param_3 = local_58;
  }
  return (ulong)(uVar3 & 1);
}

