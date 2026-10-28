// rea decompile_all
// name: FUN_03fc49a8
// address: 0x3fc49a8
// body: available
// range: 0x3fc49a8-0x3fc4a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc49a8(long *param_1,ulong param_2)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  void *local_40;
  undefined8 uStack_38;
  
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = (param_2 - 1) / 0x30 + 1;
  }
  local_40 = (void *)0x0;
  uStack_38 = 0;
  FUN_03fc4364(param_1,lVar2,&local_40);
  if (local_40 != (void *)0x0) {
    free(local_40);
    local_40 = (void *)0x0;
  }
  if (param_2 < (ulong)param_1[3]) {
    uVar4 = (int)param_2 + (int)(param_2 / 0x30) * -0x30;
    if ((uVar4 & 0xffff) != 0) {
      lVar2 = param_1[1];
      do {
        FUN_03f5fdc4(lVar2 + -0x10,uVar4);
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffff) != 0x30);
    }
    lVar2 = *param_1;
    param_1[4] = 0;
    if (lVar2 != param_1[1]) {
      lVar3 = 0;
      do {
        puVar1 = (ushort *)(lVar2 + 8);
        lVar2 = lVar2 + 0x10;
        lVar3 = lVar3 + (ulong)*puVar1;
      } while (lVar2 != param_1[1]);
      param_1[4] = lVar3;
    }
  }
  param_1[3] = param_2;
  return;
}

