// rea decompile_all
// name: FUN_03fac354
// address: 0x3fac354
// body: available
// range: 0x3fac354-0x3fac413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fac354(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [12];
  undefined1 auStack_54 [16];
  int local_44;
  
  FUN_03f98b50(auStack_54,param_3,&DAT_0953522c);
  iVar1 = 0;
  if (*(int *)(DAT_09535220 + 0x88) != 0) {
    iVar1 = *(int *)(DAT_09535220 + 0x84) / *(int *)(DAT_09535220 + 0x88);
  }
  auVar3 = FUN_03f98d64(DAT_09535218 + *(int *)(DAT_09535220 + 0x80) +
                        (long)(iVar1 * (local_44 + param_4)),&DAT_0953522c);
  lVar2 = DAT_09535218 + *(int *)(DAT_09535220 + 0x20);
  *(int *)(param_1 + 1) = auVar3._4_4_;
  *param_1 = lVar2 + auVar3._0_4_;
  if (auVar3._8_4_ == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(DAT_09535208 + 0x38) + (long)auVar3._8_4_ * 8);
  }
  param_1[2] = lVar2;
  return;
}

