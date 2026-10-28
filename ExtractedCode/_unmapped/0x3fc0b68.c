// rea decompile_all
// name: FUN_03fc0b68
// address: 0x3fc0b68
// body: available
// range: 0x3fc0b68-0x3fc0bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fc0bf0 to 0x89db8c0 <EXTERNAL>::memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc0b68(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 200) != 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 == 0) {
LAB_03fc0bb0:
    cVar1 = '\x01';
    *(undefined1 *)(param_1 + 0x130) = 1;
  }
  else {
    if (*(long *)(lVar2 + 200) == 0) {
      FUN_03fc0b68();
      lVar2 = *(long *)(param_1 + 0x58);
      if (lVar2 == 0) goto LAB_03fc0bb0;
    }
    cVar1 = *(char *)(lVar2 + 0x130) + '\x01';
    *(char *)(param_1 + 0x130) = cVar1;
  }
  plVar3 = (long *)FUN_03fa7f34(cVar1,8);
  *(long **)(param_1 + 200) = plVar3;
  if (*(long *)(param_1 + 0x58) == 0) {
    *plVar3 = param_1;
    return;
  }
  plVar3[(ulong)*(byte *)(param_1 + 0x130) - 1] = param_1;
  memcpy(*(void **)(param_1 + 200),*(void **)(*(long *)(param_1 + 0x58) + 200),
         (ulong)*(byte *)(*(long *)(param_1 + 0x58) + 0x130) << 3);
  return;
}

