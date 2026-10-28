// rea decompile_all
// name: Newtonsoft.Json.JsonValidatingReader$$WriteToken
// address: 0x7675638
// body: available
// range: 0x7675638-0x7675ed7 inclusive
// range: 0x7675edc-0x7675f57 inclusive
// range: 0x7675f5c-0x7675f5f inclusive
// range: 0x7675f64-0x7675f67 inclusive
// range: 0x7675f6c-0x7675f6f inclusive
// range: 0x7675fe8-0x767604f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7675ed4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7675f54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7675f5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7675f64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7675f6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x767601c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7676020 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7676024 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7676028 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x767602c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7676030 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7676034 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07675f50) */

void Newtonsoft_Json_JsonValidatingReader__WriteToken(long param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 local_b0;
  long **pplStack_a8;
  long local_a0;
  long *plStack_98;
  undefined8 local_90;
  long *local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0952249f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0250);
    FUN_03f5c2a4(&DAT_091c4f08);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091c94a8);
    FUN_03f5c2a4(&DAT_091c9728);
    FUN_03f5c2a4(&DAT_091c9b28);
    FUN_03f5c2a4(&DAT_091a5588);
    FUN_03f5c2a4(&DAT_091a5590);
    FUN_03f5c2a4(&DAT_091a5598);
    FUN_03f5c2a4(&DAT_09178c98);
    FUN_03f5c2a4(&DAT_0917a0c0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5e0);
    FUN_03f5c2a4(&DAT_0917acb0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187270);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_09187470);
    FUN_03f5c2a4(&DAT_091bb5a0);
    FUN_03f5c2a4(&DAT_0918b438);
    FUN_03f5c2a4(&DAT_091ec120);
    FUN_03f5c2a4(&DAT_091ec128);
    FUN_03f5c2a4(&DAT_091ec130);
    FUN_03f5c2a4(&DAT_09192040);
    FUN_03f5c2a4(&DAT_09212d80);
    FUN_03f5c2a4(&DAT_09208da0);
    DAT_0952249f = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = (long *)0x0;
  if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_061a17cc(&local_a0,*(long *)(param_1 + 0x80),DAT_091bb5a0);
  local_80 = local_a0;
  local_a0 = 0;
  uStack_78 = plStack_98;
  local_70 = local_90;
  plStack_98 = &local_80;
LAB_07675808:
  uVar3 = FUN_071bec70(&local_80,DAT_091a5590);
  lVar4 = local_a0;
  if ((uVar3 & 1) == 0) {
    FUN_071bec64(plStack_98,DAT_091a5588);
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar4);
    }
    return;
  }
  lVar4 = FUN_071bed54(&local_80,DAT_091a5598);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (((*(int *)(lVar4 + 0x10) != 2) || (*(char *)(lVar4 + 0x34) == '\0')) ||
     (*(int *)(lVar4 + 0x30) < 1)) goto LAB_07675854;
  bVar1 = false;
  goto LAB_076758ec;
