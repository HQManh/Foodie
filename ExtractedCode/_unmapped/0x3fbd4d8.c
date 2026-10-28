// rea decompile_all
// name: FUN_03fbd4d8
// address: 0x3fbd4d8
// body: available
// range: 0x3fbd4d8-0x3fbd567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fbd530 to 0x3f5ef9c FUN_03f5ef9c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fbd564 to 0x3f5d7b8 FUN_03f5d7b8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fbd4d8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = FUN_03fbe19c(param_3,param_4);
  lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0x40);
  iVar2 = FUN_03fc1104(lVar3);
  param_3 = param_3 + (long)iVar2 * (long)iVar1;
  if (-1 < *(int *)(lVar3 + 0x28)) {
    FUN_03f5ef9c(param_5,*(undefined8 *)(param_3 + 0x20));
    return;
  }
  iVar1 = FUN_03fc1104(lVar3);
  memcpy(param_5,(void *)(param_3 + 0x20),(long)iVar1);
  FUN_03f5d7b8(param_5,(long)iVar1);
  return;
}

