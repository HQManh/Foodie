// rea decompile_all
// name: Newtonsoft.Json.Utilities.ReflectionUtils$$CanSetMemberValue
// address: 0x769a724
// body: available
// range: 0x769a724-0x769a8a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769a860 to 0x74e0cd0 System.Reflection.MethodInfo$$op_Inequality (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769a898 to 0x74df15c System.Reflection.FieldInfo$$get_IsPublic (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769a8a0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769a8a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Newtonsoft_Json_Utilities_ReflectionUtils__CanSetMemberValue
                (long *param_1,ulong param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_095225f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184518);
    FUN_03f5c2a4(&DAT_09189788);
    DAT_095225f7 = 1;
  }
  iVar1 = Newtonsoft_Json_Utilities_TypeExtensions__MemberType(param_1,0);
  if (iVar1 == 0x10) {
    if (param_1 == (long *)0x0) {
LAB_0769a8a4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *param_1;
    if ((*(byte *)(lVar6 + 0x130) < *(byte *)(DAT_09189788 + 0x130)) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_09189788 + 0x130) * 8 + -8) !=
        DAT_09189788)) {
LAB_0769a89c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_1);
    }
    uVar2 = (**(code **)(lVar6 + 0x2a8))(param_1,*(undefined8 *)(lVar6 + 0x2b0));
    if (((uVar2 & 1) != 0) && ((param_2 & 1) == 0)) {
      uVar5 = (**(code **)(*param_1 + 0x318))(param_1,0,*(undefined8 *)(*param_1 + 800));
      uVar4 = System_Reflection_MethodInfo__op_Inequality(uVar5,0,0);
      return uVar4;
    }
  }
  else {
    if (iVar1 == 4) {
      if (param_1 == (long *)0x0) goto LAB_0769a8a4;
      if ((*(byte *)(*param_1 + 0x130) < *(byte *)(DAT_09184518 + 0x130)) ||
         (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(DAT_09184518 + 0x130) * 8 + -8) !=
          DAT_09184518)) goto LAB_0769a89c;
      uVar4 = System_Reflection_FieldInfo__get_IsLiteral(param_1,0);
      if ((uVar4 & 1) == 0) {
        uVar3 = System_Reflection_FieldInfo__get_IsInitOnly(param_1,0);
        uVar3 = uVar3 & (param_3 ^ 1);
        uVar2 = uVar3 ^ 1;
        if (((uVar3 & 1) == 0) && ((param_2 & 1) == 0)) {
          uVar4 = System_Reflection_FieldInfo__get_IsPublic(param_1,0);
          return uVar4;
        }
        goto LAB_0769a7d0;
      }
    }
    uVar2 = 0;
  }
LAB_0769a7d0:
  return (ulong)(uVar2 & 1);
}

