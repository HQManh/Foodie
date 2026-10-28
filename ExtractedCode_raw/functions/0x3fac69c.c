// rea decompile_all
// name: FUN_03fac69c
// address: 0x3fac69c
// body: available
// range: 0x3fac69c-0x3fac71b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fac69c(undefined8 *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  FUN_03faa93c(&local_28,*(long *)(DAT_09535208 + 0x48) + (long)param_2 * 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = DAT_09535220;
  param_1[2] = 0;
  iVar1 = 0;
  if (*(int *)(lVar3 + 0x4c) != 0) {
    iVar1 = *(int *)(lVar3 + 0x48) / *(int *)(lVar3 + 0x4c);
  }
  lVar2 = 0;
  if ((long)iVar1 != 0) {
    lVar2 = ((local_28 - DAT_09535218) - (long)*(int *)(lVar3 + 0x44)) / (long)iVar1;
  }
  uVar4 = FUN_03faa85c(lVar2);
  *param_1 = uVar4;
  param_1[2] = uStack_18;
  param_1[1] = local_20;
  return;
}

