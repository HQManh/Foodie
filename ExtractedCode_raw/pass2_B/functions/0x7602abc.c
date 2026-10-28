// rea decompile_all
// name: System.MonoCustomAttrs$$GetPseudoCustomAttributes
// address: 0x7602abc
// body: available
// range: 0x7602abc-0x7602c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7602c1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7602c20 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7602c2c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_MonoCustomAttrs__GetPseudoCustomAttributes(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if ((DAT_09521fe7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182790);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918a8d8);
    DAT_09521fe7 = 1;
  }
  if (param_1 == 0) goto LAB_07602c1c;
  uVar1 = System_Type__get_Attributes(param_1,0);
  uVar6 = uVar1 >> 0xd & 1;
  if ((uVar1 >> 0xc & 1) == 0) {
    if ((uVar1 & 0x2000) == 0) {
      return (long *)0x0;
    }
    plVar2 = (long *)FUN_03f5c394(DAT_09180318,uVar6);
LAB_07602b60:
    lVar3 = thunk_FUN_03f9944c(DAT_0918a8d8);
    System_SerializableAttribute___ctor(lVar3,0);
    if (plVar2 == (long *)0x0) goto LAB_07602c1c;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_07602c24;
    if ((int)plVar2[3] == 0) goto LAB_07602c20;
    plVar2[4] = lVar3;
    thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
    if ((uVar1 >> 0xc & 1) == 0) {
      return plVar2;
    }
    uVar6 = 1;
  }
  else {
    plVar2 = (long *)FUN_03f5c394(DAT_09180318,uVar6 + 1);
    if ((uVar1 & 0x2000) != 0) goto LAB_07602b60;
    uVar6 = 0;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09182790);
  System_Runtime_InteropServices_ComImportAttribute___ctor(lVar3,0);
  if (plVar2 != (long *)0x0) {
    if ((lVar3 == 0) ||
       (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 != 0)) {
      if (uVar6 < *(uint *)(plVar2 + 3)) {
        plVar2[(ulong)uVar6 + 4] = lVar3;
        thunk_FUN_03f5d7b8(plVar2 + (ulong)uVar6 + 4,lVar3);
        return plVar2;
      }
LAB_07602c20:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
LAB_07602c24:
    uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,0);
  }
LAB_07602c1c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

