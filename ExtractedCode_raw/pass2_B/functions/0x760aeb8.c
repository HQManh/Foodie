// rea decompile_all
// name: System.TermInfoDriver$$CreateKeyMap
// address: 0x760aeb8
// body: available
// range: 0x760aeb8-0x760cd5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x760cd5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TermInfoDriver__CreateKeyMap(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 local_7c0;
  undefined4 local_7b8;
  undefined8 local_7b0;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined8 local_7a0;
  undefined4 local_798;
  undefined8 local_790;
  undefined4 local_788;
  undefined4 local_784;
  undefined8 local_780;
  undefined4 local_778;
  undefined8 local_770;
  undefined4 local_768;
  undefined4 local_764;
  undefined8 local_760;
  undefined4 local_758;
  undefined8 local_750;
  undefined4 local_748;
  undefined4 local_744;
  undefined8 local_740;
  undefined4 local_738;
  undefined8 local_730;
  undefined4 local_728;
  undefined4 local_724;
  undefined8 local_720;
  undefined4 local_718;
  undefined8 local_710;
  undefined4 local_708;
  undefined4 local_704;
  undefined8 local_700;
  undefined4 local_6f8;
  undefined8 local_6f0;
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined8 local_6e0;
  undefined4 local_6d8;
  undefined8 local_6d0;
  undefined4 local_6c8;
  undefined4 local_6c4;
  undefined8 local_6c0;
  undefined4 local_6b8;
  undefined8 local_6b0;
  undefined4 local_6a8;
  undefined4 local_6a4;
  undefined8 local_6a0;
  undefined4 local_698;
  undefined8 local_690;
  undefined4 local_688;
  undefined4 local_684;
  undefined8 local_680;
  undefined4 local_678;
  undefined8 local_670;
  undefined4 local_668;
  undefined4 local_664;
  undefined8 local_660;
  undefined4 local_658;
  undefined8 local_650;
  undefined4 local_648;
  undefined4 local_644;
  undefined8 local_640;
  undefined4 local_638;
  undefined8 local_630;
  undefined4 local_628;
  undefined4 local_624;
  undefined8 local_620;
  undefined4 local_618;
  undefined8 local_610;
  undefined4 local_608;
  undefined4 local_604;
  undefined8 local_600;
  undefined4 local_5f8;
  undefined8 local_5f0;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined8 local_5e0;
  undefined4 local_5d8;
  undefined8 local_5d0;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined8 local_5c0;
  undefined4 local_5b8;
  undefined8 local_5b0;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined8 local_590;
  undefined4 local_588;
  undefined4 local_584;
  undefined8 local_580;
  undefined4 local_578;
  undefined8 local_570;
  undefined4 local_568;
  undefined4 local_564;
  undefined8 local_560;
  undefined4 local_558;
  undefined8 local_550;
  undefined4 local_548;
  undefined4 local_544;
  undefined8 local_540;
  undefined4 local_538;
  undefined8 local_530;
  undefined4 local_528;
  undefined4 local_524;
  undefined8 local_520;
  undefined4 local_518;
  undefined8 local_510;
  undefined4 local_508;
  undefined4 local_504;
  undefined8 local_500;
  undefined4 local_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined8 local_4e0;
  undefined4 local_4d8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined4 local_484;
  undefined8 local_480;
  undefined4 local_478;
  undefined8 local_470;
  undefined4 local_468;
  undefined4 local_464;
  undefined8 local_460;
  undefined4 local_458;
  undefined8 local_450;
  undefined4 local_448;
  undefined4 local_444;
  undefined8 local_440;
  undefined4 local_438;
  undefined8 local_430;
  undefined4 local_428;
  undefined4 local_424;
  undefined8 local_420;
  undefined4 local_418;
  undefined8 local_410;
  undefined4 local_408;
  undefined4 local_404;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined4 local_384;
  undefined8 local_380;
  undefined4 local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 local_364;
  undefined8 local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined4 local_344;
  undefined8 local_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined4 local_324;
  undefined8 local_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 local_304;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 local_264;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_09522019 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182a40);
    FUN_03f5c2a4(&DAT_09185048);
    FUN_03f5c2a4(&DAT_0918ba10);
    DAT_09522019 = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_09185048);
  System_Collections_Hashtable___ctor(uVar1,0);
  puVar3 = (undefined8 *)(param_1 + 0xf0);
  *puVar3 = uVar1;
  thunk_FUN_03f5d7b8(puVar3,uVar1);
  plVar4 = (long *)*puVar3;
  local_34 = 0x37;
  uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_34);
  local_48 = 0;
  local_50 = 0;
  System_ConsoleKeyInfo___ctor(&local_50,0,8,0,0,0,0);
  local_60 = local_50;
  local_58 = local_48;
  uVar2 = FUN_03f5c42c(DAT_09182a40,&local_60);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
    plVar4 = (long *)*puVar3;
    local_38 = 0x39;
    uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_38);
    local_68 = 0;
    local_70 = 0;
    System_ConsoleKeyInfo___ctor(&local_70,0,0xc,0,0,0,0);
    local_80 = local_70;
    local_78 = local_68;
    uVar2 = FUN_03f5c42c(DAT_09182a40,&local_80);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x318))(plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
      plVar4 = (long *)*puVar3;
      local_84 = 0x3d;
      uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_84);
      local_88 = 0;
      local_90 = 0;
      System_ConsoleKeyInfo___ctor(&local_90,0,0x28,0,0,0,0);
      local_a0 = local_90;
      local_98 = local_88;
      uVar2 = FUN_03f5c42c(DAT_09182a40,&local_a0);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x318))(plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
        plVar4 = (long *)*puVar3;
        local_a4 = 0x42;
        uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_a4);
        local_a8 = 0;
        local_b0 = 0;
        System_ConsoleKeyInfo___ctor(&local_b0,0,0x70,0,0,0,0);
        local_c0 = local_b0;
        local_b8 = local_a8;
        uVar2 = FUN_03f5c42c(DAT_09182a40,&local_c0);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x318))(plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
          plVar4 = (long *)*puVar3;
          local_c4 = 0x43;
          uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_c4);
          local_c8 = 0;
          local_d0 = 0;
          System_ConsoleKeyInfo___ctor(&local_d0,0,0x79,0,0,0,0);
          local_e0 = local_d0;
          local_d8 = local_c8;
          uVar2 = FUN_03f5c42c(DAT_09182a40,&local_e0);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x318))(plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
            plVar4 = (long *)*puVar3;
            local_e4 = 0x44;
            uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_e4);
            local_e8 = 0;
            local_f0 = 0;
            System_ConsoleKeyInfo___ctor(&local_f0,0,0x71,0,0,0,0);
            local_100 = local_f0;
            local_f8 = local_e8;
            uVar2 = FUN_03f5c42c(DAT_09182a40,&local_100);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x318))(plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
              plVar4 = (long *)*puVar3;
              local_104 = 0x45;
              uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_104);
              local_108 = 0;
              local_110 = 0;
              System_ConsoleKeyInfo___ctor(&local_110,0,0x72,0,0,0,0);
              local_120 = local_110;
              local_118 = local_108;
              uVar2 = FUN_03f5c42c(DAT_09182a40,&local_120);
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x318))(plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
                plVar4 = (long *)*puVar3;
                local_124 = 0x46;
                uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_124);
                local_128 = 0;
                local_130 = 0;
                System_ConsoleKeyInfo___ctor(&local_130,0,0x73,0,0,0,0);
                local_140 = local_130;
                local_138 = local_128;
                uVar2 = FUN_03f5c42c(DAT_09182a40,&local_140);
                if (plVar4 != (long *)0x0) {
                  (**(code **)(*plVar4 + 0x318))(plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
                  plVar4 = (long *)*puVar3;
                  local_144 = 0x47;
                  uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_144);
                  local_148 = 0;
                  local_150 = 0;
                  System_ConsoleKeyInfo___ctor(&local_150,0,0x74,0,0,0,0);
                  local_160 = local_150;
                  local_158 = local_148;
                  uVar2 = FUN_03f5c42c(DAT_09182a40,&local_160);
                  if (plVar4 != (long *)0x0) {
                    (**(code **)(*plVar4 + 0x318))
                              (plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
                    plVar4 = (long *)*puVar3;
                    local_164 = 0x48;
                    uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_164);
                    local_168 = 0;
                    local_170 = 0;
                    System_ConsoleKeyInfo___ctor(&local_170,0,0x75,0,0,0,0);
                    local_180 = local_170;
                    local_178 = local_168;
                    uVar2 = FUN_03f5c42c(DAT_09182a40,&local_180);
                    if (plVar4 != (long *)0x0) {
                      (**(code **)(*plVar4 + 0x318))
                                (plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
                      plVar4 = (long *)*puVar3;
                      local_184 = 0x49;
                      uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_184);
                      local_188 = 0;
                      local_190 = 0;
                      System_ConsoleKeyInfo___ctor(&local_190,0,0x76,0,0,0,0);
                      local_1a0 = local_190;
                      local_198 = local_188;
                      uVar2 = FUN_03f5c42c(DAT_09182a40,&local_1a0);
                      if (plVar4 != (long *)0x0) {
                        (**(code **)(*plVar4 + 0x318))
                                  (plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
                        plVar4 = (long *)*puVar3;
                        local_1a4 = 0x4a;
                        uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_1a4);
                        local_1a8 = 0;
                        local_1b0 = 0;
                        System_ConsoleKeyInfo___ctor(&local_1b0,0,0x77,0,0,0,0);
                        local_1c0 = local_1b0;
                        local_1b8 = local_1a8;
                        uVar2 = FUN_03f5c42c(DAT_09182a40,&local_1c0);
                        if (plVar4 != (long *)0x0) {
                          (**(code **)(*plVar4 + 0x318))
                                    (plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
                          plVar4 = (long *)*puVar3;
                          local_1c4 = 0x4b;
                          uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_1c4);
                          local_1c8 = 0;
                          local_1d0 = 0;
                          System_ConsoleKeyInfo___ctor(&local_1d0,0,0x78,0,0,0,0);
                          local_1e0 = local_1d0;
                          local_1d8 = local_1c8;
                          uVar2 = FUN_03f5c42c(DAT_09182a40,&local_1e0);
                          if (plVar4 != (long *)0x0) {
                            (**(code **)(*plVar4 + 0x318))
                                      (plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
                            plVar4 = (long *)*puVar3;
                            local_1e4 = 0x4c;
                            uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_1e4);
                            local_1e8 = 0;
                            local_1f0 = 0;
                            System_ConsoleKeyInfo___ctor(&local_1f0,0,0x24,0,0,0,0);
                            local_200 = local_1f0;
                            local_1f8 = local_1e8;
                            uVar2 = FUN_03f5c42c(DAT_09182a40,&local_200);
                            if (plVar4 != (long *)0x0) {
                              (**(code **)(*plVar4 + 0x318))
                                        (plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
                              plVar4 = (long *)*puVar3;
                              local_204 = 0x4f;
                              uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_204);
                              local_208 = 0;
                              local_210 = 0;
                              System_ConsoleKeyInfo___ctor(&local_210,0,0x25,0,0,0,0);
                              local_220 = local_210;
                              local_218 = local_208;
                              uVar2 = FUN_03f5c42c(DAT_09182a40,&local_220);
                              if (plVar4 != (long *)0x0) {
                                (**(code **)(*plVar4 + 0x318))
                                          (plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
                                plVar4 = (long *)*puVar3;
                                local_224 = 0x50;
                                uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_224);
                                local_228 = 0;
                                local_230 = 0;
                                System_ConsoleKeyInfo___ctor(&local_230,0,0x61,0,0,0,0);
                                local_240 = local_230;
                                local_238 = local_228;
                                uVar2 = FUN_03f5c42c(DAT_09182a40,&local_240);
                                if (plVar4 != (long *)0x0) {
                                  (**(code **)(*plVar4 + 0x318))
                                            (plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
                                  plVar4 = (long *)*puVar3;
                                  local_244 = 0x51;
                                  uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_244);
                                  local_248 = 0;
                                  local_250 = 0;
                                  System_ConsoleKeyInfo___ctor(&local_250,0,0x22,0,0,0,0);
                                  local_260 = local_250;
                                  local_258 = local_248;
                                  uVar2 = FUN_03f5c42c(DAT_09182a40,&local_260);
                                  if (plVar4 != (long *)0x0) {
                                    (**(code **)(*plVar4 + 0x318))
                                              (plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
                                    plVar4 = (long *)*puVar3;
                                    local_264 = 0x52;
                                    uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_264);
                                    local_268 = 0;
                                    local_270 = 0;
                                    System_ConsoleKeyInfo___ctor(&local_270,0,0x21,0,0,0,0);
                                    local_280 = local_270;
                                    local_278 = local_268;
                                    uVar2 = FUN_03f5c42c(DAT_09182a40,&local_280);
                                    if (plVar4 != (long *)0x0) {
                                      (**(code **)(*plVar4 + 0x318))
                                                (plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800));
                                      plVar4 = (long *)*puVar3;
                                      local_284 = 0x53;
                                      uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_284);
                                      local_288 = 0;
                                      local_290 = 0;
                                      System_ConsoleKeyInfo___ctor(&local_290,0,0x27,0,0,0,0);
                                      local_2a0 = local_290;
                                      local_298 = local_288;
                                      uVar2 = FUN_03f5c42c(DAT_09182a40,&local_2a0);
                                      if (plVar4 != (long *)0x0) {
                                        (**(code **)(*plVar4 + 0x318))
                                                  (plVar4,uVar1,uVar2,*(undefined8 *)(*plVar4 + 800)
                                                  );
                                        plVar4 = (long *)*puVar3;
                                        local_2a4 = 0x54;
                                        uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_2a4);
                                        local_2a8 = 0;
                                        local_2b0 = 0;
                                        System_ConsoleKeyInfo___ctor(&local_2b0,0,0x22,0,0,0,0);
                                        local_2c0 = local_2b0;
                                        local_2b8 = local_2a8;
                                        uVar2 = FUN_03f5c42c(DAT_09182a40,&local_2c0);
                                        if (plVar4 != (long *)0x0) {
                                          (**(code **)(*plVar4 + 0x318))
                                                    (plVar4,uVar1,uVar2,
                                                     *(undefined8 *)(*plVar4 + 800));
                                          plVar4 = (long *)*puVar3;
                                          local_2c4 = 0x55;
                                          uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_2c4);
                                          local_2c8 = 0;
                                          local_2d0 = 0;
                                          System_ConsoleKeyInfo___ctor(&local_2d0,0,0x21,0,0,0,0);
                                          local_2e0 = local_2d0;
                                          local_2d8 = local_2c8;
                                          uVar2 = FUN_03f5c42c(DAT_09182a40,&local_2e0);
                                          if (plVar4 != (long *)0x0) {
                                            (**(code **)(*plVar4 + 0x318))
                                                      (plVar4,uVar1,uVar2,
                                                       *(undefined8 *)(*plVar4 + 800));
                                            plVar4 = (long *)*puVar3;
                                            local_2e4 = 0x57;
                                            uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_2e4);
                                            local_2e8 = 0;
                                            local_2f0 = 0;
                                            System_ConsoleKeyInfo___ctor(&local_2f0,0,0x26,0,0,0,0);
                                            local_300 = local_2f0;
                                            local_2f8 = local_2e8;
                                            uVar2 = FUN_03f5c42c(DAT_09182a40,&local_300);
                                            if (plVar4 != (long *)0x0) {
                                              (**(code **)(*plVar4 + 0x318))
                                                        (plVar4,uVar1,uVar2,
                                                         *(undefined8 *)(*plVar4 + 800));
                                              plVar4 = (long *)*puVar3;
                                              local_304 = 0x8b;
                                              uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_304);
                                              local_308 = 0;
                                              local_310 = 0;
                                              System_ConsoleKeyInfo___ctor
                                                        (&local_310,0,0x67,0,0,0,0);
                                              local_320 = local_310;
                                              local_318 = local_308;
                                              uVar2 = FUN_03f5c42c(DAT_09182a40,&local_320);
                                              if (plVar4 != (long *)0x0) {
                                                (**(code **)(*plVar4 + 0x318))
                                                          (plVar4,uVar1,uVar2,
                                                           *(undefined8 *)(*plVar4 + 800));
                                                plVar4 = (long *)*puVar3;
                                                local_324 = 0x8c;
                                                uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_324);
                                                local_328 = 0;
                                                local_330 = 0;
                                                System_ConsoleKeyInfo___ctor
                                                          (&local_330,0,0x69,0,0,0,0);
                                                local_340 = local_330;
                                                local_338 = local_328;
                                                uVar2 = FUN_03f5c42c(DAT_09182a40,&local_340);
                                                if (plVar4 != (long *)0x0) {
                                                  (**(code **)(*plVar4 + 0x318))
                                                            (plVar4,uVar1,uVar2,
                                                             *(undefined8 *)(*plVar4 + 800));
                                                  plVar4 = (long *)*puVar3;
                                                  local_344 = 0x8d;
                                                  uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_344);
                                                  local_348 = 0;
                                                  local_350 = 0;
                                                  System_ConsoleKeyInfo___ctor
                                                            (&local_350,0,0x65,0,0,0,0);
                                                  local_360 = local_350;
                                                  local_358 = local_348;
                                                  uVar2 = FUN_03f5c42c(DAT_09182a40,&local_360);
                                                  if (plVar4 != (long *)0x0) {
                                                    (**(code **)(*plVar4 + 0x318))
                                                              (plVar4,uVar1,uVar2,
                                                               *(undefined8 *)(*plVar4 + 800));
                                                    plVar4 = (long *)*puVar3;
                                                    local_364 = 0x8e;
                                                    uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_364);
                                                    local_368 = 0;
                                                    local_370 = 0;
                                                    System_ConsoleKeyInfo___ctor
                                                              (&local_370,0,0x61,0,0,0,0);
                                                    local_380 = local_370;
                                                    local_378 = local_368;
                                                    uVar2 = FUN_03f5c42c(DAT_09182a40,&local_380);
                                                    if (plVar4 != (long *)0x0) {
                                                      (**(code **)(*plVar4 + 0x318))
                                                                (plVar4,uVar1,uVar2,
                                                                 *(undefined8 *)(*plVar4 + 800));
                                                      plVar4 = (long *)*puVar3;
                                                      local_384 = 0x8f;
                                                      uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_384);
                                                      local_388 = 0;
                                                      local_390 = 0;
                                                      System_ConsoleKeyInfo___ctor
                                                                (&local_390,0,99,0,0,0,0);
                                                      local_3a0 = local_390;
                                                      local_398 = local_388;
                                                      uVar2 = FUN_03f5c42c(DAT_09182a40,&local_3a0);
                                                      if (plVar4 != (long *)0x0) {
                                                        (**(code **)(*plVar4 + 0x318))
                                                                  (plVar4,uVar1,uVar2,
                                                                   *(undefined8 *)(*plVar4 + 800));
                                                        plVar4 = (long *)*puVar3;
                                                        local_3a4 = 0x94;
                                                        uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_3a4
                                                                            );
                                                        local_3a8 = 0;
                                                        local_3b0 = 0;
                                                        System_ConsoleKeyInfo___ctor
                                                                  (&local_3b0,0,9,1,0,0,0);
                                                        local_3c0 = local_3b0;
                                                        local_3b8 = local_3a8;
                                                        uVar2 = FUN_03f5c42c(DAT_09182a40,&local_3c0
                                                                            );
                                                        if (plVar4 != (long *)0x0) {
                                                          (**(code **)(*plVar4 + 0x318))
                                                                    (plVar4,uVar1,uVar2,
                                                                     *(undefined8 *)(*plVar4 + 800))
                                                          ;
                                                          plVar4 = (long *)*puVar3;
                                                          local_3c4 = 0x9e;
                                                          uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                               &local_3c4);
                                                          local_3c8 = 0;
                                                          local_3d0 = 0;
                                                          System_ConsoleKeyInfo___ctor
                                                                    (&local_3d0,0,0x24,0,0,0,0);
                                                          local_3e0 = local_3d0;
                                                          local_3d8 = local_3c8;
                                                          uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                               &local_3e0);
                                                          if (plVar4 != (long *)0x0) {
                                                            (**(code **)(*plVar4 + 0x318))
                                                                      (plVar4,uVar1,uVar2,
                                                                       *(undefined8 *)
                                                                        (*plVar4 + 800));
                                                            plVar4 = (long *)*puVar3;
                                                            local_3e4 = 0xa2;
                                                            uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                                 &local_3e4);
                                                            local_3e8 = 0;
                                                            local_3f0 = 0;
                                                            System_ConsoleKeyInfo___ctor
                                                                      (&local_3f0,0x43,0x43,0,1,0,0)
                                                            ;
                                                            local_400 = local_3f0;
                                                            local_3f8 = local_3e8;
                                                            uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                                 &local_400);
                                                            if (plVar4 != (long *)0x0) {
                                                              (**(code **)(*plVar4 + 0x318))
                                                                        (plVar4,uVar1,uVar2,
                                                                         *(undefined8 *)
                                                                          (*plVar4 + 800));
                                                              plVar4 = (long *)*puVar3;
                                                              local_404 = 0xa4;
                                                              uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                                   &local_404);
                                                              local_408 = 0;
                                                              local_410 = 0;
                                                              System_ConsoleKeyInfo___ctor
                                                                        (&local_410,0,0x23,0,0,0,0);
                                                              local_420 = local_410;
                                                              local_418 = local_408;
                                                              uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                                   &local_420);
                                                              if (plVar4 != (long *)0x0) {
                                                                (**(code **)(*plVar4 + 0x318))
                                                                          (plVar4,uVar1,uVar2,
                                                                           *(undefined8 *)
                                                                            (*plVar4 + 800));
                                                                plVar4 = (long *)*puVar3;
                                                                local_424 = 0xa5;
                                                                uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                                     &local_424);
                                                                local_428 = 0;
                                                                local_430 = 0;
                                                                System_ConsoleKeyInfo___ctor
                                                                          (&local_430,10,0xd,0,0,0,0
                                                                          );
                                                                local_440 = local_430;
                                                                local_438 = local_428;
                                                                uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                                     &local_440);
                                                                if (plVar4 != (long *)0x0) {
                                                                  (**(code **)(*plVar4 + 0x318))
                                                                            (plVar4,uVar1,uVar2,
                                                                             *(undefined8 *)
                                                                              (*plVar4 + 800));
                                                                  plVar4 = (long *)*puVar3;
                                                                  local_444 = 0xa8;
                                                                  uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                                       &local_444);
                                                                  local_448 = 0;
                                                                  local_450 = 0;
                                                                  System_ConsoleKeyInfo___ctor
                                                                            (&local_450,0,0x2f,0,0,0
                                                                             ,0);
                                                                  local_460 = local_450;
                                                                  local_458 = local_448;
                                                                  uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                                       &local_460);
                                                                  if (plVar4 != (long *)0x0) {
                                                                    (**(code **)(*plVar4 + 0x318))
                                                                              (plVar4,uVar1,uVar2,
                                                                               *(undefined8 *)
                                                                                (*plVar4 + 800));
                                                                    plVar4 = (long *)*puVar3;
                                                                    local_464 = 0xb0;
                                                                    uVar1 = FUN_03f5c42c(
                                                  DAT_0918ba10,&local_464);
                                                  local_468 = 0;
                                                  local_470 = 0;
                                                  System_ConsoleKeyInfo___ctor
                                                            (&local_470,0,0x2a,0,0,0,0);
                                                  local_480 = local_470;
                                                  local_478 = local_468;
                                                  uVar2 = FUN_03f5c42c(DAT_09182a40,&local_480);
                                                  if (plVar4 != (long *)0x0) {
                                                    (**(code **)(*plVar4 + 0x318))
                                                              (plVar4,uVar1,uVar2,
                                                               *(undefined8 *)(*plVar4 + 800));
                                                    plVar4 = (long *)*puVar3;
                                                    local_484 = 0xb9;
                                                    uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_484);
                                                    local_488 = 0;
                                                    local_490 = 0;
                                                    System_ConsoleKeyInfo___ctor
                                                              (&local_490,0x5a,0x5a,0,1,0,0);
                                                    local_4a0 = local_490;
                                                    local_498 = local_488;
                                                    uVar2 = FUN_03f5c42c(DAT_09182a40,&local_4a0);
                                                    if (plVar4 != (long *)0x0) {
                                                      (**(code **)(*plVar4 + 0x318))
                                                                (plVar4,uVar1,uVar2,
                                                                 *(undefined8 *)(*plVar4 + 800));
                                                      plVar4 = (long *)*puVar3;
                                                      local_4a4 = 0xba;
                                                      uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_4a4);
                                                      local_4a8 = 0;
                                                      local_4b0 = 0;
                                                      System_ConsoleKeyInfo___ctor
                                                                (&local_4b0,0,0x24,1,0,0,0);
                                                      local_4c0 = local_4b0;
                                                      local_4b8 = local_4a8;
                                                      uVar2 = FUN_03f5c42c(DAT_09182a40,&local_4c0);
                                                      if (plVar4 != (long *)0x0) {
                                                        (**(code **)(*plVar4 + 0x318))
                                                                  (plVar4,uVar1,uVar2,
                                                                   *(undefined8 *)(*plVar4 + 800));
                                                        plVar4 = (long *)*puVar3;
                                                        local_4c4 = 0xbd;
                                                        uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_4c4
                                                                            );
                                                        local_4c8 = 0;
                                                        local_4d0 = 0;
                                                        System_ConsoleKeyInfo___ctor
                                                                  (&local_4d0,0x43,0x43,1,1,0,0);
                                                        local_4e0 = local_4d0;
                                                        local_4d8 = local_4c8;
                                                        uVar2 = FUN_03f5c42c(DAT_09182a40,&local_4e0
                                                                            );
                                                        if (plVar4 != (long *)0x0) {
                                                          (**(code **)(*plVar4 + 0x318))
                                                                    (plVar4,uVar1,uVar2,
                                                                     *(undefined8 *)(*plVar4 + 800))
                                                          ;
                                                          plVar4 = (long *)*puVar3;
                                                          local_4e4 = 0xbf;
                                                          uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                               &local_4e4);
                                                          local_4e8 = 0;
                                                          local_4f0 = 0;
                                                          System_ConsoleKeyInfo___ctor
                                                                    (&local_4f0,9,0x2e,1,0,0,0);
                                                          local_500 = local_4f0;
                                                          local_4f8 = local_4e8;
                                                          uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                               &local_500);
                                                          if (plVar4 != (long *)0x0) {
                                                            (**(code **)(*plVar4 + 0x318))
                                                                      (plVar4,uVar1,uVar2,
                                                                       *(undefined8 *)
                                                                        (*plVar4 + 800));
                                                            plVar4 = (long *)*puVar3;
                                                            local_504 = 0xc6;
                                                            uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                                 &local_504);
                                                            local_508 = 0;
                                                            local_510 = 0;
                                                            System_ConsoleKeyInfo___ctor
                                                                      (&local_510,0,0x2f,1,0,0,0);
                                                            local_520 = local_510;
                                                            local_518 = local_508;
                                                            uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                                 &local_520);
                                                            if (plVar4 != (long *)0x0) {
                                                              (**(code **)(*plVar4 + 0x318))
                                                                        (plVar4,uVar1,uVar2,
                                                                         *(undefined8 *)
                                                                          (*plVar4 + 800));
                                                              plVar4 = (long *)*puVar3;
                                                              local_524 = 199;
                                                              uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                                   &local_524);
                                                              local_528 = 0;
                                                              local_530 = 0;
                                                              System_ConsoleKeyInfo___ctor
                                                                        (&local_530,0,0x24,1,0,0,0);
                                                              local_540 = local_530;
                                                              local_538 = local_528;
                                                              uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                                   &local_540);
                                                              if (plVar4 != (long *)0x0) {
                                                                (**(code **)(*plVar4 + 0x318))
                                                                          (plVar4,uVar1,uVar2,
                                                                           *(undefined8 *)
                                                                            (*plVar4 + 800));
                                                                plVar4 = (long *)*puVar3;
                                                                local_544 = 0xc9;
                                                                uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                                     &local_544);
                                                                local_548 = 0;
                                                                local_550 = 0;
                                                                System_ConsoleKeyInfo___ctor
                                                                          (&local_550,0,0x25,1,0,0,0
                                                                          );
                                                                local_560 = local_550;
                                                                local_558 = local_548;
                                                                uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                                     &local_560);
                                                                if (plVar4 != (long *)0x0) {
                                                                  (**(code **)(*plVar4 + 0x318))
                                                                            (plVar4,uVar1,uVar2,
                                                                             *(undefined8 *)
                                                                              (*plVar4 + 800));
                                                                  plVar4 = (long *)*puVar3;
                                                                  local_564 = 0xcf;
                                                                  uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                                       &local_564);
                                                                  local_568 = 0;
                                                                  local_570 = 0;
                                                                  System_ConsoleKeyInfo___ctor
                                                                            (&local_570,0,0x2a,1,0,0
                                                                             ,0);
                                                                  local_580 = local_570;
                                                                  local_578 = local_568;
                                                                  uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                                       &local_580);
                                                                  if (plVar4 != (long *)0x0) {
                                                                    (**(code **)(*plVar4 + 0x318))
                                                                              (plVar4,uVar1,uVar2,
                                                                               *(undefined8 *)
                                                                                (*plVar4 + 800));
                                                                    plVar4 = (long *)*puVar3;
                                                                    local_584 = 0xd2;
                                                                    uVar1 = FUN_03f5c42c(
                                                  DAT_0918ba10,&local_584);
                                                  local_588 = 0;
                                                  local_590 = 0;
                                                  System_ConsoleKeyInfo___ctor
                                                            (&local_590,0,0x27,1,0,0,0);
                                                  local_5a0 = local_590;
                                                  local_598 = local_588;
                                                  uVar2 = FUN_03f5c42c(DAT_09182a40,&local_5a0);
                                                  if (plVar4 != (long *)0x0) {
                                                    (**(code **)(*plVar4 + 0x318))
                                                              (plVar4,uVar1,uVar2,
                                                               *(undefined8 *)(*plVar4 + 800));
                                                    plVar4 = (long *)*puVar3;
                                                    local_5a4 = 0xd6;
                                                    uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_5a4);
                                                    local_5a8 = 0;
                                                    local_5b0 = 0;
                                                    System_ConsoleKeyInfo___ctor
                                                              (&local_5b0,0x5a,0x5a,1,0,0,0);
                                                    local_5c0 = local_5b0;
                                                    local_5b8 = local_5a8;
                                                    uVar2 = FUN_03f5c42c(DAT_09182a40,&local_5c0);
                                                    if (plVar4 != (long *)0x0) {
                                                      (**(code **)(*plVar4 + 0x318))
                                                                (plVar4,uVar1,uVar2,
                                                                 *(undefined8 *)(*plVar4 + 800));
                                                      plVar4 = (long *)*puVar3;
                                                      local_5c4 = 0xd8;
                                                      uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_5c4);
                                                      local_5c8 = 0;
                                                      local_5d0 = 0;
                                                      System_ConsoleKeyInfo___ctor
                                                                (&local_5d0,0,0x7a,0,0,0,0);
                                                      local_5e0 = local_5d0;
                                                      local_5d8 = local_5c8;
                                                      uVar2 = FUN_03f5c42c(DAT_09182a40,&local_5e0);
                                                      if (plVar4 != (long *)0x0) {
                                                        (**(code **)(*plVar4 + 0x318))
                                                                  (plVar4,uVar1,uVar2,
                                                                   *(undefined8 *)(*plVar4 + 800));
                                                        plVar4 = (long *)*puVar3;
                                                        local_5e4 = 0xd9;
                                                        uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_5e4
                                                                            );
                                                        local_5e8 = 0;
                                                        local_5f0 = 0;
                                                        System_ConsoleKeyInfo___ctor
                                                                  (&local_5f0,0,0x7b,0,0,0,0);
                                                        local_600 = local_5f0;
                                                        local_5f8 = local_5e8;
                                                        uVar2 = FUN_03f5c42c(DAT_09182a40,&local_600
                                                                            );
                                                        if (plVar4 != (long *)0x0) {
                                                          (**(code **)(*plVar4 + 0x318))
                                                                    (plVar4,uVar1,uVar2,
                                                                     *(undefined8 *)(*plVar4 + 800))
                                                          ;
                                                          plVar4 = (long *)*puVar3;
                                                          local_604 = 0xda;
                                                          uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                               &local_604);
                                                          local_608 = 0;
                                                          local_610 = 0;
                                                          System_ConsoleKeyInfo___ctor
                                                                    (&local_610,0,0x7c,0,0,0,0);
                                                          local_620 = local_610;
                                                          local_618 = local_608;
                                                          uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                               &local_620);
                                                          if (plVar4 != (long *)0x0) {
                                                            (**(code **)(*plVar4 + 0x318))
                                                                      (plVar4,uVar1,uVar2,
                                                                       *(undefined8 *)
                                                                        (*plVar4 + 800));
                                                            plVar4 = (long *)*puVar3;
                                                            local_624 = 0xdb;
                                                            uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                                 &local_624);
                                                            local_628 = 0;
                                                            local_630 = 0;
                                                            System_ConsoleKeyInfo___ctor
                                                                      (&local_630,0,0x7d,0,0,0,0);
                                                            local_640 = local_630;
                                                            local_638 = local_628;
                                                            uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                                 &local_640);
                                                            if (plVar4 != (long *)0x0) {
                                                              (**(code **)(*plVar4 + 0x318))
                                                                        (plVar4,uVar1,uVar2,
                                                                         *(undefined8 *)
                                                                          (*plVar4 + 800));
                                                              plVar4 = (long *)*puVar3;
                                                              local_644 = 0xdc;
                                                              uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                                   &local_644);
                                                              local_648 = 0;
                                                              local_650 = 0;
                                                              System_ConsoleKeyInfo___ctor
                                                                        (&local_650,0,0x7e,0,0,0,0);
                                                              local_660 = local_650;
                                                              local_658 = local_648;
                                                              uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                                   &local_660);
                                                              if (plVar4 != (long *)0x0) {
                                                                (**(code **)(*plVar4 + 0x318))
                                                                          (plVar4,uVar1,uVar2,
                                                                           *(undefined8 *)
                                                                            (*plVar4 + 800));
                                                                plVar4 = (long *)*puVar3;
                                                                local_664 = 0xdd;
                                                                uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                                     &local_664);
                                                                local_668 = 0;
                                                                local_670 = 0;
                                                                System_ConsoleKeyInfo___ctor
                                                                          (&local_670,0,0x7f,0,0,0,0
                                                                          );
                                                                local_680 = local_670;
                                                                local_678 = local_668;
                                                                uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                                     &local_680);
                                                                if (plVar4 != (long *)0x0) {
                                                                  (**(code **)(*plVar4 + 0x318))
                                                                            (plVar4,uVar1,uVar2,
                                                                             *(undefined8 *)
                                                                              (*plVar4 + 800));
                                                                  plVar4 = (long *)*puVar3;
                                                                  local_684 = 0xde;
                                                                  uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                                       &local_684);
                                                                  local_688 = 0;
                                                                  local_690 = 0;
                                                                  System_ConsoleKeyInfo___ctor
                                                                            (&local_690,0,0x80,0,0,0
                                                                             ,0);
                                                                  local_6a0 = local_690;
                                                                  local_698 = local_688;
                                                                  uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                                       &local_6a0);
                                                                  if (plVar4 != (long *)0x0) {
                                                                    (**(code **)(*plVar4 + 0x318))
                                                                              (plVar4,uVar1,uVar2,
                                                                               *(undefined8 *)
                                                                                (*plVar4 + 800));
                                                                    plVar4 = (long *)*puVar3;
                                                                    local_6a4 = 0xdf;
                                                                    uVar1 = FUN_03f5c42c(
                                                  DAT_0918ba10,&local_6a4);
                                                  local_6a8 = 0;
                                                  local_6b0 = 0;
                                                  System_ConsoleKeyInfo___ctor
                                                            (&local_6b0,0,0x81,0,0,0,0);
                                                  local_6c0 = local_6b0;
                                                  local_6b8 = local_6a8;
                                                  uVar2 = FUN_03f5c42c(DAT_09182a40,&local_6c0);
                                                  if (plVar4 != (long *)0x0) {
                                                    (**(code **)(*plVar4 + 0x318))
                                                              (plVar4,uVar1,uVar2,
                                                               *(undefined8 *)(*plVar4 + 800));
                                                    plVar4 = (long *)*puVar3;
                                                    local_6c4 = 0xe0;
                                                    uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_6c4);
                                                    local_6c8 = 0;
                                                    local_6d0 = 0;
                                                    System_ConsoleKeyInfo___ctor
                                                              (&local_6d0,0,0x82,0,0,0,0);
                                                    local_6e0 = local_6d0;
                                                    local_6d8 = local_6c8;
                                                    uVar2 = FUN_03f5c42c(DAT_09182a40,&local_6e0);
                                                    if (plVar4 != (long *)0x0) {
                                                      (**(code **)(*plVar4 + 0x318))
                                                                (plVar4,uVar1,uVar2,
                                                                 *(undefined8 *)(*plVar4 + 800));
                                                      plVar4 = (long *)*puVar3;
                                                      local_6e4 = 0xe1;
                                                      uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_6e4);
                                                      local_6e8 = 0;
                                                      local_6f0 = 0;
                                                      System_ConsoleKeyInfo___ctor
                                                                (&local_6f0,0,0x83,0,0,0,0);
                                                      local_700 = local_6f0;
                                                      local_6f8 = local_6e8;
                                                      uVar2 = FUN_03f5c42c(DAT_09182a40,&local_700);
                                                      if (plVar4 != (long *)0x0) {
                                                        (**(code **)(*plVar4 + 0x318))
                                                                  (plVar4,uVar1,uVar2,
                                                                   *(undefined8 *)(*plVar4 + 800));
                                                        plVar4 = (long *)*puVar3;
                                                        local_704 = 0xe2;
                                                        uVar1 = FUN_03f5c42c(DAT_0918ba10,&local_704
                                                                            );
                                                        local_708 = 0;
                                                        local_710 = 0;
                                                        System_ConsoleKeyInfo___ctor
                                                                  (&local_710,0,0x84,0,0,0,0);
                                                        local_720 = local_710;
                                                        local_718 = local_708;
                                                        uVar2 = FUN_03f5c42c(DAT_09182a40,&local_720
                                                                            );
                                                        if (plVar4 != (long *)0x0) {
                                                          (**(code **)(*plVar4 + 0x318))
                                                                    (plVar4,uVar1,uVar2,
                                                                     *(undefined8 *)(*plVar4 + 800))
                                                          ;
                                                          plVar4 = (long *)*puVar3;
                                                          local_724 = 0xe3;
                                                          uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                               &local_724);
                                                          local_728 = 0;
                                                          local_730 = 0;
                                                          System_ConsoleKeyInfo___ctor
                                                                    (&local_730,0,0x85,0,0,0,0);
                                                          local_740 = local_730;
                                                          local_738 = local_728;
                                                          uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                               &local_740);
                                                          if (plVar4 != (long *)0x0) {
                                                            (**(code **)(*plVar4 + 0x318))
                                                                      (plVar4,uVar1,uVar2,
                                                                       *(undefined8 *)
                                                                        (*plVar4 + 800));
                                                            plVar4 = (long *)*puVar3;
                                                            local_744 = 0xe4;
                                                            uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                                 &local_744);
                                                            local_748 = 0;
                                                            local_750 = 0;
                                                            System_ConsoleKeyInfo___ctor
                                                                      (&local_750,0,0x86,0,0,0,0);
                                                            local_760 = local_750;
                                                            local_758 = local_748;
                                                            uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                                 &local_760);
                                                            if (plVar4 != (long *)0x0) {
                                                              (**(code **)(*plVar4 + 0x318))
                                                                        (plVar4,uVar1,uVar2,
                                                                         *(undefined8 *)
                                                                          (*plVar4 + 800));
                                                              plVar4 = (long *)*puVar3;
                                                              local_764 = 0xe5;
                                                              uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                                   &local_764);
                                                              local_768 = 0;
                                                              local_770 = 0;
                                                              System_ConsoleKeyInfo___ctor
                                                                        (&local_770,0,0x87,0,0,0,0);
                                                              local_780 = local_770;
                                                              local_778 = local_768;
                                                              uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                                   &local_780);
                                                              if (plVar4 != (long *)0x0) {
                                                                (**(code **)(*plVar4 + 0x318))
                                                                          (plVar4,uVar1,uVar2,
                                                                           *(undefined8 *)
                                                                            (*plVar4 + 800));
                                                                plVar4 = (long *)*puVar3;
                                                                local_784 = 0x3b;
                                                                uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                                     &local_784);
                                                                local_788 = 0;
                                                                local_790 = 0;
                                                                System_ConsoleKeyInfo___ctor
                                                                          (&local_790,0,0x2e,0,0,0,0
                                                                          );
                                                                local_7a0 = local_790;
                                                                local_798 = local_788;
                                                                uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                                     &local_7a0);
                                                                if (plVar4 != (long *)0x0) {
                                                                  (**(code **)(*plVar4 + 0x318))
                                                                            (plVar4,uVar1,uVar2,
                                                                             *(undefined8 *)
                                                                              (*plVar4 + 800));
                                                                  plVar4 = (long *)*puVar3;
                                                                  local_7a4 = 0x4d;
                                                                  uVar1 = FUN_03f5c42c(DAT_0918ba10,
                                                                                       &local_7a4);
                                                                  local_7a8 = 0;
                                                                  local_7b0 = 0;
                                                                  System_ConsoleKeyInfo___ctor
                                                                            (&local_7b0,0,0x2d,0,0,0
                                                                             ,0);
                                                                  local_7c0 = local_7b0;
                                                                  local_7b8 = local_7a8;
                                                                  uVar2 = FUN_03f5c42c(DAT_09182a40,
                                                                                       &local_7c0);
                                                                  if (plVar4 != (long *)0x0) {
                                                                    (**(code **)(*plVar4 + 0x318))
                                                                              (plVar4,uVar1,uVar2,
                                                                               *(undefined8 *)
                                                                                (*plVar4 + 800));
                                                                    return;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

