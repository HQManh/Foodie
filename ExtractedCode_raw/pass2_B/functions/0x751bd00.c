// rea decompile_all
// name: System.ArgumentOutOfRangeException$$get_Message
// address: 0x751bd00
// body: available
// range: 0x751bd00-0x751bdab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x751bd94 to 0x7430064 System.String$$Concat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_ArgumentOutOfRangeException__get_Message(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_09521756 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091fb480);
    DAT_09521756 = 1;
  }
  lVar1 = System_ArgumentException__get_Message(param_1);
  plVar4 = *(long **)(param_1 + 0x98);
  lVar3 = lVar1;
  if (plVar4 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    lVar3 = SR__Format(DAT_091fb480,uVar2,0);
    if (lVar1 != 0) {
      uVar2 = System_Environment__get_NewLine(0);
      lVar3 = System_String__Concat(lVar1,uVar2,lVar3,0);
      return lVar3;
    }
  }
  return lVar3;
}

