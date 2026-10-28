// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer$$MergeEnumerableContent
// address: 0x76d6620
// body: available
// range: 0x76d6620-0x76d7123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d6ad4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d7084 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d7088 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d708c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d7090 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d7094 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d7098 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d709c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d70a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d70a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d70a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d70ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076d711c) */
/* WARNING: Removing unreachable block (ram,0x076d70b8) */

void Newtonsoft_Json_Linq_JContainer__MergeEnumerableContent
               (long *param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  int local_84;
  undefined8 local_80;
  long **pplStack_78;
  long **local_70;
  long *local_68;
  long *local_58;
  
  if ((DAT_095227c3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8368);
    FUN_03f5c2a4(&DAT_091a8360);
    FUN_03f5c2a4(&DAT_09179e30);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b08);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187210);
    FUN_03f5c2a4(&DAT_09187250);
    DAT_095227c3 = 1;
  }
  local_58 = (long *)0x0;
  local_68 = (long *)0x0;
  if (param_3 != 0) {
    iVar11 = *(int *)(param_3 + 0x10);
    if (1 < iVar11) {
      if (iVar11 == 2) {
        if (param_1 == param_2) {
          return;
        }
        if ((param_1 != (long *)0x0) &&
           ((**(code **)(*param_1 + 0x698))(param_1,*(undefined8 *)(*param_1 + 0x6a0)),
           param_2 != (long *)0x0)) {
          lVar2 = *param_2;
          uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185b08) {
                puVar3 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_076d6bd0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185b08,0);
LAB_076d6bd0:
          local_58 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
          pplStack_78 = &local_58;
          local_80 = 0;
          local_70 = &local_68;
          do {
            plVar4 = local_58;
            if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar2 = *local_58;
            uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                  puVar3 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_076d6c44;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185b10,0);
LAB_076d6c44:
            uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
            plVar4 = local_58;
            if ((uVar9 & 1) == 0) {
              plVar4 = (long *)thunk_FUN_03f99350(local_58,DAT_09185a58);
              if (plVar4 == (long *)0x0) {
                return;
              }
              lVar2 = *plVar4;
              uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
              local_68 = plVar4;
              if (uVar9 == 0) goto LAB_076d6d30;
              piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              goto LAB_076d6d18;
            }
            if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar2 = *local_58;
            uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                  puVar3 = (undefined8 *)(lVar2 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_076d6cac;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185b10,1);
LAB_076d6cac:
            (*(code *)*puVar3)(plVar4,puVar3[1]);
            uVar5 = Newtonsoft_Json_Linq_JContainer__CreateFromContent();
            (**(code **)(*param_1 + 0x6e8))(param_1,uVar5,*(undefined8 *)(*param_1 + 0x6f0));
          } while( true );
        }
      }
      else {
        if (iVar11 != 3) goto LAB_076d70c0;
        local_58 = (long *)0x0;
        local_68 = (long *)0x0;
        if (param_2 != (long *)0x0) {
          lVar2 = *param_2;
          uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185b08) {
                puVar3 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_076d6db0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185b08,0);
LAB_076d6db0:
          local_58 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
          pplStack_78 = &local_58;
          local_80 = 0;
          local_70 = &local_68;
          if (local_58 != (long *)0x0) {
            iVar11 = 0;
            do {
              plVar4 = local_58;
              lVar2 = *local_58;
              uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                    puVar3 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_076d6e38;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185b10,0);
LAB_076d6e38:
              uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
              plVar4 = local_58;
              if ((uVar9 & 1) == 0) {
                plVar4 = (long *)thunk_FUN_03f99350(local_58,DAT_09185a58);
                if (plVar4 == (long *)0x0) {
                  return;
                }
                lVar2 = *plVar4;
                uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
                local_68 = plVar4;
                if (uVar9 == 0) goto LAB_076d7034;
                piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                goto LAB_076d701c;
              }
              if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar2 = *local_58;
              uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                    puVar3 = (undefined8 *)(lVar2 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                    goto LAB_076d6ea0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185b10,1);
LAB_076d6ea0:
              lVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
              if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              iVar1 = Newtonsoft_Json_Linq_JContainer__get_Count(param_1);
              if (iVar11 < iVar1) {
                local_84 = iVar11;
                uVar5 = FUN_03f5c42c(DAT_09535420,&local_84);
                plVar4 = (long *)(**(code **)(*param_1 + 0x248))
                                           (param_1,uVar5,*(undefined8 *)(*param_1 + 0x250));
                if (plVar4 != (long *)0x0) {
                  if ((*(byte *)(DAT_09187210 + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
                     (*(long *)(*(long *)(*plVar4 + 200) +
                                (ulong)*(byte *)(DAT_09187210 + 0x130) * 8 + -8) == DAT_09187210)) {
                    if (lVar2 != 0) {
                      Newtonsoft_Json_Linq_JContainer__ValidateContent(plVar4,lVar2);
                      (**(code **)(*plVar4 + 0x6f8))
                                (plVar4,lVar2,param_3,*(undefined8 *)(*plVar4 + 0x700));
                    }
                    goto LAB_076d6fa0;
                  }
                }
                if (lVar2 != 0) {
                  plVar4 = (long *)Newtonsoft_Json_Linq_JContainer__CreateFromContent(lVar2);
                  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  iVar1 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
                  if (iVar1 != 10) {
                    local_84 = iVar11;
                    uVar5 = FUN_03f5c42c(DAT_09535420,&local_84);
                    (**(code **)(*param_1 + 600))
                              (param_1,uVar5,plVar4,*(undefined8 *)(*param_1 + 0x260));
                  }
                }
              }
              else {
                uVar5 = Newtonsoft_Json_Linq_JContainer__CreateFromContent(lVar2);
                (**(code **)(*param_1 + 0x6e8))(param_1,uVar5,*(undefined8 *)(*param_1 + 0x6f0));
              }
LAB_076d6fa0:
              iVar11 = iVar11 + 1;
            } while (local_58 != (long *)0x0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      goto LAB_076d70b4;
    }
    if (iVar11 != 0) {
      if (iVar11 != 1) {
LAB_076d70c0:
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar5 = thunk_FUN_03f9944c();
        uVar6 = thunk_FUN_03fc39d4(&DAT_092228c0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_09211db8);
        System_ArgumentOutOfRangeException___ctor(uVar5,uVar6,uVar7,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091d1238);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar6);
      }
      if (*(int *)(DAT_09187250 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = Newtonsoft_Json_Linq_JToken__get_EqualityComparer();
      lVar2 = thunk_FUN_03f9944c(DAT_09179e30);
      FUN_053eb66c(lVar2,param_1,uVar5,DAT_091a8360);
      if (param_2 != (long *)0x0) {
        lVar8 = *param_2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185b08) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_076d69a0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185b08,0);
LAB_076d69a0:
        plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
        pplStack_78 = &local_58;
        local_80 = 0;
        local_70 = &local_68;
        do {
          local_58 = plVar4;
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_076d6a1c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_076d6a1c:
          uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          plVar4 = local_58;
          if ((uVar9 & 1) == 0) {
            plVar4 = (long *)thunk_FUN_03f99350(local_58,DAT_09185a58);
            if (plVar4 == (long *)0x0) {
              return;
            }
            lVar2 = *plVar4;
            uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
            local_68 = plVar4;
            if (uVar9 == 0) goto LAB_076d6b30;
            piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            goto LAB_076d6b18;
          }
          if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *local_58;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_076d6a84;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185b10,1);
LAB_076d6a84:
          (*(code *)*puVar3)(plVar4,puVar3[1]);
          uVar5 = Newtonsoft_Json_Linq_JContainer__CreateFromContent();
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar9 = FUN_053ec72c(lVar2,uVar5,DAT_091a8368);
          plVar4 = local_58;
          if ((uVar9 & 1) != 0) {
            if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            (**(code **)(*param_1 + 0x6e8))(param_1,uVar5,*(undefined8 *)(*param_1 + 0x6f0));
            plVar4 = local_58;
          }
        } while( true );
      }
      goto LAB_076d70b4;
    }
  }
  if (param_2 != (long *)0x0) {
    lVar2 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185b08) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076d6760;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185b08,0);
