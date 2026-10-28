// rea decompile_all
// name: Mono.RuntimeGenericParamInfoHandle$$GetConstraints
// address: 0x74125f4
// body: available
// range: 0x74125f4-0x741271f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741270c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7412710 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x741271c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Mono_RuntimeGenericParamInfoHandle__GetConstraints(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if ((DAT_09520f27 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09520f27 = 1;
  }
  uVar1 = Mono_RuntimeGenericParamInfoHandle__GetConstraintsCount(param_1);
  plVar2 = (long *)FUN_03f5c394(DAT_09180748,(ulong)uVar1);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    lVar7 = 0x20;
    do {
      if (*param_1 == 0) {
LAB_0741270c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = FUN_03f61ed0(*(undefined8 *)(lVar7 + *(long *)(*param_1 + 0x18) + -0x20));
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      lVar4 = System_Type__GetTypeFromHandle(uVar3,0);
      if (plVar2 == (long *)0x0) goto LAB_0741270c;
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
        uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,0);
      }
      if (*(uint *)(plVar2 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(long *)((long)plVar2 + lVar7) = lVar4;
      thunk_FUN_03f5d7b8((long)plVar2 + lVar7,lVar4);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar1 != uVar6);
  }
  return plVar2;
}

