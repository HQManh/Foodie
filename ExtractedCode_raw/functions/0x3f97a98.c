// rea decompile_all
// name: FUN_03f97a98
// address: 0x3f97a98
// body: available
// range: 0x3f97a98-0x3f97b93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_03f97a98(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar4 = *(long *)(param_1 + 0x60);
  uVar2 = FUN_03f97988(param_1,param_2 + 8);
  lVar6 = 0;
  uVar7 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 & lVar4 - 1U;
    uVar5 = uVar2 % 0x30;
    if ((*(byte *)(*(long *)(param_1 + 0x48) + (uVar2 / 0x30) * 0x10 + (uVar5 >> 3) + 10) >>
         (uVar5 & 7) & 1) == 0) {
      uVar5 = uVar2;
      if (uVar7 != 0xffffffffffffffff) {
        uVar5 = uVar7;
      }
      uVar2 = 0xffffffffffffffff;
LAB_03f97b74:
      auVar9._8_8_ = uVar5;
      auVar9._0_8_ = uVar2;
      return auVar9;
    }
    uVar3 = FUN_03f97b94(param_1,uVar2);
    if ((uVar3 & 1) == 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x48) + (uVar2 / 0x30) * 0x10);
      lVar8 = *plVar1;
      uVar5 = FUN_03f5fe4c((long)plVar1 + 10,uVar5);
      uVar3 = FUN_03f97930(param_1 + 0x20,param_2,lVar8 + (uVar5 & 0xffff) * 0x20);
      uVar5 = uVar7;
      if ((uVar3 & 1) != 0) {
        uVar5 = 0xffffffffffffffff;
        goto LAB_03f97b74;
      }
    }
    else {
      uVar5 = uVar2;
      if (uVar7 != 0xffffffffffffffff) {
        uVar5 = uVar7;
      }
    }
    lVar6 = lVar6 + 1;
    uVar2 = lVar6 + uVar2;
    uVar7 = uVar5;
  } while( true );
}

