// rea decompile_all
// name: FUN_03fc5ba8
// address: 0x3fc5ba8
// body: available
// range: 0x3fc5ba8-0x3fc5c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc5ba8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  ushort uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  sVar3 = *(short *)(param_2 + 1);
  *param_1 = 0;
  *(short *)(param_1 + 1) = sVar3;
  if (sVar3 != 0) {
    puVar5 = (undefined4 *)FUN_03f5fa04(param_1);
    uVar4 = *(ushort *)(param_2 + 1);
    *param_1 = puVar5;
    if ((ulong)uVar4 != 0) {
      puVar6 = (undefined4 *)*param_2;
      puVar7 = puVar6 + (ulong)uVar4 * 6;
      do {
        uVar1 = *puVar6;
        uVar8 = *(undefined8 *)(puVar6 + 2);
        uVar2 = puVar6[4];
        puVar6 = puVar6 + 6;
        *puVar5 = uVar1;
        *(undefined8 *)(puVar5 + 2) = uVar8;
        puVar5[4] = uVar2;
        puVar5 = puVar5 + 6;
      } while (puVar6 != puVar7);
    }
  }
  uVar1 = *(undefined4 *)((long)param_2 + 10);
  *(undefined2 *)((long)param_1 + 0xe) = *(undefined2 *)((long)param_2 + 0xe);
  *(undefined4 *)((long)param_1 + 10) = uVar1;
  return;
}

