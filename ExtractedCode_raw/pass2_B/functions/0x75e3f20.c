// rea decompile_all
// name: System.Attribute$$GetHashCode
// address: 0x75e3f20
// body: available
// range: 0x75e3f20-0x75e404b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e4040 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e4044 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e4048 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Attribute__GetHashCode(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if ((DAT_09521edf & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a348);
    DAT_09521edf = 1;
  }
  plVar2 = (long *)System_Object__GetType(param_1,0);
  if ((plVar2 == (long *)0x0) ||
     (lVar3 = (**(code **)(*plVar2 + 0x708))(plVar2,0x34,*(undefined8 *)(*plVar2 + 0x710)),
     lVar3 == 0)) {
LAB_075e4044:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(lVar3 + 0x18);
  plVar4 = plVar2;
  if (0 < (int)uVar1) {
    uVar7 = 0;
    do {
      if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar4 = *(long **)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
      if (plVar4 == (long *)0x0) goto LAB_075e4044;
      lVar6 = *plVar4;
      if ((*(byte *)(lVar6 + 0x130) < *(byte *)(DAT_0918a348 + 0x130)) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_0918a348 + 0x130) * 8 + -8) !=
          DAT_0918a348)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      plVar4 = (long *)(**(code **)(lVar6 + 0x358))(plVar4,param_1,*(undefined8 *)(lVar6 + 0x360));
      if (plVar4 != (long *)0x0) {
        lVar6 = System_Object__GetType(plVar4,0);
        if (lVar6 == 0) goto LAB_075e4044;
        uVar5 = System_Type__get_IsArray(lVar6,0);
        if ((uVar5 & 1) == 0) break;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      uVar7 = uVar7 + 1;
      plVar4 = plVar2;
    } while ((int)uVar7 < (int)uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x075e403c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
  return;
}

