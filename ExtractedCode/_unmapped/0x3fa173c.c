// rea decompile_all
// name: FUN_03fa173c
// address: 0x3fa173c
// body: available
// range: 0x3fa173c-0x3fa184f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_03fa173c(long param_1,int *param_2)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  lVar5 = *(long *)(param_1 + 0x60);
  lVar8 = 0;
  uVar6 = *(ulong *)(param_2 + 2) >> 3;
  uVar4 = 0xffffffffffffffff;
  do {
    uVar6 = uVar6 & lVar5 - 1U;
    uVar7 = uVar6 % 0x30;
    if ((*(byte *)(*(long *)(param_1 + 0x48) + (uVar6 / 0x30) * 0x10 + (uVar7 >> 3) + 10) >>
         (uVar7 & 7) & 1) == 0) {
      uVar7 = uVar6;
      if (uVar4 != 0xffffffffffffffff) {
        uVar7 = uVar4;
      }
      uVar6 = 0xffffffffffffffff;
LAB_03fa1830:
      auVar11._8_8_ = uVar7;
      auVar11._0_8_ = uVar6;
      return auVar11;
    }
    uVar3 = FUN_03fa1850(param_1,uVar6);
    uVar9 = uVar4;
    if ((uVar3 & 1) == 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x48) + (uVar6 / 0x30) * 0x10);
      lVar10 = *plVar1;
      uVar4 = FUN_03f5fe4c((long)plVar1 + 10,uVar7);
      piVar2 = (int *)(lVar10 + (uVar4 & 0xffff) * 0x20);
      if ((*param_2 == *piVar2) &&
         ((*param_2 != 0 ||
          (*(long *)(param_2 + 2) == *(long *)(piVar2 + 2) &&
           *(long *)(param_2 + 4) == *(long *)(piVar2 + 4))))) {
        uVar7 = 0xffffffffffffffff;
        goto LAB_03fa1830;
      }
    }
    else {
      uVar9 = uVar6;
      if (uVar4 != 0xffffffffffffffff) {
        uVar9 = uVar4;
      }
    }
    lVar8 = lVar8 + 1;
    uVar6 = lVar8 + uVar6;
    uVar4 = uVar9;
  } while( true );
}

