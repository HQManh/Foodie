// rea decompile_all
// name: System.Reflection.CustomAttributeTypedArgument$$ToString
// address: 0x74e6cf8
// body: available
// range: 0x74e6cf8-0x74e7413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e73f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e73f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e73f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e73fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e7400 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e7404 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e7408 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e740c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e7410 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_CustomAttributeTypedArgument__ToString(long *param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined1 auVar16 [16];
  long local_90;
  long lStack_88;
  undefined4 local_78;
  undefined1 local_70 [16];
  
  if ((DAT_095215ca & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183058);
    FUN_03f5c2a4(&DAT_0917a030);
    FUN_03f5c2a4(&DAT_0917b048);
    FUN_03f5c2a4(&DAT_091f83e8);
    FUN_03f5c2a4(&DAT_091f83a8);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_091f6e98);
    FUN_03f5c2a4(&DAT_09220040);
    FUN_03f5c2a4(&DAT_091f7da0);
    FUN_03f5c2a4(&DAT_09224598);
    FUN_03f5c2a4(&DAT_0921fc40);
    FUN_03f5c2a4(&DAT_091f89f8);
    FUN_03f5c2a4(&DAT_091f6cc8);
    DAT_095215ca = 1;
  }
  lVar13 = *param_1;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_78 = 0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Type__op_Equality(lVar13,0,0);
  if ((uVar4 & 1) == 0) {
    plVar6 = (long *)*param_1;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = (**(code **)(*plVar6 + 0x5d8))(plVar6,*(undefined8 *)(*plVar6 + 0x5e0));
    lVar13 = DAT_09535468;
    if ((uVar4 & 1) == 0) {
      if (param_1[1] == 0) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Globalization_CultureInfo__get_CurrentCulture(0);
        puVar10 = &DAT_09220040;
        if ((param_2 & 1) == 0) {
          puVar10 = &DAT_091f83a8;
        }
        if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar12 = *puVar10;
        uVar7 = System_Type__get_NameOrDefault(*param_1,0);
        System_String__Format(uVar5,uVar12,uVar7,0);
      }
      else {
        lVar14 = *param_1;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Type__GetTypeFromHandle(lVar13 + 0x20,0);
        uVar4 = System_Type__op_Equality(lVar14,uVar5,0);
        lVar13 = DAT_09535460;
        if ((uVar4 & 1) == 0) {
          lVar14 = *param_1;
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = System_Type__GetTypeFromHandle(lVar13 + 0x20,0);
          uVar4 = System_Type__op_Equality(lVar14,uVar5,0);
          lVar13 = DAT_095354b8;
          if ((uVar4 & 1) == 0) {
            lVar14 = *param_1;
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_095354b8);
            }
            uVar5 = System_Type__GetTypeFromHandle(lVar13 + 0x20,0);
            uVar4 = System_Type__op_Equality(lVar14,uVar5,0);
            if ((uVar4 & 1) == 0) {
              if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar4 = System_Type__get_IsArray(*param_1,0);
              if ((uVar4 & 1) != 0) {
                plVar6 = (long *)thunk_FUN_03f99350(param_1[1],DAT_0917b048);
                param_1 = (long *)*param_1;
                if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                plVar8 = (long *)(**(code **)(*param_1 + 0x448))
                                           (param_1,*(undefined8 *)(*param_1 + 0x450));
                if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar5 = System_Globalization_CultureInfo__get_CurrentCulture(0);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar4 = (**(code **)(*plVar8 + 0x5d8))(plVar8,*(undefined8 *)(*plVar8 + 0x5e0));
                uVar7 = DAT_0921fc40;
                if ((uVar4 & 1) == 0) {
                  uVar12 = System_Type__get_NameOrDefault(plVar8,0);
                }
                else {
                  uVar12 = System_Type__get_FullNameOrDefault(plVar8,0);
                }
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar1 = FUN_039afee4(0,DAT_0917a030,plVar6);
                local_90 = CONCAT44(local_90._4_4_,uVar1);
                uVar9 = FUN_03f5c42c(DAT_09535420,&local_90);
                uVar5 = System_String__Format(uVar5,uVar7,uVar12,uVar9,0);
                iVar15 = 0;
                do {
                  lVar13 = *plVar6;
                  uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar4 != 0) {
                    piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == DAT_0917a030) {
                        puVar10 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_074e7298;
                      }
                      uVar4 = uVar4 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a030,0);
LAB_074e7298:
                  iVar2 = (*(code *)*puVar10)(plVar6,puVar10[1]);
                  if (iVar2 <= iVar15) {
                    System_String__Concat(uVar5,DAT_091f6cc8,0);
                    return;
                  }
                  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar7 = System_Globalization_CultureInfo__get_CurrentCulture(0);
                  lVar13 = *plVar6;
                  puVar10 = &DAT_09226038;
                  if (iVar15 != 0) {
                    puVar10 = &DAT_091f89f8;
                  }
                  uVar12 = *puVar10;
                  uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar4 != 0) {
                    piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == DAT_0917b048) {
                        puVar10 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_074e7330;
                      }
                      uVar4 = uVar4 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917b048,0);
LAB_074e7330:
                  auVar16 = (*(code *)*puVar10)(plVar6,iVar15,puVar10[1]);
                  lVar13 = DAT_095353e8;
                  local_70 = auVar16;
                  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_095354b8);
                  }
                  uVar9 = System_Type__GetTypeFromHandle(lVar13 + 0x20,0);
                  uVar3 = System_Type__op_Inequality(plVar8,uVar9,0);
                  uVar9 = System_Reflection_CustomAttributeTypedArgument__ToString
                                    (local_70,uVar3 & 1);
                  uVar7 = System_String__Format(uVar7,uVar12,uVar9,0);
                  uVar5 = System_String__Concat(uVar5,uVar7,0);
                  iVar15 = iVar15 + 1;
                } while( true );
              }
              if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar5 = System_Globalization_CultureInfo__get_CurrentCulture(0);
              puVar10 = &DAT_09226038;
              if ((param_2 & 1) == 0) {
                puVar10 = &DAT_091f83e8;
              }
              if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar12 = *puVar10;
              lVar13 = param_1[1];
              uVar7 = System_Type__get_NameOrDefault(*param_1,0);
              System_String__Format(uVar5,uVar12,lVar13,uVar7,0);
            }
            else {
              if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar5 = System_Globalization_CultureInfo__get_CurrentCulture(0);
              lVar14 = param_1[1];
              lVar13 = FUN_039bb5f0(lVar14,DAT_095354b8);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar7 = FUN_039bb5f0(lVar14,DAT_095354b8);
              uVar7 = System_Type__get_FullNameOrDefault(uVar7,0);
              System_String__Format(uVar5,DAT_09224598,uVar7,0);
            }
          }
          else {
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = System_Globalization_CultureInfo__get_CurrentCulture(0);
            System_String__Format(uVar5,DAT_091f7da0,param_1[1],0);
          }
        }
        else {
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = System_Globalization_CultureInfo__get_CurrentCulture(0);
          System_String__Format(uVar5,DAT_091f6e98,param_1[1],0);
        }
      }
    }
    else {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Globalization_CultureInfo__get_CurrentCulture(0);
      puVar10 = &DAT_09226038;
      if ((param_2 & 1) == 0) {
        puVar10 = &DAT_091f83e8;
      }
      if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar12 = *puVar10;
      lVar13 = param_1[1];
      uVar7 = System_Type__get_FullNameOrDefault(*param_1,0);
      System_String__Format(uVar5,uVar12,lVar13,uVar7,0);
    }
  }
  else {
    lStack_88 = param_1[1];
    local_90 = *param_1;
    uVar5 = FUN_03f5c42c(DAT_09183058,&local_90);
    System_ValueType__ToString(uVar5,0);
  }
  return;
}

