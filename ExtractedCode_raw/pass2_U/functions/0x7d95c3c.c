// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask$$get_Status
// address: 0x7d95c3c
// body: available
// range: 0x7d95c3c-0x7d95cef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Cysharp_Threading_Tasks_UniTask__get_Status(undefined8 *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_09525da5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_09525da5 = 1;
  }
  plVar7 = (long *)*param_1;
  if (plVar7 == (long *)0x0) {
    return 1;
  }
  lVar4 = *plVar7;
  uVar1 = *(undefined2 *)(param_1 + 1);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_091868c0) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_07d95cd8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091868c0,0);
LAB_07d95cd8:
                    /* WARNING: Could not recover jumptable at 0x07d95cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar2)(plVar7,uVar1,puVar2[1]);
  return uVar3;
}