LAB_076d6760:
    local_58 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
    pplStack_78 = &local_58;
    local_80 = 0;
    local_70 = &local_68;
    do {
      plVar4 = local_58;
      if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *local_58;
      uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_076d67d4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185b10,0);
LAB_076d67d4:
      uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      plVar4 = local_58;
      if ((uVar9 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_03f99350(local_58,DAT_09185a58);
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar2 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
        local_68 = plVar4;
        if (uVar9 == 0) goto LAB_076d68c4;
        piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_076d68ac;
      }
      if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *local_58;
      uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar2 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_076d683c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185b10,1);
LAB_076d683c:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      uVar5 = Newtonsoft_Json_Linq_JContainer__CreateFromContent();
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar5,uVar5);
      }
      (**(code **)(*param_1 + 0x6e8))(param_1,uVar5,*(undefined8 *)(*param_1 + 0x6f0));
    } while( true );
  }
LAB_076d70b4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_076d6d18:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_076d6d4c;
    }
  }
LAB_076d6d30:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_076d6d4c:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_076d701c:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_076d7050;
    }
  }
LAB_076d7034:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_076d7050:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_076d6b18:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_076d6b4c;
    }
  }
LAB_076d6b30:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_076d6b4c:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_076d68ac:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_076d68ec;
    }
  }
LAB_076d68c4:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_076d68ec:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}

