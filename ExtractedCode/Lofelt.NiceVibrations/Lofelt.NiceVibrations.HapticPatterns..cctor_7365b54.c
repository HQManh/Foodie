// rea decompile_all
// name: Lofelt.NiceVibrations.HapticPatterns$$.cctor
// address: 0x7365b54
// body: available
// range: 0x7365b54-0x7366307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7366300 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7366304 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lofelt_NiceVibrations_HapticPatterns___cctor(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_09520896 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184fd8);
    FUN_03f5c2a4(&DAT_09188a80);
    FUN_03f5c2a4(&DAT_09180528);
    FUN_03f5c2a4(&DAT_0918ba60);
    FUN_03f5c2a4(&DAT_091f3a08);
    FUN_03f5c2a4(&DAT_091f3a10);
    FUN_03f5c2a4(&DAT_091f3a18);
    FUN_03f5c2a4(&DAT_091f3a20);
    FUN_03f5c2a4(&DAT_09220190);
    FUN_03f5c2a4(&DAT_09220198);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09520896 = 1;
  }
  uVar1 = FUN_03f5c394(DAT_09180528,2);
  puVar6 = (undefined8 *)(*(long *)(DAT_09184fd8 + 0xb8) + 0x18);
  *puVar6 = uVar1;
  thunk_FUN_03f5d7b8(puVar6,uVar1);
  plVar2 = (long *)UnityEngine_Resources__Load(DAT_09220198,0);
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(DAT_0918ba60 + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_0918ba60 + 0x130) * 8 + -8) ==
        DAT_0918ba60)) {
      uVar1 = UnityEngine_TextAsset__get_text(plVar2,0);
      **(undefined8 **)(DAT_09184fd8 + 0xb8) = uVar1;
      thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09184fd8 + 0xb8),uVar1);
      plVar2 = (long *)UnityEngine_Resources__Load(DAT_09220190,0);
      if (plVar2 != (long *)0x0) {
        if ((*(byte *)(DAT_0918ba60 + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_0918ba60 + 0x130) * 8 + -8) ==
            DAT_0918ba60)) {
          uVar1 = UnityEngine_TextAsset__get_text(plVar2,0);
          puVar6 = (undefined8 *)(*(long *)(DAT_09184fd8 + 0xb8) + 8);
          *puVar6 = uVar1;
          thunk_FUN_03f5d7b8(puVar6,uVar1);
          uVar1 = thunk_FUN_03f9944c(DAT_09188a80);
          System_Globalization_NumberFormatInfo___ctor(uVar1,0);
          puVar6 = (undefined8 *)(*(long *)(DAT_09184fd8 + 0xb8) + 0x10);
          *puVar6 = uVar1;
          thunk_FUN_03f5d7b8(puVar6,uVar1);
          lVar3 = *(long *)(*(long *)(DAT_09184fd8 + 0xb8) + 0x10);
          if (lVar3 != 0) {
            System_Globalization_NumberFormatInfo__set_NumberDecimalSeparator(lVar3,DAT_091f8f68,0);
            lVar3 = FUN_03f5c394(DAT_09180528,2);
            uVar1 = DAT_09180528;
            if (lVar3 != 0) {
              if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                *(undefined4 *)(lVar3 + 0x24) = 0x3d23d70a;
                lVar4 = FUN_03f5c394(uVar1,2);
                if (lVar4 == 0) goto LAB_07366304;
                if ((*(int *)(lVar4 + 0x18) != 0) &&
                   (*(undefined4 *)(lVar4 + 0x20) = 0x3ef126e9, *(int *)(lVar4 + 0x18) != 1)) {
                  *(undefined4 *)(lVar4 + 0x24) = 0x3ef126e9;
                  local_58 = 0;
                  uStack_50 = 0;
                  local_48 = 0;
                  Lofelt_NiceVibrations_HapticPatterns_Preset___ctor(&local_58,0,lVar3);
                  lVar3 = DAT_09184fd8;
                  lVar4 = *(long *)(DAT_09184fd8 + 0xb8);
                  *(undefined8 *)(lVar4 + 0x28) = uStack_50;
                  *(undefined8 *)(lVar4 + 0x20) = local_58;
                  *(undefined8 *)(lVar4 + 0x30) = local_48;
                  thunk_FUN_03f5d7b8(*(long *)(lVar3 + 0xb8) + 0x28,0);
                  lVar3 = FUN_03f5c394(DAT_09180528,2);
                  uVar1 = DAT_09180528;
                  if (lVar3 == 0) goto LAB_07366304;
                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                    *(undefined4 *)(lVar3 + 0x24) = 0x3d23d70a;
                    lVar4 = FUN_03f5c394(uVar1,2);
                    if (lVar4 == 0) goto LAB_07366304;
                    if ((*(int *)(lVar4 + 0x18) != 0) &&
                       (*(undefined4 *)(lVar4 + 0x20) = 0x3e1fbe77, *(int *)(lVar4 + 0x18) != 1)) {
                      *(undefined4 *)(lVar4 + 0x24) = 0x3e1fbe77;
                      local_70 = 0;
                      uStack_68 = 0;
                      local_60 = 0;
                      Lofelt_NiceVibrations_HapticPatterns_Preset___ctor(&local_70,4,lVar3);
                      lVar3 = DAT_09184fd8;
                      lVar4 = *(long *)(DAT_09184fd8 + 0xb8);
                      *(undefined8 *)(lVar4 + 0x40) = uStack_68;
                      *(undefined8 *)(lVar4 + 0x38) = local_70;
                      *(undefined8 *)(lVar4 + 0x48) = local_60;
                      thunk_FUN_03f5d7b8(*(long *)(lVar3 + 0xb8) + 0x40,0);
                      lVar3 = FUN_03f5c394(DAT_09180528,2);
                      uVar1 = DAT_09180528;
                      if (lVar3 == 0) goto LAB_07366304;
                      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                        *(undefined4 *)(lVar3 + 0x24) = 0x3da3d70a;
                        lVar4 = FUN_03f5c394(uVar1,2);
                        if (lVar4 == 0) goto LAB_07366304;
                        if ((*(int *)(lVar4 + 0x18) != 0) &&
                           (*(undefined4 *)(lVar4 + 0x20) = 0x3ef126e9, *(int *)(lVar4 + 0x18) != 1)
                           ) {
                          *(undefined4 *)(lVar4 + 0x24) = 0x3ef126e9;
                          local_88 = 0;
                          uStack_80 = 0;
                          local_78 = 0;
                          Lofelt_NiceVibrations_HapticPatterns_Preset___ctor(&local_88,5,lVar3);
                          lVar3 = DAT_09184fd8;
                          lVar4 = *(long *)(DAT_09184fd8 + 0xb8);
                          *(undefined8 *)(lVar4 + 0x58) = uStack_80;
                          *(undefined8 *)(lVar4 + 0x50) = local_88;
                          *(undefined8 *)(lVar4 + 0x60) = local_78;
                          thunk_FUN_03f5d7b8(*(long *)(lVar3 + 0xb8) + 0x58,0);
                          lVar3 = FUN_03f5c394(DAT_09180528,2);
                          uVar1 = DAT_09180528;
                          if (lVar3 == 0) goto LAB_07366304;
                          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                            *(undefined4 *)(lVar3 + 0x24) = 0x3e23d70a;
                            lVar4 = FUN_03f5c394(uVar1,2);
                            if (lVar4 == 0) goto LAB_07366304;
                            if ((*(int *)(lVar4 + 0x18) != 0) &&
                               (*(undefined4 *)(lVar4 + 0x20) = 0x3f800000,
                               *(int *)(lVar4 + 0x18) != 1)) {
                              *(undefined4 *)(lVar4 + 0x24) = 0x3f800000;
                              local_a0 = 0;
                              uStack_98 = 0;
                              local_90 = 0;
                              Lofelt_NiceVibrations_HapticPatterns_Preset___ctor(&local_a0,6,lVar3);
                              lVar3 = DAT_09184fd8;
                              lVar4 = *(long *)(DAT_09184fd8 + 0xb8);
                              *(undefined8 *)(lVar4 + 0x70) = uStack_98;
                              *(undefined8 *)(lVar4 + 0x68) = local_a0;
                              *(undefined8 *)(lVar4 + 0x78) = local_90;
                              thunk_FUN_03f5d7b8(*(long *)(lVar3 + 0xb8) + 0x70,0);
                              lVar3 = FUN_03f5c394(DAT_09180528,2);
                              uVar1 = DAT_09180528;
                              if (lVar3 == 0) goto LAB_07366304;
                              if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                                *(undefined4 *)(lVar3 + 0x24) = 0x3d23d70a;
                                lVar4 = FUN_03f5c394(uVar1,2);
                                if (lVar4 == 0) goto LAB_07366304;
                                if ((*(int *)(lVar4 + 0x18) != 0) &&
                                   (*(undefined4 *)(lVar4 + 0x20) = 0x3f800000,
                                   *(int *)(lVar4 + 0x18) != 1)) {
                                  *(undefined4 *)(lVar4 + 0x24) = 0x3f800000;
                                  local_b8 = 0;
                                  uStack_b0 = 0;
                                  local_a8 = 0;
                                  Lofelt_NiceVibrations_HapticPatterns_Preset___ctor
                                            (&local_b8,7,lVar3);
                                  lVar3 = DAT_09184fd8;
                                  lVar4 = *(long *)(DAT_09184fd8 + 0xb8);
                                  *(undefined8 *)(lVar4 + 0x88) = uStack_b0;
                                  *(undefined8 *)(lVar4 + 0x80) = local_b8;
                                  *(undefined8 *)(lVar4 + 0x90) = local_a8;
                                  thunk_FUN_03f5d7b8(*(long *)(lVar3 + 0xb8) + 0x88,0);
                                  lVar3 = FUN_03f5c394(DAT_09180528,2);
                                  uVar1 = DAT_09180528;
                                  if (lVar3 == 0) goto LAB_07366304;
                                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                                    *(undefined4 *)(lVar3 + 0x24) = 0x3e23d70a;
                                    lVar4 = FUN_03f5c394(uVar1,2);
                                    if (lVar4 == 0) goto LAB_07366304;
                                    if ((*(int *)(lVar4 + 0x18) != 0) &&
                                       (*(undefined4 *)(lVar4 + 0x20) = 0x3e1fbe77,
                                       *(int *)(lVar4 + 0x18) != 1)) {
                                      *(undefined4 *)(lVar4 + 0x24) = 0x3e1fbe77;
                                      uStack_c8 = 0;
                                      local_d0 = 0;
                                      local_c0 = 0;
                                      Lofelt_NiceVibrations_HapticPatterns_Preset___ctor
                                                (&local_d0,8,lVar3);
                                      lVar3 = DAT_09184fd8;
                                      lVar4 = *(long *)(DAT_09184fd8 + 0xb8);
                                      *(undefined8 *)(lVar4 + 0xa0) = uStack_c8;
                                      *(undefined8 *)(lVar4 + 0x98) = local_d0;
                                      *(undefined8 *)(lVar4 + 0xa8) = local_c0;
                                      thunk_FUN_03f5d7b8(*(long *)(lVar3 + 0xb8) + 0xa0,0);
                                      uVar1 = FUN_03f5c394(DAT_09180528,4);
                                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                (uVar1,DAT_091f3a10,0);
                                      lVar3 = FUN_03f5c394(DAT_09180528,4);
                                      if (lVar3 == 0) goto LAB_07366304;
                                      if ((1 < *(uint *)(lVar3 + 0x18)) &&
                                         (*(undefined4 *)(lVar3 + 0x24) = 0x3e20c49c,
                                         3 < *(uint *)(lVar3 + 0x18))) {
                                        *(undefined4 *)(lVar3 + 0x2c) = 0x3f800000;
                                        uStack_e0 = 0;
                                        local_e8 = 0;
                                        local_d8 = 0;
                                        Lofelt_NiceVibrations_HapticPatterns_Preset___ctor
                                                  (&local_e8,1,uVar1);
                                        lVar3 = DAT_09184fd8;
                                        lVar4 = *(long *)(DAT_09184fd8 + 0xb8);
                                        *(undefined8 *)(lVar4 + 0xb8) = uStack_e0;
                                        *(undefined8 *)(lVar4 + 0xb0) = local_e8;
                                        *(undefined8 *)(lVar4 + 0xc0) = local_d8;
                                        thunk_FUN_03f5d7b8(*(long *)(lVar3 + 0xb8) + 0xb8,0);
                                        uVar1 = FUN_03f5c394(DAT_09180528,8);
                                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                  (uVar1,DAT_091f3a08,0);
                                        uVar5 = FUN_03f5c394(DAT_09180528,8);
                                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                  (uVar5,DAT_091f3a20,0);
                                        local_100 = 0;
                                        uStack_f8 = 0;
                                        local_f0 = 0;
                                        Lofelt_NiceVibrations_HapticPatterns_Preset___ctor
                                                  (&local_100,3,uVar1,uVar5);
                                        lVar3 = DAT_09184fd8;
                                        lVar4 = *(long *)(DAT_09184fd8 + 0xb8);
                                        *(undefined8 *)(lVar4 + 0xd0) = uStack_f8;
                                        *(undefined8 *)(lVar4 + 200) = local_100;
                                        *(undefined8 *)(lVar4 + 0xd8) = local_f0;
                                        thunk_FUN_03f5d7b8(*(long *)(lVar3 + 0xb8) + 0xd0,0);
                                        uVar1 = FUN_03f5c394(DAT_09180528,4);
                                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                  (uVar1,DAT_091f3a18,0);
                                        lVar3 = FUN_03f5c394(DAT_09180528,4);
                                        if (lVar3 == 0) goto LAB_07366304;
                                        if ((1 < *(uint *)(lVar3 + 0x18)) &&
                                           (*(undefined4 *)(lVar3 + 0x24) = 0x3f800000,
                                           3 < *(uint *)(lVar3 + 0x18))) {
                                          *(undefined4 *)(lVar3 + 0x2c) = 0x3ef0a3d7;
                                          local_118 = 0;
                                          uStack_110 = 0;
                                          local_108 = 0;
                                          Lofelt_NiceVibrations_HapticPatterns_Preset___ctor
                                                    (&local_118,2,uVar1);
                                          lVar3 = DAT_09184fd8;
                                          lVar4 = *(long *)(DAT_09184fd8 + 0xb8);
                                          *(undefined8 *)(lVar4 + 0xe8) = uStack_110;
                                          *(undefined8 *)(lVar4 + 0xe0) = local_118;
                                          *(undefined8 *)(lVar4 + 0xf0) = local_108;
                                          thunk_FUN_03f5d7b8(*(long *)(lVar3 + 0xb8) + 0xe8,0);
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
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
          }
        }
      }
    }
  }
LAB_07366304:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

