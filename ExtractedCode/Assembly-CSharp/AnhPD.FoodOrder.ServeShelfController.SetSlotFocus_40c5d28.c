// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$SetSlotFocus
// address: 0x40c5d28
// body: available
// range: 0x40c5d28-0x40c5eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c5ee8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c5eec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__SetSlotFocus(long param_1,uint param_2,byte param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  if ((DAT_09515f90 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515f90 = 1;
  }
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x78) <= (int)param_2)) {
    return;
  }
  plVar5 = (long *)(param_1 + 200);
  lVar3 = *plVar5;
  if (lVar3 == 0) {
    lVar3 = FUN_03f5c394(DAT_0917fc40);
    *plVar5 = lVar3;
    thunk_FUN_03f5d7b8(plVar5,lVar3);
    lVar3 = *plVar5;
    if (lVar3 == 0) goto LAB_040c5eec;
  }
  if (param_2 < *(uint *)(lVar3 + 0x18)) {
    uVar6 = (ulong)param_2;
    if ((*(char *)(lVar3 + uVar6 + 0x20) != '\0') == (bool)(param_3 & 1)) {
      return;
    }
    if ((param_3 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0xc0);
      if (lVar4 == 0) {
        plVar1 = (long *)0x0;
      }
      else {
        if (*(uint *)(lVar4 + 0x18) <= param_2) goto LAB_040c5ee8;
        plVar1 = *(long **)(lVar4 + uVar6 * 8 + 0x20);
      }
    }
    else {
      plVar1 = (long *)AnhPD_FoodOrder_ServeShelfController__GetOrCreateSlotFocus(param_1,param_2);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar2 = UnityEngine_Object__op_Implicit(plVar1,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *plVar5;
      if (lVar3 == 0) goto LAB_040c5eec;
    }
    if (param_2 < *(uint *)(lVar3 + 0x18)) {
      *(byte *)(lVar3 + uVar6 + 0x20) = param_3 & 1;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Implicit(plVar1,0);
      if ((uVar6 & 1) == 0) {
        return;
      }
      if ((param_3 & 1) == 0) {
        if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x040c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
          return;
        }
      }
      else if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x040c5eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x1b8))(0x3f800000,plVar1,0,*(undefined8 *)(*plVar1 + 0x1c0));
        return;
      }
LAB_040c5eec:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_040c5ee8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

