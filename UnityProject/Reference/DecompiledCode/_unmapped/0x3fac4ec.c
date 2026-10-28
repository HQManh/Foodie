// rea decompile_all
// name: FUN_03fac4ec
// address: 0x3fac4ec
// body: available
// range: 0x3fac4ec-0x3fac617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fac4ec(long *param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int local_9c;
  int iStack_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined1 auStack_84 [36];
  int local_60;
  
  FUN_03f98df4(auStack_84,*(undefined8 *)(param_2 + 0x68),&DAT_0953522c);
  iVar1 = 0;
  if (*(int *)(DAT_09535220 + 0x34) != 0) {
    iVar1 = *(int *)(DAT_09535220 + 0x30) / *(int *)(DAT_09535220 + 0x34);
  }
  FUN_03f98af4(&local_9c,
               DAT_09535218 + *(int *)(DAT_09535220 + 0x2c) + (long)(iVar1 * (local_60 + param_3)),
               &DAT_0953522c);
  *param_1 = DAT_09535218 + local_9c + (long)*(int *)(DAT_09535220 + 0x20);
  if (iStack_98 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(DAT_09535208 + 0x38) + (long)iStack_98 * 8);
  }
  param_1[1] = lVar2;
  if (local_94 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_2 + 0x98) + (long)local_94 * 8);
  }
  param_1[2] = lVar2;
  if (local_90 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_2 + 0x98) + (long)local_90 * 8);
  }
  param_1[3] = lVar2;
  if (local_8c == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_2 + 0x98) + (long)local_8c * 8);
  }
  param_1[4] = lVar2;
  *(undefined4 *)(param_1 + 5) = local_88;
  return;
}

