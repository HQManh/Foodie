// rea decompile_all
// name: FUN_03f78bac
// address: 0x3f78bac
// body: available
// range: 0x3f78bac-0x3f78cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_03f78bac(long param_1,int *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar5 = *(long *)(param_1 + 0x58);
  uVar2 = FUN_03f7f958(param_1,*(undefined8 *)(param_2 + 2));
  lVar7 = 0;
  uVar4 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 & lVar5 - 1U;
    uVar6 = uVar2 % 0x30;
    if ((*(byte *)(*(long *)(param_1 + 0x40) + (uVar2 / 0x30) * 0x10 + (uVar6 >> 3) + 10) >>
         (uVar6 & 7) & 1) == 0) {
      uVar6 = uVar2;
      if (uVar4 != 0xffffffffffffffff) {
        uVar6 = uVar4;
      }
      uVar2 = 0xffffffffffffffff;
LAB_03f78ca4:
      auVar10._8_8_ = uVar6;
      auVar10._0_8_ = uVar2;
      return auVar10;
    }
    uVar3 = FUN_03f78d58(param_1,uVar2);
    uVar8 = uVar4;
    if ((uVar3 & 1) == 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x40) + (uVar2 / 0x30) * 0x10);
      lVar9 = *plVar1;
      uVar4 = FUN_03f5fe4c((long)plVar1 + 10,uVar6);
      if ((*param_2 == *(int *)(lVar9 + (uVar4 & 0xffff) * 0x10)) &&
         ((*param_2 != 0 ||
          (uVar4 = FUN_03f7f908(param_1 + 0x20,*(undefined8 *)(param_2 + 2),
                                *(undefined8 *)(lVar9 + (uVar4 & 0xffff) * 0x10 + 8)),
          (uVar4 & 1) != 0)))) {
        uVar6 = 0xffffffffffffffff;
        goto LAB_03f78ca4;
      }
    }
    else {
      uVar8 = uVar2;
      if (uVar4 != 0xffffffffffffffff) {
        uVar8 = uVar4;
      }
    }
    lVar7 = lVar7 + 1;
    uVar2 = lVar7 + uVar2;
    uVar4 = uVar8;
  } while( true );
}

