// rea decompile_all
// name: Mono.Math.BigInteger.Kernel$$Multiply
// address: 0x740dcb8
// body: available
// range: 0x740dcb8-0x740dd9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Math_BigInteger_Kernel__Multiply
               (long param_1,uint param_2,uint param_3,long param_4,uint param_5,uint param_6,
               long param_7,uint param_8)

{
  uint *puVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x18) == 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x20;
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 0x18) == 0)) {
    param_4 = 0;
  }
  else {
    param_4 = param_4 + 0x20;
  }
  if ((param_7 == 0) || (*(int *)(param_7 + 0x18) == 0)) {
    param_7 = 0;
  }
  else {
    param_7 = param_7 + 0x20;
  }
  puVar5 = (uint *)(param_1 + (ulong)param_2 * 4);
  puVar3 = (uint *)(param_1 + ((ulong)param_3 + (ulong)param_2) * 4);
  if (puVar5 < puVar3) {
    puVar6 = (uint *)(param_7 + (ulong)param_8 * 4);
    uVar2 = param_4 + (ulong)param_5 * 4;
    uVar4 = param_4 + ((ulong)param_6 + (ulong)param_5) * 4;
    do {
      if ((*puVar5 != 0) && (uVar2 < uVar4)) {
        lVar8 = 0;
        uVar9 = 0;
        puVar7 = puVar6;
        do {
          puVar1 = (uint *)(uVar2 + lVar8);
          lVar8 = lVar8 + 4;
          uVar10 = uVar9 + *puVar7 + (ulong)*puVar1 * (ulong)*puVar5;
          uVar9 = uVar10 >> 0x20;
          *puVar7 = (uint)uVar10;
          puVar7 = (uint *)(lVar8 + (long)puVar6);
        } while (uVar2 + lVar8 < uVar4);
        if (uVar9 != 0) {
          *puVar7 = (uint)(uVar10 >> 0x20);
        }
      }
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (puVar5 < puVar3);
  }
  return;
}

