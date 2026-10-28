// rea decompile_all
// name: thunk_FUN_03f6738c
// address: 0x74ecea8
// body: available
// range: 0x74ecea8-0x74eceab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long thunk_FUN_03f6738c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lStack_58;
  long lStack_50;
  long *plStack_38;
  
  FUN_03f66c8c(&lStack_58);
  lVar3 = FUN_03f984c8(DAT_09535468,(lStack_50 - lStack_58 >> 3) * -0x3333333333333333);
  if (lStack_50 != lStack_58) {
    lVar5 = 0;
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar1 = lStack_58 + lVar5;
      lVar2 = lVar1 + 9;
      if ((*(byte *)(lVar1 + 8) & 1) != 0) {
        lVar2 = *(long *)(lVar1 + 0x18);
      }
      uVar4 = FUN_03f967b4(lVar2);
      *(undefined8 *)(lVar3 + 0x20 + uVar7 * 8) = uVar4;
      FUN_03f5d7b8(lVar3 + 0x20 + lVar6);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
      lVar5 = lVar5 + 0x28;
    } while (uVar7 < (ulong)((lStack_50 - lStack_58 >> 3) * -0x3333333333333333));
  }
  plStack_38 = &lStack_58;
  FUN_03f67cac(&plStack_38);
  return lVar3;
}

