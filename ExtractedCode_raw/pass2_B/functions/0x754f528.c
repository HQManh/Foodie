// rea decompile_all
// name: System.Diagnostics.StackTrace$$GetFullNameForStackTrace
// address: 0x754f528
// body: available
// range: 0x754f528-0x754fb4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x754fb44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x754fb48 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x754fb4c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Diagnostics_StackTrace__GetFullNameForStackTrace
               (undefined8 param_1,long param_2,long *param_3,uint param_4,byte *param_5,
               byte *param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long *local_70;
  long *local_68;
  
  local_68 = param_3;
  if ((DAT_09521928 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171ae8);
    FUN_03f5c2a4(&DAT_09188228);
    FUN_03f5c2a4(&DAT_09172e20);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_091f5c20);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_091f83f0);
    FUN_03f5c2a4(&DAT_091f86d8);
    FUN_03f5c2a4(&DAT_092139f8);
    FUN_03f5c2a4(&DAT_091f5cd0);
    FUN_03f5c2a4(&DAT_09214720);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09521928 = 1;
  }
  local_70 = (long *)0x0;
  if ((param_3 != (long *)0x0) &&
     (plVar4 = (long *)(**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0)),
     local_70 = plVar4, plVar4 != (long *)0x0)) {
    uVar5 = (**(code **)(*plVar4 + 0x3d8))(plVar4,*(undefined8 *)(*plVar4 + 0x3e0));
    plVar11 = param_3;
    plVar7 = local_68;
    if (((uVar5 & 1) != 0) &&
       (uVar5 = (**(code **)(*plVar4 + 1000))(plVar4,*(undefined8 *)(*plVar4 + 0x3f0)),
       plVar7 = local_68, (uVar5 & 1) == 0)) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x468))(plVar4,*(undefined8 *)(*plVar4 + 0x470));
      local_70 = plVar4;
      if ((plVar4 == (long *)0x0) ||
         (lVar6 = (**(code **)(*plVar4 + 0x7d8))(plVar4,0x3e,*(undefined8 *)(*plVar4 + 0x7e0)),
         lVar6 == 0)) goto LAB_0754fb44;
      uVar9 = *(uint *)(lVar6 + 0x18);
      plVar7 = local_68;
      if (0 < (int)uVar9) {
        lVar12 = 0;
        do {
          if (uVar9 <= (uint)lVar12) goto LAB_0754fb48;
          plVar11 = *(long **)(lVar6 + 0x20 + lVar12 * 8);
          if (plVar11 == (long *)0x0) goto LAB_0754fb44;
          iVar2 = (**(code **)(*plVar11 + 0x248))(plVar11,*(undefined8 *)(*plVar11 + 0x250));
          iVar3 = (**(code **)(*param_3 + 0x248))(param_3,*(undefined8 *)(*param_3 + 0x250));
          plVar7 = plVar11;
          if (iVar2 == iVar3) break;
          uVar9 = *(uint *)(lVar6 + 0x18);
          lVar12 = lVar12 + 1;
          plVar11 = param_3;
          plVar7 = local_68;
        } while ((int)lVar12 < (int)uVar9);
      }
    }
    local_68 = plVar7;
    uVar8 = DAT_09171ae8;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar7 = (long *)System_Type__GetTypeFromHandle(uVar8,0);
    if (plVar7 != (long *)0x0) {
      bVar1 = (**(code **)(*plVar7 + 0x2b8))(plVar7,plVar4,*(undefined8 *)(*plVar7 + 0x2c0));
      *param_6 = bVar1 & 1;
      uVar8 = System_Type__GetTypeFromHandle(DAT_09172e20,0);
      uVar5 = System_Reflection_CustomAttributeExtensions__IsDefined(plVar11,uVar8,0);
      uVar8 = DAT_09172e20;
      if ((uVar5 & 1) == 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = System_Type__GetTypeFromHandle(uVar8,0);
        bVar1 = System_Reflection_CustomAttributeExtensions__IsDefined(plVar4,uVar8,0);
        *param_5 = bVar1 & 1;
        if ((bVar1 & 1) == 0) {
          if (*param_6 != 0) {
            System_Diagnostics_StackTrace__ConvertAsyncStateMachineMethod(&local_68,&local_70);
          }
          if ((param_4 & 1) == 0) {
            if (param_2 == 0) goto LAB_0754fb44;
          }
          else {
            uVar8 = System_Environment__get_NewLine(0);
            if (param_2 == 0) goto LAB_0754fb44;
            System_Text_StringBuilder__Append(param_2,uVar8,0);
          }
          System_Text_StringBuilder__Append(param_2,DAT_091f5c20,0);
          if (local_70 != (long *)0x0) {
            uVar8 = (**(code **)(*local_70 + 0x168))(local_70,*(undefined8 *)(*local_70 + 0x170));
            System_Text_StringBuilder__Append(param_2,uVar8,0);
            System_Text_StringBuilder__Append(param_2,DAT_091f8f68,0);
            if (local_68 != (long *)0x0) {
              uVar8 = (**(code **)(*local_68 + 0x1b8))(local_68,*(undefined8 *)(*local_68 + 0x1c0));
              System_Text_StringBuilder__Append(param_2,uVar8,0);
              if (local_68 != (long *)0x0) {
                uVar5 = (**(code **)(*local_68 + 0x318))(local_68,*(undefined8 *)(*local_68 + 800));
                if ((uVar5 & 1) != 0) {
                  if (local_68 == (long *)0x0) goto LAB_0754fb44;
                  lVar6 = *local_68;
                  if ((*(byte *)(lVar6 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
                     (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8
                               + -8) != DAT_09188228)) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c8d0();
                  }
                  local_68 = (long *)(**(code **)(lVar6 + 0x408))
                                               (local_68,*(undefined8 *)(lVar6 + 0x410));
                  if (local_68 == (long *)0x0) goto LAB_0754fb44;
                  lVar6 = (**(code **)(*local_68 + 0x338))
                                    (local_68,*(undefined8 *)(*local_68 + 0x340));
                  System_Text_StringBuilder__Append(param_2,DAT_092139f8,0);
                  if (lVar6 == 0) goto LAB_0754fb44;
                  uVar9 = *(uint *)(lVar6 + 0x18);
                  if (0 < (int)uVar9) {
                    uVar10 = 0;
                    do {
                      if (uVar10 != 0) {
                        System_Text_StringBuilder__Append(param_2,DAT_091f86d8,0);
                        uVar9 = *(uint *)(lVar6 + 0x18);
                      }
                      if (uVar9 <= uVar10) goto LAB_0754fb48;
                      plVar4 = *(long **)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
                      if (plVar4 == (long *)0x0) goto LAB_0754fb44;
                      uVar8 = (**(code **)(*plVar4 + 0x1b8))
                                        (plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
                      System_Text_StringBuilder__Append(param_2,uVar8,0);
                      uVar9 = *(uint *)(lVar6 + 0x18);
                      uVar10 = uVar10 + 1;
                    } while ((int)uVar10 < (int)uVar9);
                  }
                  System_Text_StringBuilder__Append(param_2,DAT_09214720,0);
                }
                if (local_68 != (long *)0x0) {
                  lVar6 = (**(code **)(*local_68 + 600))
                                    (local_68,*(undefined8 *)(*local_68 + 0x260));
                  System_Text_StringBuilder__Append(param_2,DAT_091f5cd0,0);
                  if (lVar6 != 0) {
                    uVar9 = *(uint *)(lVar6 + 0x18);
                    if (0 < (int)uVar9) {
                      uVar10 = 0;
                      do {
                        if (uVar10 != 0) {
                          System_Text_StringBuilder__Append(param_2,DAT_091f86e8,0);
                          uVar9 = *(uint *)(lVar6 + 0x18);
                        }
                        if (uVar9 <= uVar10) {
LAB_0754fb48:
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c558();
                        }
                        plVar11 = (long *)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
                        plVar4 = (long *)*plVar11;
                        if (((plVar4 == (long *)0x0) ||
                            (plVar4 = (long *)(**(code **)(*plVar4 + 0x1e8))
                                                        (plVar4,*(undefined8 *)(*plVar4 + 0x1f0)),
                            plVar4 == (long *)0x0)) ||
                           ((uVar5 = (**(code **)(*plVar4 + 0x3d8))
                                               (plVar4,*(undefined8 *)(*plVar4 + 0x3e0)),
                            (uVar5 & 1) != 0 &&
                            ((uVar5 = (**(code **)(*plVar4 + 1000))
                                                (plVar4,*(undefined8 *)(*plVar4 + 0x3f0)),
                             (uVar5 & 1) == 0 &&
                             (plVar4 = (long *)(**(code **)(*plVar4 + 0x468))
                                                         (plVar4,*(undefined8 *)(*plVar4 + 0x470)),
                             plVar4 == (long *)0x0)))))) goto LAB_0754fb44;
                        uVar8 = (**(code **)(*plVar4 + 0x168))
                                          (plVar4,*(undefined8 *)(*plVar4 + 0x170));
                        System_Text_StringBuilder__Append(param_2,uVar8,0);
                        if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_0754fb48;
                        plVar4 = (long *)*plVar11;
                        if (plVar4 == (long *)0x0) goto LAB_0754fb44;
                        lVar12 = (**(code **)(*plVar4 + 0x1d8))
                                           (plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
                        if (lVar12 != 0) {
                          System_Text_StringBuilder__Append(param_2,DAT_091f5a98,0);
                          if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_0754fb48;
                          plVar11 = (long *)*plVar11;
                          if (plVar11 == (long *)0x0) goto LAB_0754fb44;
                          uVar8 = (**(code **)(*plVar11 + 0x1d8))
                                            (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
                          System_Text_StringBuilder__Append(param_2,uVar8,0);
                        }
                        uVar9 = *(uint *)(lVar6 + 0x18);
                        uVar10 = uVar10 + 1;
                      } while ((int)uVar10 < (int)uVar9);
                    }
                    System_Text_StringBuilder__Append(param_2,DAT_091f83f0,0);
                    return;
                  }
                }
              }
            }
          }
          goto LAB_0754fb44;
        }
      }
      else {
        *param_5 = 1;
      }
      return;
    }
  }
LAB_0754fb44:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

