// rea decompile_all
// name: System.DefaultBinder$$CanConvertPrimitive
// address: 0x75e7e10
// body: available
// range: 0x75e7e10-0x75e803b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e8038 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_DefaultBinder__CanConvertPrimitive(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if ((DAT_09521eed & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521eed = 1;
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = (**(code **)(*param_1 + 0x5d8))(param_1,*(undefined8 *)(*param_1 + 0x5e0));
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__GetTypeCode(param_1,0);
  uVar4 = System_Type__GetTypeCode(param_2,0);
  if ((uVar3 == uVar4) && (uVar5 = System_Type__get_IsPrimitive(param_1,0), (uVar5 & 1) != 0)) {
    return 1;
  }
  lVar1 = DAT_09535430;
  if ((int)uVar4 < 10) {
    if ((int)uVar4 < 8) {
      if (uVar4 == 4) {
        bVar2 = uVar3 == 6 || uVar3 == 8;
        goto LAB_075e8024;
      }
      if (uVar4 == 7) {
        bVar2 = 1 < uVar3 - 5;
        goto LAB_075e7f98;
      }
    }
    else {
      if (uVar4 == 8) {
        bVar2 = (uVar3 & 0xfffffffd) == 4;
        goto LAB_075e8024;
      }
      if (uVar4 == 9) {
        bVar2 = 4 < uVar3 - 4;
        goto LAB_075e7f98;
      }
    }
  }
  else if ((int)uVar4 < 0xc) {
    if (uVar4 == 10) {
      if (8 < uVar3) {
        return 0;
      }
      uVar4 = 0x150;
      goto LAB_075e7f84;
    }
    if (uVar4 == 0xb) {
      bVar2 = 6 < uVar3 - 4;
      goto LAB_075e7f98;
    }
  }
  else {
    if (uVar4 == 0xc) {
      if (10 < uVar3) {
        return 0;
      }
      uVar4 = 0x550;
LAB_075e7f84:
      return uVar4 >> (ulong)(uVar3 & 0x1f) & 1;
    }
    if (uVar4 == 0xd) {
      bVar2 = 8 < uVar3 - 4;
LAB_075e7f98:
      return (uint)!bVar2;
    }
    if (uVar4 == 0xe) {
      bVar2 = 9 < uVar3 - 4;
      goto LAB_075e7f98;
    }
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = System_Type__GetTypeFromHandle(lVar1 + 0x20,0);
  uVar5 = System_Type__op_Equality(param_2,uVar6,0);
  lVar1 = DAT_09535438;
  if ((uVar5 & 1) == 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_Type__GetTypeFromHandle(lVar1 + 0x20,0);
    uVar5 = System_Type__op_Equality(param_2,uVar6,0);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  bVar2 = param_1 == param_2;
LAB_075e8024:
  return (uint)bVar2;
}

