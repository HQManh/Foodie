// rea decompile_all
// name: System.DefaultBinder$$FindMostSpecific
// address: 0x75e83d0
// body: available
// range: 0x75e83d0-0x75e87bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e87b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e87bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_DefaultBinder__FindMostSpecific
                (long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                undefined8 param_6,long param_7,long param_8)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_90;
  
  if ((DAT_09521ee5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183868);
    DAT_09521ee5 = 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__op_Inequality(param_3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__op_Equality(param_6,0,0);
    if ((uVar2 & 1) != 0) {
      return 2;
    }
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__op_Inequality(param_6,0,0);
  if ((uVar2 & 1) == 0) {
LAB_075e84d0:
    if (param_7 == 0) {
LAB_075e87b8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(param_7 + 0x18) < 1) {
      local_90 = 0;
    }
    else {
      uVar2 = 0;
      local_90 = 0;
      do {
        if (param_8 == 0) {
LAB_075e8544:
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Type__op_Inequality(param_3,0,0);
          if ((uVar3 & 1) == 0) {
            if (param_2 == 0) goto LAB_075e87b8;
            if (*(uint *)(param_2 + 0x18) <= uVar2) goto LAB_075e87bc;
            if (param_1 == 0) goto LAB_075e87b8;
LAB_075e85ac:
            uVar7 = *(uint *)(param_2 + 0x20 + uVar2 * 4);
            if (*(uint *)(param_1 + 0x18) <= uVar7) goto LAB_075e87bc;
            plVar5 = *(long **)(param_1 + (long)(int)uVar7 * 8 + 0x20);
            if (plVar5 == (long *)0x0) goto LAB_075e87b8;
            uVar4 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
          }
          else {
            if (param_2 == 0) goto LAB_075e87b8;
            if (*(uint *)(param_2 + 0x18) <= uVar2) goto LAB_075e87bc;
            if (param_1 == 0) goto LAB_075e87b8;
            uVar4 = param_3;
            if (*(int *)(param_2 + 0x20 + uVar2 * 4) < *(int *)(param_1 + 0x18) + -1)
            goto LAB_075e85ac;
          }
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Type__op_Inequality(param_6,0,0);
          if ((uVar3 & 1) == 0) {
            if (param_5 == 0) goto LAB_075e87b8;
            if (*(uint *)(param_5 + 0x18) <= uVar2) goto LAB_075e87bc;
            if (param_4 == 0) goto LAB_075e87b8;
LAB_075e8648:
            uVar7 = *(uint *)(param_5 + 0x20 + uVar2 * 4);
            if (*(uint *)(param_4 + 0x18) <= uVar7) goto LAB_075e87bc;
            plVar5 = *(long **)(param_4 + (long)(int)uVar7 * 8 + 0x20);
            if (plVar5 == (long *)0x0) goto LAB_075e87b8;
            uVar6 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
          }
          else {
            if (param_5 == 0) goto LAB_075e87b8;
            if (*(uint *)(param_5 + 0x18) <= uVar2) goto LAB_075e87bc;
            if (param_4 == 0) goto LAB_075e87b8;
            uVar6 = param_6;
            if (*(int *)(param_5 + 0x20 + uVar2 * 4) < *(int *)(param_4 + 0x18) + -1)
            goto LAB_075e8648;
          }
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Type__op_Equality(uVar4,uVar6,0);
          if ((uVar3 & 1) == 0) {
            if (*(uint *)(param_7 + 0x18) <= uVar2) {
LAB_075e87bc:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar8 = *(undefined8 *)(param_7 + 0x20 + uVar2 * 8);
            if (*(int *)(DAT_09183868 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = System_DefaultBinder__FindMostSpecificType(uVar4,uVar6,uVar8);
            iVar1 = (int)uVar3;
            if (iVar1 == 1) {
              local_90 = CONCAT44(1,(int)local_90);
            }
            else if (iVar1 == 2) {
              local_90 = CONCAT44(local_90._4_4_,1);
            }
            else if (iVar1 == 0) {
              return uVar3;
            }
          }
        }
        else {
          if (*(uint *)(param_8 + 0x18) <= uVar2) goto LAB_075e87bc;
          lVar9 = *(long *)(param_8 + 0x20 + uVar2 * 8);
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (lVar9 != *(long *)(*(long *)(DAT_095354b8 + 0xb8) + 0x18)) goto LAB_075e8544;
        }
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)*(int *)(param_7 + 0x18));
    }
    if ((int)local_90 != local_90._4_4_) {
      uVar7 = 1;
      if ((local_90 & 0x100000000) == 0) {
        uVar7 = 2;
      }
      return (ulong)uVar7;
    }
    if (param_8 != 0 && (local_90 & 0x100000000) == 0) {
      if ((param_1 == 0) || (param_4 == 0)) goto LAB_075e87b8;
      if (*(int *)(param_4 + 0x18) < *(int *)(param_1 + 0x18)) goto LAB_075e8788;
      if (*(int *)(param_1 + 0x18) < *(int *)(param_4 + 0x18)) {
        return 2;
      }
    }
    uVar2 = 0;
  }
  else {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__op_Equality(param_3,0,0);
    if ((uVar2 & 1) == 0) goto LAB_075e84d0;
LAB_075e8788:
    uVar2 = 1;
  }
  return uVar2;
}

