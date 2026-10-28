// rea decompile_all
// name: FUN_03f7bf44
// address: 0x3f7bf44
// body: available
// range: 0x3f7bf44-0x3f7c04b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_03f7bf44(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  lVar4 = *(long *)(param_1 + 0x60);
  lVar2 = FUN_03f7f990(*(long *)(param_2 + 8) + 0x20);
  lVar7 = 0;
  uVar5 = lVar2 * (ulong)*(uint *)(param_2 + 0x10);
  uVar8 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 & lVar4 - 1U;
    uVar6 = uVar5 % 0x30;
    if ((*(byte *)(*(long *)(param_1 + 0x48) + (uVar5 / 0x30) * 0x10 + (uVar6 >> 3) + 10) >>
         (uVar6 & 7) & 1) == 0) {
      uVar6 = uVar5;
      if (uVar8 != 0xffffffffffffffff) {
        uVar6 = uVar8;
      }
      uVar5 = 0xffffffffffffffff;
LAB_03f7c02c:
      auVar9._8_8_ = uVar6;
      auVar9._0_8_ = uVar5;
      return auVar9;
    }
    uVar3 = FUN_03f7c04c(param_1,uVar5);
    if ((uVar3 & 1) == 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x48) + (uVar5 / 0x30) * 0x10);
      lVar2 = *plVar1;
      uVar6 = FUN_03f5fe4c((long)plVar1 + 10,uVar6);
      uVar3 = FUN_03f7c0c8(param_1 + 0x20,param_2,lVar2 + (uVar6 & 0xffff) * 0x20);
      uVar6 = uVar8;
      if ((uVar3 & 1) != 0) {
        uVar6 = 0xffffffffffffffff;
        goto LAB_03f7c02c;
      }
    }
    else {
      uVar6 = uVar5;
      if (uVar8 != 0xffffffffffffffff) {
        uVar6 = uVar8;
      }
    }
    lVar7 = lVar7 + 1;
    uVar5 = lVar7 + uVar5;
    uVar8 = uVar6;
  } while( true );
}

