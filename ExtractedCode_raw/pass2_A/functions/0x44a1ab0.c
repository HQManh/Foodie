// rea decompile_all
// name: CookingGraph.Execution.CookingAssemblySnapshot$$get_Complete
// address: 0x44a1ab0
// body: available
// range: 0x44a1ab0-0x44a1bab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44a1ba8 to 0x4ab20f8 FUN_04ab20f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingAssemblySnapshot__get_Complete(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_095181ec & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9258);
    FUN_03f5c2a4(&DAT_09178468);
    FUN_03f5c2a4(&DAT_091e6a30);
    FUN_03f5c2a4(&DAT_0918ee58);
    DAT_095181ec = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_0918ee58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar2 = *(undefined8 **)(DAT_0918ee58 + 0xb8);
  lVar4 = puVar2[1];
  if (lVar4 == 0) {
    if (*(int *)(DAT_0918ee58 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar2 = *(undefined8 **)(DAT_0918ee58 + 0xb8);
    }
    uVar5 = *puVar2;
    lVar4 = thunk_FUN_03f9944c(DAT_09178468);
    FUN_05311eac(lVar4,uVar5,DAT_091e6a30,0);
    plVar1 = (long *)(*(long *)(DAT_0918ee58 + 0xb8) + 8);
    *plVar1 = lVar4;
    thunk_FUN_03f5d7b8(plVar1,lVar4);
  }
  FUN_04ab20f8(uVar3,lVar4,DAT_091c9258);
  return;
}

