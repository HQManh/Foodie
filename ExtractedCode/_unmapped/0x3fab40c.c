// rea decompile_all
// name: FUN_03fab40c
// address: 0x3fab40c
// body: available
// range: 0x3fab40c-0x3fab4db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fab40c(long *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  int local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  iVar1 = 0;
  if (*(int *)(DAT_09535220 + 0x100) != 0) {
    iVar1 = *(int *)(DAT_09535220 + 0xfc) / *(int *)(DAT_09535220 + 0x100);
  }
  FUN_03f98f5c(&local_58,DAT_09535218 + *(int *)(DAT_09535220 + 0xf8) + (long)(iVar1 * param_2),
               &DAT_0953522c);
  lVar2 = DAT_09535218;
  iVar1 = *(int *)(DAT_09535220 + 0x20);
  *param_3 = uStack_54;
  *param_1 = lVar2 + local_58 + (long)iVar1;
  lVar2 = DAT_09535240;
  *(undefined4 *)(param_1 + 3) = uStack_4c;
  *(undefined4 *)((long)param_1 + 0x1c) = uStack_44;
  puVar3 = (undefined4 *)(lVar2 + (long)param_2 * 0x18);
  *(long **)(puVar3 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = uStack_3c;
  param_1[5] = (long)puVar3;
  *puVar3 = local_50;
  puVar3[1] = local_48;
  *(undefined4 *)(param_1 + 4) = uStack_34;
  puVar3[2] = local_38;
  puVar3[3] = local_40;
  return;
}

