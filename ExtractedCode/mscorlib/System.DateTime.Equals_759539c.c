// rea decompile_all
// name: System.DateTime$$Equals
// address: 0x759539c
// body: available
// range: 0x759539c-0x759544b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7595448 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_DateTime__Equals(ulong *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if ((DAT_09521b8d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    DAT_09521b8d = 1;
  }
  if ((param_2 == (long *)0x0) || (*param_2 != DAT_09183548)) {
    bVar1 = false;
  }
  else {
    lVar2 = DAT_09183548;
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar2 = *param_2;
    }
    if (*(long *)(lVar2 + 0x40) != *(long *)(DAT_09183548 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_2);
    }
    uVar4 = *param_1;
    puVar3 = (ulong *)thunk_FUN_03f99594(param_2);
    bVar1 = ((*puVar3 ^ uVar4) & 0x3fffffffffffffff) == 0;
  }
  return bVar1;
}

