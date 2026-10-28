// rea decompile_all
// name: FUN_03fac414
// address: 0x3fac414
// body: available
// range: 0x3fac414-0x3fac4eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fac414(long *param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined1 auStack_74 [40];
  int local_4c;
  
  FUN_03f98df4(auStack_74,*(undefined8 *)(param_2 + 0x68),&DAT_0953522c);
  local_4c = local_4c + param_3;
  lVar1 = DAT_09535218 + *(int *)(DAT_09535220 + 0x38);
  piVar3 = (int *)(lVar1 + (long)local_4c * 0x14);
  iVar2 = piVar3[1];
  *param_1 = DAT_09535218 + *(int *)(DAT_09535220 + 0x20) + (long)*piVar3;
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_2 + 0x98) + (long)iVar2 * 8);
  }
  param_1[1] = lVar4;
  iVar2 = *(int *)(lVar1 + (long)local_4c * 0x14 + 8);
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_2 + 0x98) + (long)iVar2 * 8);
  }
  param_1[2] = lVar4;
  param_1[3] = *(long *)(lVar1 + (long)local_4c * 0x14 + 0xc);
  return;
}

