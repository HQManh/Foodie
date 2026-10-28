// rea decompile_all
// name: FUN_03fb1d50
// address: 0x3fb1d50
// body: available
// range: 0x3fb1d50-0x3fb1dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fb1d50(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_90 [72];
  undefined1 auStack_48 [40];
  undefined1 *local_18;
  
  uVar2 = 0;
  if ((*(ulong *)(param_1 + 8) != 0) &&
     (uVar4 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x40), uVar4 < *(ulong *)(param_1 + 8)
     )) {
    uVar3 = *(ulong *)(param_1 + 0x60);
    if (uVar3 < 0x21) {
      uVar2 = 0;
    }
    else {
      do {
        bVar1 = uVar3 < 0x42;
        uVar3 = uVar3 >> 1;
        if (bVar1) break;
      } while (uVar4 < (ulong)(long)(*(float *)(param_1 + 0x14) * (float)uVar3));
      FUN_03fb1f70(auStack_90,0,param_1);
      FUN_03f97434(param_1,auStack_90);
      local_18 = auStack_48;
      FUN_03f5efa4(&local_18);
      uVar2 = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return uVar2;
}

