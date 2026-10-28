// rea decompile_all
// name: FUN_03fc69cc
// address: 0x3fc69cc
// body: available
// range: 0x3fc69cc-0x3fc6ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_03fc69cc(long param_1,long param_2)

{
  long *plVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar5 = *(long *)(param_1 + 0x58);
  uVar3 = FUN_03f7fb2c(param_1,*(undefined8 *)(param_2 + 8));
  lVar7 = 0;
  uVar8 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 & lVar5 - 1U;
    uVar6 = uVar3 % 0x30;
    if ((*(byte *)(*(long *)(param_1 + 0x40) + (uVar3 / 0x30) * 0x10 + (uVar6 >> 3) + 10) >>
         (uVar6 & 7) & 1) == 0) {
      uVar6 = uVar3;
      if (uVar8 != 0xffffffffffffffff) {
        uVar6 = uVar8;
      }
      uVar3 = 0xffffffffffffffff;
LAB_03fc6aa4:
      auVar10._8_8_ = uVar6;
      auVar10._0_8_ = uVar3;
      return auVar10;
    }
    uVar4 = FUN_03fc6bbc(param_1,uVar3);
    if ((uVar4 & 1) == 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x40) + (uVar3 / 0x30) * 0x10);
      lVar9 = *plVar1;
      uVar2 = FUN_03f5fe4c((long)plVar1 + 10,uVar6);
      uVar4 = FUN_03fc56ac(param_1 + 0x20,param_2,lVar9 + (ulong)uVar2 * 0x10);
      uVar6 = uVar8;
      if ((uVar4 & 1) != 0) {
        uVar6 = 0xffffffffffffffff;
        goto LAB_03fc6aa4;
      }
    }
    else {
      uVar6 = uVar3;
      if (uVar8 != 0xffffffffffffffff) {
        uVar6 = uVar8;
      }
    }
    lVar7 = lVar7 + 1;
    uVar3 = lVar7 + uVar3;
    uVar8 = uVar6;
  } while( true );
}

