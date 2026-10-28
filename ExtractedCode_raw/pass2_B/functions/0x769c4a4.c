// rea decompile_all
// name: Newtonsoft.Json.Utilities.ReflectionUtils$$GetMemberValue
// address: 0x769c4a4
// body: available
// range: 0x769c4a4-0x769c6bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769c604 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769c60c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769c6b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769c6b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769c6b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_ReflectionUtils__GetMemberValue(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_095225f4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184518);
    FUN_03f5c2a4(&DAT_09189788);
    FUN_03f5c2a4(&DAT_09223c10);
    FUN_03f5c2a4(&DAT_0921f4c8);
    DAT_095225f4 = 1;
  }
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_1,DAT_0921f4c8,0);
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_2,DAT_09223c10,0);
  iVar1 = Newtonsoft_Json_Utilities_TypeExtensions__MemberType(param_1,0);
  if (iVar1 == 0x10) {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *param_1;
    if ((*(byte *)(DAT_09189788 + 0x130) <= *(byte *)(lVar5 + 0x130)) &&
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_09189788 + 0x130) * 8 + -8) ==
        DAT_09189788)) {
      (**(code **)(lVar5 + 0x328))(param_1,param_2,0,*(undefined8 *)(lVar5 + 0x330));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_1);
  }
  if (iVar1 != 4) {
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(param_1);
    uVar3 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    uVar4 = thunk_FUN_03fc39d4(&DAT_09207a90);
    uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar2,uVar3,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_0921f4c8);
    System_ArgumentException___ctor(uVar3,uVar2,uVar4,0);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091d7188);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar2);
  }
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
    if ((*(byte *)(DAT_09184518 + 0x130) <= *(byte *)(lVar5 + 0x130)) &&
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_09184518 + 0x130) * 8 + -8) ==
        DAT_09184518)) {
                    /* WARNING: Could not recover jumptable at 0x0769c59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x2f8))(param_1,param_2,*(undefined8 *)(lVar5 + 0x300));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

