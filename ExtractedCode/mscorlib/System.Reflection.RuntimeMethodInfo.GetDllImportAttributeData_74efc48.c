// rea decompile_all
// name: System.Reflection.RuntimeMethodInfo$$GetDllImportAttributeData
// address: 0x74efc48
// body: available
// range: 0x74efc48-0x74f031b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74f0308 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74f030c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74f0318 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Reflection_RuntimeMethodInfo__GetDllImportAttributeData(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 local_244 [4];
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 local_204 [4];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  byte local_184 [4];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  byte local_144 [4];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  byte local_104 [4];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_0952161a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091822d0);
    FUN_03f5c2a4(&DAT_091824c8);
    FUN_03f5c2a4(&DAT_09183040);
    FUN_03f5c2a4(&DAT_0917fdb8);
    FUN_03f5c2a4(&DAT_0917fdc0);
    FUN_03f5c2a4(&DAT_091715e0);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_09201640);
    FUN_03f5c2a4(&DAT_0920cd90);
    FUN_03f5c2a4(&DAT_092108d0);
    FUN_03f5c2a4(&DAT_091fe818);
    FUN_03f5c2a4(&DAT_091fcaa0);
    FUN_03f5c2a4(&DAT_0920ac38);
    FUN_03f5c2a4(&DAT_09201b60);
    FUN_03f5c2a4(&DAT_091fd588);
    DAT_0952161a = 1;
  }
  local_68 = 0;
  local_70 = 0;
  local_74 = 0;
  uVar4 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
  if ((uVar4 >> 0xd & 1) == 0) {
    return 0;
  }
  local_70 = 0;
  local_74 = 0;
  FUN_03f6622c(param_1,&local_74,&local_68,&local_70);
  uVar3 = local_74;
  uVar4 = local_74 & 0x700;
  if (uVar4 < 0x201) {
    uVar14 = 1;
    if (uVar4 != 0x100) {
      uVar14 = 2;
    }
  }
  else if (uVar4 == 0x300) {
    uVar14 = 3;
  }
  else if (uVar4 == 0x400) {
    uVar14 = 4;
  }
  else if (uVar4 == 0x500) {
    uVar14 = 5;
  }
  else {
    uVar14 = 2;
  }
  uVar4 = local_74 & 0x30;
  uVar2 = *(undefined4 *)(&DAT_01b521b4 + ((ulong)local_74 & 6) * 4);
  uVar1 = local_74 & 0x3000;
  uVar5 = (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(*param_1 + 0x280));
  lVar6 = FUN_03f5c394(DAT_0917fdc0,1);
  lVar8 = DAT_09535468;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar7 = System_Type__GetTypeFromHandle(lVar8 + 0x20,0);
  uStack_88 = 0;
  local_90 = 0;
  System_Reflection_CustomAttributeTypedArgument___ctor(&local_90,uVar7,local_70);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_074f0308:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar6 + 0x28) = uStack_88;
    *(undefined8 *)(lVar6 + 0x20) = local_90;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x20),0);
    lVar8 = System_Type__GetTypeFromHandle(DAT_091715e0,0);
    lVar9 = FUN_03f5c394(DAT_0917fdb8,8);
    if (lVar8 != 0) {
      uVar7 = System_Type__GetField(lVar8,DAT_09201640,0);
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      System_Reflection_CustomAttributeNamedArgument___ctor(&local_c0,uVar7,local_68);
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x18) != 0) {
          *(undefined8 *)(lVar9 + 0x28) = uStack_b8;
          *(undefined8 *)(lVar9 + 0x20) = local_c0;
          *(undefined8 *)(lVar9 + 0x38) = uStack_a8;
          *(undefined8 *)(lVar9 + 0x30) = local_b0;
          *(undefined8 *)(lVar9 + 0x48) = uStack_98;
          *(undefined8 *)(lVar9 + 0x40) = local_a0;
          thunk_FUN_03f5d7b8(lVar9 + 0x20,0);
          uVar7 = System_Type__GetField(lVar8,DAT_091fe818,0);
          local_c4 = uVar2;
          uVar10 = FUN_03f5c42c(DAT_091824c8,&local_c4);
          uStack_e8 = 0;
          local_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_f8 = 0;
          local_100 = 0;
          System_Reflection_CustomAttributeNamedArgument___ctor(&local_100,uVar7,uVar10);
          if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar9 + 0x68) = uStack_e8;
            *(undefined8 *)(lVar9 + 0x60) = local_f0;
            *(undefined8 *)(lVar9 + 0x78) = uStack_d8;
            *(undefined8 *)(lVar9 + 0x70) = uStack_e0;
            *(undefined8 *)(lVar9 + 0x58) = uStack_f8;
            *(undefined8 *)(lVar9 + 0x50) = local_100;
            thunk_FUN_03f5d7b8(lVar9 + 0x50,0);
            uVar7 = System_Type__GetField(lVar8,DAT_09201b60,0);
            local_104[0] = (byte)uVar3 & 1;
            uVar10 = FUN_03f5c42c(DAT_09535400,local_104);
            uStack_128 = 0;
            local_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_138 = 0;
            local_140 = 0;
            System_Reflection_CustomAttributeNamedArgument___ctor(&local_140,uVar7,uVar10);
            if (2 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + 0x98) = uStack_128;
              *(undefined8 *)(lVar9 + 0x90) = local_130;
              *(undefined8 *)(lVar9 + 0xa8) = uStack_118;
              *(undefined8 *)(lVar9 + 0xa0) = uStack_120;
              *(undefined8 *)(lVar9 + 0x88) = uStack_138;
              *(undefined8 *)(lVar9 + 0x80) = local_140;
              thunk_FUN_03f5d7b8(lVar9 + 0x80,0);
              uVar7 = System_Type__GetField(lVar8,DAT_0920cd90,0);
              local_144[0] = (byte)(uVar3 >> 6) & 1;
              uVar10 = FUN_03f5c42c(DAT_09535400,local_144);
              uStack_168 = 0;
              local_170 = 0;
              uStack_158 = 0;
              uStack_160 = 0;
              uStack_178 = 0;
              local_180 = 0;
              System_Reflection_CustomAttributeNamedArgument___ctor(&local_180,uVar7,uVar10);
              if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar9 + 200) = uStack_168;
                *(undefined8 *)(lVar9 + 0xc0) = local_170;
                *(undefined8 *)(lVar9 + 0xd8) = uStack_158;
                *(undefined8 *)(lVar9 + 0xd0) = uStack_160;
                *(undefined8 *)(lVar9 + 0xb8) = uStack_178;
                *(undefined8 *)(lVar9 + 0xb0) = local_180;
                thunk_FUN_03f5d7b8(lVar9 + 0xb0,0);
                uVar7 = System_Type__GetField(lVar8,DAT_0920ac38,0);
                local_184[0] = (byte)(uVar5 >> 7) & 1;
                uVar10 = FUN_03f5c42c(DAT_09535400,local_184);
                uStack_1a8 = 0;
                local_1b0 = 0;
                uStack_198 = 0;
                uStack_1a0 = 0;
                uStack_1b8 = 0;
                local_1c0 = 0;
                System_Reflection_CustomAttributeNamedArgument___ctor(&local_1c0,uVar7,uVar10);
                if (4 < *(uint *)(lVar9 + 0x18)) {
                  *(undefined8 *)(lVar9 + 0xf8) = uStack_1a8;
                  *(undefined8 *)(lVar9 + 0xf0) = local_1b0;
                  *(undefined8 *)(lVar9 + 0x108) = uStack_198;
                  *(undefined8 *)(lVar9 + 0x100) = uStack_1a0;
                  *(undefined8 *)(lVar9 + 0xe8) = uStack_1b8;
                  *(undefined8 *)(lVar9 + 0xe0) = local_1c0;
                  thunk_FUN_03f5d7b8(lVar9 + 0xe0,0);
                  uVar7 = System_Type__GetField(lVar8,DAT_091fd588,0);
                  local_1c4 = uVar14;
                  uVar10 = FUN_03f5c42c(DAT_091822d0,&local_1c4);
                  uStack_1e8 = 0;
                  local_1f0 = 0;
                  uStack_1d8 = 0;
                  uStack_1e0 = 0;
                  uStack_1f8 = 0;
                  local_200 = 0;
                  System_Reflection_CustomAttributeNamedArgument___ctor(&local_200,uVar7,uVar10);
                  if (5 < *(uint *)(lVar9 + 0x18)) {
                    *(undefined8 *)(lVar9 + 0x128) = uStack_1e8;
                    *(undefined8 *)(lVar9 + 0x120) = local_1f0;
                    *(undefined8 *)(lVar9 + 0x138) = uStack_1d8;
                    *(undefined8 *)(lVar9 + 0x130) = uStack_1e0;
                    *(undefined8 *)(lVar9 + 0x118) = uStack_1f8;
                    *(undefined8 *)(lVar9 + 0x110) = local_200;
                    thunk_FUN_03f5d7b8(lVar9 + 0x110,0);
                    uVar7 = System_Type__GetField(lVar8,DAT_091fcaa0,0);
                    local_204[0] = uVar4 == 0x10;
                    uVar10 = FUN_03f5c42c(DAT_09535400,local_204);
                    uStack_228 = 0;
                    local_230 = 0;
                    uStack_218 = 0;
                    uStack_220 = 0;
                    uStack_238 = 0;
                    local_240 = 0;
                    System_Reflection_CustomAttributeNamedArgument___ctor(&local_240,uVar7,uVar10);
                    if (6 < *(uint *)(lVar9 + 0x18)) {
                      *(undefined8 *)(lVar9 + 0x158) = uStack_228;
                      *(undefined8 *)(lVar9 + 0x150) = local_230;
                      *(undefined8 *)(lVar9 + 0x168) = uStack_218;
                      *(undefined8 *)(lVar9 + 0x160) = uStack_220;
                      *(undefined8 *)(lVar9 + 0x148) = uStack_238;
                      *(undefined8 *)(lVar9 + 0x140) = local_240;
                      thunk_FUN_03f5d7b8(lVar9 + 0x140,0);
                      uVar7 = System_Type__GetField(lVar8,DAT_092108d0,0);
                      local_244[0] = uVar1 == 0x1000;
                      uVar10 = FUN_03f5c42c(DAT_09535400,local_244);
                      uStack_268 = 0;
                      local_270 = 0;
                      uStack_258 = 0;
                      uStack_260 = 0;
                      uStack_278 = 0;
                      local_280 = 0;
                      System_Reflection_CustomAttributeNamedArgument___ctor(&local_280,uVar7,uVar10)
                      ;
                      if ((*(uint *)(lVar9 + 0x18) & 0xfffffff8) != 0) {
                        *(undefined8 *)(lVar9 + 0x188) = uStack_268;
                        *(undefined8 *)(lVar9 + 0x180) = local_270;
                        *(undefined8 *)(lVar9 + 0x198) = uStack_258;
                        *(undefined8 *)(lVar9 + 400) = uStack_260;
                        *(undefined8 *)(lVar9 + 0x178) = uStack_278;
                        *(undefined8 *)(lVar9 + 0x170) = local_280;
                        thunk_FUN_03f5d7b8(lVar9 + 0x170,0);
                        plVar11 = (long *)FUN_03f5c394(DAT_09180748,1);
                        lVar12 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
                        if (plVar11 == (long *)0x0) goto LAB_074f030c;
                        if ((lVar12 != 0) &&
                           (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar11 + 0x40)),
                           lVar13 == 0)) {
                          uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c414(uVar7,0);
                        }
                        if ((int)plVar11[3] != 0) {
                          plVar11[4] = lVar12;
                          thunk_FUN_03f5d7b8(plVar11 + 4,lVar12);
                          uVar7 = System_Type__GetConstructor(lVar8,plVar11,0);
                          uVar10 = thunk_FUN_03f9944c(DAT_09183040);
                          System_Reflection_CustomAttributeData___ctor(uVar10,uVar7,lVar6,lVar9);
                          return uVar10;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_074f0308;
      }
    }
  }
LAB_074f030c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

