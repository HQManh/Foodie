// rea decompile_all
// name: FUN_03f7c29c
// address: 0x3f7c29c
// body: available
// range: 0x3f7c29c-0x3f7c3bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_03f7c29c(long param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  lVar6 = *(long *)(param_1 + 0x58);
  uVar3 = FUN_03f7f990(*(long *)(param_2 + 2) + 0x20);
  lVar9 = 0;
  uVar5 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 & lVar6 - 1U;
    uVar8 = uVar3 % 0x30;
    if ((*(byte *)(*(long *)(param_1 + 0x40) + (uVar3 / 0x30) * 0x10 + (uVar8 >> 3) + 10) >>
         (uVar8 & 7) & 1) == 0) {
      uVar8 = uVar3;
      if (uVar5 != 0xffffffffffffffff) {
        uVar8 = uVar5;
      }
      uVar3 = 0xffffffffffffffff;
LAB_03f7c3a0:
      auVar12._8_8_ = uVar8;
      auVar12._0_8_ = uVar3;
      return auVar12;
    }
    uVar4 = FUN_03f7c3c0(param_1,uVar3);
    uVar10 = uVar5;
    if ((uVar4 & 1) == 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x40) + (uVar3 / 0x30) * 0x10);
      lVar11 = *plVar1;
      uVar5 = FUN_03f5fe4c((long)plVar1 + 10,uVar8);
      piVar7 = (int *)(lVar11 + (uVar5 & 0xffff) * 0x18);
      if ((*param_2 == *piVar7) &&
         ((*param_2 != 0 ||
          (iVar2 = FUN_03f7b93c(*(long *)(param_2 + 2) + 0x20,*(long *)(piVar7 + 2) + 0x20),
          iVar2 == 0)))) {
        uVar8 = 0xffffffffffffffff;
        goto LAB_03f7c3a0;
      }
    }
    else {
      uVar10 = uVar3;
      if (uVar5 != 0xffffffffffffffff) {
        uVar10 = uVar5;
      }
    }
    lVar9 = lVar9 + 1;
    uVar3 = lVar9 + uVar3;
    uVar5 = uVar10;
  } while( true );
}

