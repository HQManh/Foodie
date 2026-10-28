// rea decompile_all
// name: FUN_03fc0f6c
// address: 0x3fc0f6c
// body: available
// range: 0x3fc0f6c-0x3fc1073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_03fc0f6c(long param_1,uint param_2)

{
  ulong uVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint *local_48;
  uint *local_40;
  uint *local_38;
  uint local_30 [2];
  long local_28;
  
  local_40 = local_30;
  local_30[0] = param_2;
  local_28 = param_1;
  uVar1 = FUN_03fc2d7c(&DAT_09535920,&local_40,&local_38);
  if ((uVar1 & 1) == 0) {
    FUN_03f5d894(&local_40,&DAT_09535730);
    local_48 = local_30;
    uVar1 = FUN_03fc2d7c(&DAT_09535920,&local_48,&local_38);
    if ((uVar1 & 1) == 0) {
      local_48 = (uint *)0x0;
      puVar2 = (uint *)FUN_03fa7f20(0x10);
      *puVar2 = param_2;
      local_48 = puVar2;
      uVar3 = FUN_03fa7f20((ulong)param_2 << 3);
      *(undefined8 *)(puVar2 + 2) = uVar3;
      if (param_2 != 0) {
        lVar5 = 0;
        lVar4 = (ulong)param_2 << 3;
        do {
          lVar4 = lVar4 + -8;
          *(undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)lVar5 * 8) =
               *(undefined8 *)(param_1 + lVar5 * 8);
          lVar5 = lVar5 + 1;
        } while (lVar4 != 0);
      }
      FUN_03fc23d0(&DAT_09535920,&local_48);
      FUN_0404c020(1,&DAT_09534448);
      local_38 = local_48;
    }
    FUN_03f5d920(&local_40);
  }
  return local_38;
}