LAB_07675854:
  if (*(int *)(DAT_09192040 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar9 = *(undefined8 **)(DAT_09192040 + 0xb8);
  lVar5 = puVar9[1];
  if (lVar5 == 0) {
    if (*(int *)(DAT_09192040 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar9 = *(undefined8 **)(DAT_09192040 + 0xb8);
    }
    uVar7 = *puVar9;
    lVar5 = thunk_FUN_03f9944c(DAT_09178c98);
    FUN_05322d94(lVar5,uVar7,DAT_091ec120,0);
    plVar11 = (long *)(*(long *)(DAT_09192040 + 0xb8) + 8);
    *plVar11 = lVar5;
    thunk_FUN_03f5d7b8(plVar11,lVar5);
  }
  uVar3 = FUN_04ab6f28(param_2,lVar5,DAT_091c94a8);
  if ((uVar3 & 1) != 0) {
    bVar1 = true;
LAB_076758ec:
    plVar11 = (long *)(lVar4 + 0x40);
    lVar5 = *plVar11;
    if (lVar5 == 0) {
      plVar6 = *(long **)(param_1 + 0x78);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar7 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
      uVar3 = Newtonsoft_Json_Utilities_JsonTokenUtils__IsEndToken(uVar7,0);
      if ((uVar3 & 1) != 0) goto LAB_07675808;
      lVar5 = thunk_FUN_03f9944c(DAT_09187270);
      Newtonsoft_Json_Linq_JTokenWriter___ctor(lVar5,0);
      *plVar11 = lVar5;
      thunk_FUN_03f5d7b8(plVar11,lVar5);
      lVar5 = *plVar11;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    Newtonsoft_Json_JsonWriter__WriteToken(lVar5,*(undefined8 *)(param_1 + 0x78),0);
    if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar2 = Newtonsoft_Json_JsonWriter__get_Top();
    if (iVar2 == 0) {
      plVar6 = *(long **)(param_1 + 0x78);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar2 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
      if (iVar2 != 4) {
        if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar6 = (long *)Newtonsoft_Json_Linq_JTokenWriter__get_Token(*plVar11,0);
        *plVar11 = 0;
        thunk_FUN_03f5d7b8(plVar11,0);
        if (bVar1) {
          if (*(int *)(DAT_09192040 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar9 = *(undefined8 **)(DAT_09192040 + 0xb8);
          lVar4 = puVar9[3];
          if (lVar4 == 0) {
            if (*(int *)(DAT_09192040 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar9 = *(undefined8 **)(DAT_09192040 + 0xb8);
            }
            uVar7 = *puVar9;
            lVar4 = thunk_FUN_03f9944c(DAT_09178c98);
            FUN_05322d94(lVar4,uVar7,DAT_091ec130,0);
            plVar11 = (long *)(*(long *)(DAT_09192040 + 0xb8) + 0x18);
            *plVar11 = lVar4;
            thunk_FUN_03f5d7b8(plVar11,lVar4);
          }
          uVar3 = FUN_04ab6f28(param_2,lVar4,DAT_091c94a8);
          if ((uVar3 & 1) != 0) {
            if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *param_2;
            uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar3 != 0) {
              piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917a5e0) {
                  puVar9 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_07675c6c;
                }
                uVar3 = uVar3 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar3 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a5e0,0);
LAB_07675c6c:
            plVar11 = (long *)(*(code *)*puVar9)(param_2,puVar9[1]);
            pplStack_a8 = &local_88;
            local_b0 = 0;
joined_r0x07675c88:
            local_88 = plVar11;
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *plVar11;
            uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar3 != 0) {
              piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                  puVar9 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_07675ce0;
                }
                uVar3 = uVar3 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar3 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_07675ce0:
            uVar3 = (*(code *)*puVar9)(plVar11,puVar9[1]);
            plVar11 = local_88;
            if ((uVar3 & 1) != 0) {
              if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = *local_88;
              uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar3 != 0) {
                piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_0917acb0) {
                    puVar9 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_07675d4c;
                  }
                  uVar3 = uVar3 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar3 != 0);
              }
              puVar9 = (undefined8 *)FUN_03f95da8(local_88,DAT_0917acb0,0);
LAB_07675d4c:
              lVar4 = (*(code *)*puVar9)(plVar11,puVar9[1]);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = *(long *)(lVar4 + 0xa8);
              plVar11 = local_88;
              if (lVar4 != 0) {
                if (*(int *)(DAT_09187250 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar7 = Newtonsoft_Json_Linq_JToken__get_EqualityComparer(0);
                uVar3 = FUN_04a66eb8(lVar4,plVar6,uVar7,DAT_091c4f08);
                plVar11 = local_88;
                if ((uVar3 & 1) == 0) {
                  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
                  plVar11 = (long *)thunk_FUN_03f9944c(DAT_0918b438);
                  System_IO_StringWriter___ctor(plVar11,uVar7,0);
                  uVar7 = thunk_FUN_03f9944c(DAT_09187470);
                  Newtonsoft_Json_JsonTextWriter___ctor(uVar7,plVar11,0);
                  lVar4 = DAT_091c0250;
                  lVar5 = *(long *)(DAT_091c0250 + 0x38);
                  if (lVar5 == 0) {
                    FUN_03f95ac8(DAT_091c0250);
                    lVar5 = *(long *)(lVar4 + 0x38);
                  }
                  lVar5 = *(long *)(lVar5 + 0x10);
                  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    lVar5 = FUN_03f95a6c();
                  }
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
                  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                    lVar4 = FUN_03f95a6c();
                  }
                  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  (**(code **)(*plVar6 + 0x2b8))
                            (plVar6,uVar7,**(undefined8 **)(lVar4 + 0xb8),
                             *(undefined8 *)(*plVar6 + 0x2c0));
                  uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
                  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar8 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170))
                  ;
                  uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                                    (DAT_09212d80,uVar7,uVar8,0);
                  Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar7);
                  plVar11 = local_88;
                }
              }
              goto joined_r0x07675c88;
            }
            if (local_88 != (long *)0x0) {
              lVar4 = *local_88;
              uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar3 != 0) {
                piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_09185a58) {
                    puVar9 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_07675f40;
                  }
                  uVar3 = uVar3 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar3 != 0);
              }
              puVar9 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185a58,0);
LAB_07675f40:
              (*(code *)*puVar9)(plVar11,puVar9[1]);
            }
          }
        }
        else {
          uVar7 = *(undefined8 *)(lVar4 + 0x38);
          if (*(int *)(DAT_09187250 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar8 = Newtonsoft_Json_Linq_JToken__get_EqualityComparer(0);
          uVar3 = FUN_04ad5e40(uVar7,plVar6,uVar8,DAT_091c9728);
          if ((uVar3 & 1) != 0) {
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            local_b0 = CONCAT44(local_b0._4_4_,*(int *)(lVar4 + 0x30) + -1);
            uVar8 = FUN_03f5c42c(DAT_09535420,&local_b0);
            uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_09208da0,uVar7,uVar8,0);
            uVar8 = *(undefined8 *)(lVar4 + 0x18);
            if (*(int *)(DAT_09192040 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar9 = *(undefined8 **)(DAT_09192040 + 0xb8);
            lVar5 = puVar9[2];
            if (lVar5 == 0) {
              if (*(int *)(DAT_09192040 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar9 = *(undefined8 **)(DAT_09192040 + 0xb8);
              }
              uVar12 = *puVar9;
              lVar5 = thunk_FUN_03f9944c(DAT_09178c98);
              FUN_05322d94(lVar5,uVar12,DAT_091ec128,0);
              plVar11 = (long *)(*(long *)(DAT_09192040 + 0xb8) + 0x10);
              *plVar11 = lVar5;
              thunk_FUN_03f5d7b8(plVar11,lVar5);
            }
            FUN_04ae3154(uVar8,lVar5,DAT_091c9b28);
            Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar7);
          }
          plVar11 = *(long **)(lVar4 + 0x38);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = *plVar11;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 != 0) {
            piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_0917a0c0) {
                puVar9 = (undefined8 *)(lVar4 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_07675c4c;
              }
              uVar3 = uVar3 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar3 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a0c0,2);
LAB_07675c4c:
          (*(code *)*puVar9)(plVar11,plVar6,puVar9[1]);
        }
      }
    }
  }
  goto LAB_07675808;
}

