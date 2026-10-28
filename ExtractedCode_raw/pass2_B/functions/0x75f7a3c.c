// rea decompile_all
// name: System.RuntimeType$$TryConvertToType
// address: 0x75f7a3c
// body: available
// range: 0x75f7a3c-0x75f7c4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f7c4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_RuntimeType__TryConvertToType(long *param_1,ulong param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_09521f61 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521f61 = 1;
  }
  uVar2 = (**(code **)(*param_1 + 0x8d8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x8e0));
  if ((uVar2 & 1) != 0) {
    return param_2;
  }
  uVar2 = System_Type__get_IsByRef(param_1,0);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) {
      return 0;
    }
  }
  else {
    plVar3 = (long *)(**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
    if (param_2 == 0) {
      return 0;
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = (**(code **)(*plVar3 + 0x8d8))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x8e0));
    if ((uVar2 & 1) != 0) {
      return param_2;
    }
  }
  uVar2 = (**(code **)(*param_1 + 0x5d8))(param_1,*(undefined8 *)(*param_1 + 0x5e0));
  if ((uVar2 & 1) == 0) {
    uVar2 = System_Type__get_IsPrimitive(param_1,0);
    if ((uVar2 & 1) != 0) goto LAB_075f7b78;
    uVar2 = System_Type__get_IsPointer(param_1,0);
    if ((uVar2 & 1) == 0) goto LAB_075f7c3c;
    uVar4 = System_Object__GetType(param_2,0);
    lVar1 = DAT_09535430;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar5 = System_Type__GetTypeFromHandle(lVar1 + 0x20,0);
    uVar2 = System_Type__op_Equality(uVar4,uVar5,0);
    lVar1 = DAT_09535438;
    if ((uVar2 & 1) != 0) {
      return param_2;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Type__GetTypeFromHandle(lVar1 + 0x20,0);
    uVar2 = System_Type__op_Equality(uVar4,uVar5,0);
    uVar2 = uVar2 & 1;
  }
  else {
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Enum__GetUnderlyingType(param_1);
    uVar5 = System_Object__GetType(param_2,0);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar2 = System_Type__op_Equality(uVar4,uVar5,0);
    if ((uVar2 & 1) != 0) {
      return param_2;
    }
LAB_075f7b78:
    if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_2 = System_RuntimeType__IsConvertibleToPrimitiveType(param_2,param_1);
    uVar2 = param_2;
  }
  if (uVar2 != 0) {
    return param_2;
  }
LAB_075f7c3c:
  *param_3 = 1;
  return 0;
}

