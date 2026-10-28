// rea decompile_all
// name: System.Security.Claims.Claim$$get_Properties
// address: 0x7479890
// body: available
// range: 0x7479890-0x7479983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7479980 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0747997c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long System_Security_Claims_Claim__get_Properties(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  char local_24 [4];
  
  if ((DAT_09521236 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fe90);
    FUN_03f5c2a4(&DAT_09176c28);
    DAT_09521236 = 1;
  }
  plVar3 = (long *)(param_1 + 0x40);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    local_24[0] = '\0';
    System_Threading_Monitor__Enter(uVar2,local_24,0);
    if (*plVar3 == 0) {
      lVar1 = thunk_FUN_03f9944c(DAT_09176c28);
      FUN_06fd76bc(lVar1,DAT_0919fe90);
      *plVar3 = lVar1;
      thunk_FUN_03f5d7b8(plVar3,lVar1);
    }
    if (local_24[0] != '\0') {
      System_Threading_Monitor__Exit(uVar2,0);
    }
    lVar1 = *plVar3;
  }
  return lVar1;
}

