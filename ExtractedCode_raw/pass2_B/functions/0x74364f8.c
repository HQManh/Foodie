// rea decompile_all
// name: System.String$$memset
// address: 0x74364f8
// body: available
// range: 0x74364f8-0x74365b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_String__memset(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  if ((int)param_3 < 8) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(char *)param_1 = (char)param_2;
      param_1 = (uint *)((long)param_1 + 1);
    }
  }
  else {
    uVar4 = param_2 | param_2 << 8;
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = uVar4 | uVar4 << 0x10;
    }
    uVar4 = (uint)param_1 & 3;
    if (((ulong)param_1 & 3) != 0) {
      uVar5 = uVar4 | 0xfffffffc;
      puVar3 = param_1;
      do {
        bVar2 = uVar5 != 0xffffffff;
        uVar5 = uVar5 + 1;
        param_1 = (uint *)((long)puVar3 + 1);
        *(char *)puVar3 = (char)uVar1;
        puVar3 = param_1;
      } while (bVar2);
      param_3 = param_3 - (4 - uVar4);
    }
    uVar4 = param_3;
    if (0xf < (int)param_3) {
      do {
        param_3 = uVar4 - 0x10;
        *param_1 = uVar1;
        param_1[1] = uVar1;
        param_1[2] = uVar1;
        param_1[3] = uVar1;
        param_1 = param_1 + 4;
        bVar2 = 0x1f < uVar4;
        uVar4 = param_3;
      } while (bVar2);
    }
    puVar3 = param_1;
    uVar4 = param_3;
    if (3 < (int)param_3) {
      do {
        param_3 = uVar4 - 4;
        param_1 = puVar3 + 1;
        *puVar3 = uVar1;
        bVar2 = 7 < uVar4;
        puVar3 = param_1;
        uVar4 = param_3;
      } while (bVar2);
    }
    if (0 < (int)param_3) {
      param_3 = param_3 + 1;
      do {
        param_3 = param_3 - 1;
        *(char *)param_1 = (char)uVar1;
        param_1 = (uint *)((long)param_1 + 1);
      } while (1 < param_3);
    }
  }
  return;
}

