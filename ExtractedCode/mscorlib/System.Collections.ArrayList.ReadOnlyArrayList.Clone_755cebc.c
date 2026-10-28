// rea decompile_all
// name: System.Collections.ArrayList.ReadOnlyArrayList$$Clone
// address: 0x755cebc
// body: available
// range: 0x755cebc-0x755cfd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755cfa8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755cfd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Collections_ArrayList_ReadOnlyArrayList__Clone(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if ((DAT_09521996 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_0918e548);
    DAT_09521996 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  lVar2 = thunk_FUN_03f9944c(DAT_0918e548);
  System_Collections_ArrayList___ctor();
  plVar4 = (long *)(lVar2 + 0x28);
  *plVar4 = lVar5;
  thunk_FUN_03f5d7b8(plVar4,lVar5);
  plVar3 = *(long **)(param_1 + 0x28);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x338))(plVar3,*(undefined8 *)(*plVar3 + 0x340));
  lVar5 = DAT_09181588;
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(DAT_09181588 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == DAT_09181588)) {
      *plVar4 = (long)plVar3;
      if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == lVar5)) goto LAB_0755cfb0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar3);
  }
  *plVar4 = 0;
LAB_0755cfb0:
  thunk_FUN_03f5d7b8(plVar4,plVar3);
  return lVar2;
}

