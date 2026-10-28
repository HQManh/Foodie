// rea decompile_all
// name: FUN_03faa85c
// address: 0x3faa85c
// body: available
// range: 0x3faa85c-0x3faa927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03faa85c(int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [32];
  int local_78;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  
  lVar2 = DAT_09535200;
  lVar3 = *(long *)(DAT_09535200 + (long)param_1 * 8);
  DataMemoryBarrier(2,1);
  if (lVar3 == 0) {
    FUN_03f5d894(auStack_a0,&DAT_09535730);
    lVar3 = *(long *)(lVar2 + (long)param_1 * 8);
    if (lVar3 == 0) {
      iVar1 = 0;
      if (*(int *)(DAT_09535220 + 0x4c) != 0) {
        iVar1 = *(int *)(DAT_09535220 + 0x48) / *(int *)(DAT_09535220 + 0x4c);
      }
      FUN_03f98b50(auStack_44,DAT_09535218 + *(int *)(DAT_09535220 + 0x44) + (long)(iVar1 * param_1)
                   ,&DAT_0953522c);
      lVar3 = FUN_03fab690(local_40);
      FUN_03fbeee4();
      FUN_03f98df4(auStack_98,*(undefined8 *)(lVar3 + 0x68),&DAT_0953522c);
      lVar3 = *(long *)(*(long *)(lVar3 + 0x98) + (long)(param_1 - local_78) * 8);
      DataMemoryBarrier(2,3);
      *(long *)(lVar2 + (long)param_1 * 8) = lVar3;
    }
    FUN_03f5d920(auStack_a0);
  }
  return lVar3;
}

