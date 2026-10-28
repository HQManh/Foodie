// rea decompile_all
// name: Newtonsoft.Json.Converters.DataTableConverter$$WriteJson
// address: 0x77042c4
// body: available
// range: 0x77042c4-0x770477b inclusive
// range: 0x7704780-0x770482f inclusive
// range: 0x7704834-0x7704837 inclusive
// range: 0x770483c-0x770483f inclusive
// range: 0x7704844-0x7704847 inclusive
// range: 0x77048ac-0x77049a3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7704778 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770482c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7704834 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770483c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7704844 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7704974 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7704978 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770497c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7704980 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7704984 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7704988 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7704990 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0770480c) */
/* WARNING: Removing unreachable block (ram,0x0770498c) */
/* WARNING: Removing unreachable block (ram,0x07704938) */
/* WARNING: Removing unreachable block (ram,0x077049a0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Converters_DataTableConverter__WriteJson
               (undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_09522959 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183158);
    FUN_03f5c2a4(&DAT_09183218);
    FUN_03f5c2a4(&DAT_09183290);
    FUN_03f5c2a4(&DAT_091832d8);
    FUN_03f5c2a4(&DAT_09183878);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09522959 = 1;
  }
  if (param_3 == (long *)0x0) {
    if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x077043d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x658))(param_2,*(undefined8 *)(*param_2 + 0x660));
      return;
    }
    goto LAB_07704994;
  }
  if (param_4 == (long *)0x0) goto LAB_07704994;
  plVar2 = (long *)(**(code **)(*param_4 + 0x3a8))(param_4,*(undefined8 *)(*param_4 + 0x3b0));
  if (plVar2 == (long *)0x0) {
LAB_0770439c:
    plVar2 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_09183878 + 0x130)) goto LAB_0770439c;
    if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09183878 + 0x130) * 8 + -8) !=
        DAT_09183878) {
      plVar2 = (long *)0x0;
    }
  }
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x598))(param_2,*(undefined8 *)(*param_2 + 0x5a0));
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(DAT_091832d8 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(DAT_091832d8 + 0x130) * 8 + -8) !=
        DAT_091832d8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_3);
    }
    plVar3 = (long *)param_3[7];
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
      do {
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *plVar3;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_077044d8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_077044d8:
        uVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar10 & 1) == 0) {
          plVar2 = (long *)thunk_FUN_03f99350(plVar3,DAT_09185a58);
          if (plVar2 == (long *)0x0) goto LAB_07704928;
          lVar9 = *plVar2;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_07704900;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_077048e8;
        }
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *plVar3;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_07704540;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,1);
LAB_07704540:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 != (long *)0x0) {
          if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_09183290 + 0x130)) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09183290 + 0x130) * 8 + -8)
              != DAT_09183290)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar5);
          }
        }
        (**(code **)(*param_2 + 0x578))(param_2,*(undefined8 *)(*param_2 + 0x580));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (plVar5[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar6 = *(long **)(plVar5[2] + 0x40);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar6 = (long *)(**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
joined_r0x077045d0:
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_07704620;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_07704620:
        uVar10 = (*(code *)*puVar4)(plVar6,puVar4[1]);
        if ((uVar10 & 1) != 0) {
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_09185b10) {
                puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_07704688;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,1);
LAB_07704688:
          plVar7 = (long *)(*(code *)*puVar4)(plVar6,puVar4[1]);
          if (plVar7 != (long *)0x0) {
            if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(DAT_09183218 + 0x130)) ||
               (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(DAT_09183218 + 0x130) * 8 + -8
                         ) != DAT_09183218)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar7);
            }
          }
          lVar9 = System_Data_DataRow__get_Item(plVar5,plVar7,0);
          iVar1 = (**(code **)(*param_4 + 0x2f8))(param_4,*(undefined8 *)(*param_4 + 0x300));
          if (iVar1 == 1) goto code_r0x077046f8;
          goto LAB_07704720;
        }
        plVar5 = (long *)thunk_FUN_03f99350(plVar6,DAT_09185a58);
        if (plVar5 != (long *)0x0) {
          lVar9 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_09185a58) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_077047f4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_077047f4:
          (*(code *)*puVar4)(plVar5,puVar4[1]);
        }
        (**(code **)(*param_2 + 0x588))(param_2,*(undefined8 *)(*param_2 + 0x590));
      } while( true );
    }
  }
LAB_07704994:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
code_r0x077046f8:
  if (lVar9 != 0) {
    if (*(int *)(DAT_09183158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar9 != **(long **)(DAT_09183158 + 0xb8)) {
LAB_07704720:
      if (plVar2 == (long *)0x0) {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = plVar7[6];
      }
      else {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetResolvedPropertyName
                          (plVar2,plVar7[6],0);
      }
      (**(code **)(*param_2 + 0x5d8))(param_2,lVar8,*(undefined8 *)(*param_2 + 0x5e0));
      Newtonsoft_Json_JsonSerializer__Serialize(param_4,param_2,lVar9,0);
    }
  }
  goto joined_r0x077045d0;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_077048e8:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0770491c;
    }
  }
LAB_07704900:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_0770491c:
  (*(code *)*puVar4)(plVar2,puVar4[1]);
LAB_07704928:
  (**(code **)(*param_2 + 0x5a8))(param_2,*(undefined8 *)(*param_2 + 0x5b0));
  return;
}

