// rea decompile_all
// name: System.DefaultBinder$$FindMostSpecificType
// address: 0x75e803c
// body: available
// range: 0x75e803c-0x75e83cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e83bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e83c4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e83cc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
System_DefaultBinder__FindMostSpecificType(long *param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if ((DAT_09521ee6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183868);
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521ee6 = 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Type__op_Equality(param_1,param_2,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Type__op_Equality(param_1,param_3,0);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Type__op_Equality(param_2,param_3,0);
  if ((uVar4 & 1) != 0) {
    return 2;
  }
  if (param_1 == (long *)0x0) goto LAB_075e83bc;
  uVar4 = System_Type__get_IsByRef(param_1,0);
  if ((uVar4 & 1) == 0) {
    if (param_2 == (long *)0x0) goto LAB_075e83bc;
    uVar4 = System_Type__get_IsByRef(param_2,0);
    if ((uVar4 & 1) != 0) goto LAB_075e8134;
  }
  else {
LAB_075e8134:
    uVar4 = System_Type__get_IsByRef(param_1,0);
    if ((uVar4 & 1) == 0) {
LAB_075e818c:
      uVar4 = System_Type__get_IsByRef(param_1,0);
      if ((uVar4 & 1) == 0) {
        if (param_2 == (long *)0x0) goto LAB_075e83bc;
        uVar5 = (**(code **)(*param_2 + 0x448))(param_2,*(undefined8 *)(*param_2 + 0x450));
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar4 = System_Type__op_Equality(uVar5,param_1,0);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        param_2 = (long *)(**(code **)(*param_2 + 0x448))(param_2,*(undefined8 *)(*param_2 + 0x450))
        ;
        goto LAB_075e8258;
      }
      uVar5 = (**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar4 = System_Type__op_Equality(uVar5,param_2,0);
      if ((uVar4 & 1) != 0) {
        return 2;
      }
      param_1 = (long *)(**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
    }
    else {
      if (param_2 == (long *)0x0) goto LAB_075e83bc;
      uVar4 = System_Type__get_IsByRef(param_2,0);
      if ((uVar4 & 1) == 0) goto LAB_075e818c;
      param_1 = (long *)(**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
      param_2 = (long *)(**(code **)(*param_2 + 0x448))(param_2,*(undefined8 *)(*param_2 + 0x450));
    }
    if (param_1 == (long *)0x0) goto LAB_075e83bc;
  }
LAB_075e8258:
  uVar4 = System_Type__get_IsPrimitive(param_1,0);
  if ((uVar4 & 1) != 0) {
    if (param_2 == (long *)0x0) goto LAB_075e83bc;
    uVar4 = System_Type__get_IsPrimitive(param_2,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_09183868 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      bVar1 = *(byte *)(DAT_0918a400 + 0x130);
      if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0918a400)) {
LAB_075e83c8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_2);
      }
      if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0918a400)) {
LAB_075e83c0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_1);
      }
      uVar2 = System_DefaultBinder__CanConvertPrimitive(param_2,param_1);
      bVar1 = *(byte *)(DAT_0918a400 + 0x130);
      if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0918a400))
      goto LAB_075e83c0;
      if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0918a400))
      goto LAB_075e83c8;
      uVar3 = System_DefaultBinder__CanConvertPrimitive(param_1,param_2);
      goto LAB_075e8394;
    }
  }
  uVar2 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x2c0));
  if (param_2 != (long *)0x0) {
    uVar3 = (**(code **)(*param_2 + 0x2b8))(param_2,param_1,*(undefined8 *)(*param_2 + 0x2c0));
LAB_075e8394:
    uVar6 = 1;
    if ((uVar2 & 1) != 0) {
      uVar6 = 2;
    }
    if (((uVar3 ^ uVar2) & 1) == 0) {
      uVar6 = 0;
    }
    return uVar6;
  }
LAB_075e83bc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

