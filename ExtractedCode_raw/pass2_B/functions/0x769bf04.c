// rea decompile_all
// name: Newtonsoft.Json.Utilities.ReflectionUtils$$IsByRefLikeType
// address: 0x769bf04
// body: available
// range: 0x769bf04-0x769c00f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769c008 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769c00c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Newtonsoft_Json_Utilities_ReflectionUtils__IsByRefLikeType(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_095225f2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_0920e148);
    DAT_095225f2 = 1;
  }
  uVar3 = Newtonsoft_Json_Utilities_TypeExtensions__IsValueType(param_1,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = Newtonsoft_Json_Utilities_ReflectionUtils__GetAttributes(param_1,0,0);
    if (lVar4 == 0) {
LAB_0769c008:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      do {
        if (uVar1 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar5 = *(long *)(lVar4 + 0x20 + lVar8 * 8);
        if ((lVar5 == 0) ||
           (plVar6 = (long *)System_Object__GetType(lVar5,0), plVar6 == (long *)0x0))
        goto LAB_0769c008;
        uVar7 = (**(code **)(*plVar6 + 0x2f8))(plVar6,*(undefined8 *)(*plVar6 + 0x300));
        uVar2 = System_String__Equals(uVar7,DAT_0920e148,4,0);
        if ((uVar2 & 1) != 0) break;
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar1);
      goto LAB_0769bff4;
    }
  }
  uVar2 = 0;
LAB_0769bff4:
  return uVar2 & 1;
}

