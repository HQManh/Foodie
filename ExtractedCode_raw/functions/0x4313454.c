// rea decompile_all
// name: CakeOrder.Home.HomeBuildingFadeScale$$SwitchToBaseVariant
// address: 0x4313454
// body: available
// range: 0x4313454-0x43138f3 inclusive
// range: 0x4313934-0x43139c7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431357c to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43138dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43138e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43138e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43138e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43138ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43138f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43139c4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeBuildingFadeScale__SwitchToBaseVariant
               (long param_1,undefined4 param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  long local_60;
  long **local_58;
  long *local_48;
  
  if ((DAT_095175d6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a86c8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a378);
    FUN_03f5c2a4(&DAT_0917aa18);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09213d28);
    DAT_095175d6 = 1;
  }
  local_48 = (long *)0x0;
  *(undefined4 *)(param_1 + 0x50) = param_2;
  uVar2 = CakeOrder_Home_HomeBuildingFadeScale__get_IsLocked(param_1);
  if ((uVar2 & 1) == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar10,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_043138f0;
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x78),0,0);
    }
    lVar7 = CakeOrder_Home_HomeBuildingFadeScale__GetVariant(param_1,param_2);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Equality(lVar7,0,0);
    if ((uVar2 & 1) != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      local_60 = CONCAT44(local_60._4_4_,param_2);
      uVar10 = FUN_03f5c42c(DAT_09535420,&local_60);
      uVar10 = System_String__Format(DAT_09213d28,uVar8,uVar10,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogWarning(uVar10,param_1,0);
      return;
    }
    plVar6 = (long *)(param_1 + 0xb0);
    lVar11 = *plVar6;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(lVar11,0,0);
    if ((uVar2 & 1) != 0) {
      lVar11 = *plVar6;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(lVar11,lVar7,0);
      if ((uVar2 & 1) != 0) {
        if (*plVar6 == 0) goto LAB_043138f0;
        CakeOrder_Home_HomeBuildingFadeScaleBaseVariant__Deactivate();
      }
    }
    *plVar6 = lVar7;
    thunk_FUN_03f5d7b8(plVar6,lVar7);
    if ((param_3 & 1) == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = *(char *)(param_1 + 0xb9);
    }
    if (*plVar6 != 0) {
      CakeOrder_Home_HomeBuildingFadeScaleBaseVariant__Activate(*plVar6,cVar9 != '\0');
      uVar10 = *(undefined8 *)(param_1 + 0x58);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar10,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (plVar3 = (long *)CakeOrder_DataSO_MapUpgradeConfig__EnumerateAllParts
                                     (*(long *)(param_1 + 0x58),0), plVar3 != (long *)0x0)) {
        lVar7 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_0917a378) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_04313780;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a378,0);
LAB_04313780:
        local_48 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        local_58 = &local_48;
        local_60 = 0;
        if (local_48 != (long *)0x0) {
          fVar12 = 0.0;
          do {
            plVar3 = local_48;
            lVar7 = *local_48;
            uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar2 != 0) {
              piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == DAT_09185b10) {
                  puVar4 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
                  goto LAB_04313808;
                }
                uVar2 = uVar2 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar2 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185b10,0);
LAB_04313808:
            uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            plVar3 = local_48;
            if ((uVar2 & 1) == 0) {
              plVar6 = *local_58;
              if (plVar6 == (long *)0x0) goto LAB_043139a0;
              lVar7 = *plVar6;
              uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar2 == 0) goto LAB_04313978;
              piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              goto LAB_04313960;
            }
            if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *local_48;
            uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar2 != 0) {
              piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == DAT_0917aa18) {
                  puVar4 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
                  goto LAB_0431386c;
                }
                uVar2 = uVar2 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar2 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(local_48,DAT_0917aa18,0);
LAB_0431386c:
            lVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(param_1 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar2 = FUN_053ebc3c(*(long *)(param_1 + 0xa8),*(undefined8 *)(lVar7 + 0x18),
                                 DAT_091a86c8);
            if ((uVar2 & 1) != 0) {
              if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              bVar1 = CakeOrder_Home_HomeBuildingFadeScaleBaseVariant__ShowItem
                                (fVar12,*plVar6,lVar7,cVar9 != '\0');
              if ((cVar9 != '\0' & bVar1) != 0) {
                fVar12 = fVar12 + *(float *)(param_1 + 0x80);
              }
            }
          } while (local_48 != (long *)0x0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  else {
    plVar6 = (long *)(param_1 + 0xb0);
    lVar7 = *plVar6;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(lVar7,0,0);
    if ((uVar2 & 1) != 0) {
      if (*plVar6 == 0) goto LAB_043138f0;
      CakeOrder_Home_HomeBuildingFadeScaleBaseVariant__Deactivate();
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
    thunk_FUN_03f5d7b8(plVar6,0);
    if (*(long *)(param_1 + 0x78) != 0) {
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x78),1,0);
      return;
    }
  }
LAB_043138f0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_04313960:
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_04313994;
    }
  }
LAB_04313978:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_04313994:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
LAB_043139a0:
  if (local_60 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548();
}

