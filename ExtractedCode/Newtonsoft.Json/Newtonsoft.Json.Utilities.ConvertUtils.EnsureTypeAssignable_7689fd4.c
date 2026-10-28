// rea decompile_all
// name: Newtonsoft.Json.Utilities.ConvertUtils$$EnsureTypeAssignable
// address: 0x7689fd4
// body: available
// range: 0x7689fd4-0x768a1df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768a12c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768a1dc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Utilities_ConvertUtils__EnsureTypeAssignable
               (long param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_0952256a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_091bb7a0);
    FUN_03f5c2a4(&DAT_091bd3c0);
    DAT_0952256a = 1;
  }
  if (param_1 == 0) {
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullable(param_3);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
LAB_0768a130:
    lVar4 = thunk_FUN_03fc39d4(&DAT_09182ff8);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091ff368);
    if ((param_2 == (long *)0x0) ||
       (lVar4 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170)),
       lVar4 == 0)) {
      lVar4 = thunk_FUN_03fc39d4(&DAT_09226998);
    }
    uVar1 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar3,uVar1,lVar4,param_3,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar3 = thunk_FUN_03f9944c();
    System_ArgumentException___ctor(uVar3,uVar1,0);
    uVar1 = thunk_FUN_03fc39d4(&DAT_091c6230);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar1);
  }
  uVar1 = System_Object__GetType(param_1,0);
  if (param_3 != (long *)0x0) {
    uVar2 = (**(code **)(*param_3 + 0x2b8))(param_3,uVar1,*(undefined8 *)(*param_3 + 0x2c0));
    if ((uVar2 & 1) != 0) {
      return param_1;
    }
    if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(*(long *)(DAT_09182b90 + 0xb8) + 0x10);
    local_40 = 0;
    uStack_38 = 0;
    FUN_061d6efc(&local_40,uVar1,param_3,DAT_091bb7a0);
    if (lVar4 != 0) {
      lVar4 = FUN_06360fa4(lVar4,local_40,uStack_38,DAT_091bd3c0);
      if (lVar4 != 0) {
        lVar4 = (**(code **)(lVar4 + 0x18))
                          (*(undefined8 *)(lVar4 + 0x40),param_1,*(undefined8 *)(lVar4 + 0x28));
        return lVar4;
      }
      goto LAB_0768a130;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

