// rea decompile_all
// name: thunk_FUN_03f6c568
// address: 0x7603dfc
// body: available
// range: 0x7603dfc-0x7603dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long thunk_FUN_03f6c568(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  int iStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [16];
  long alStack_a0 [4];
  long *plStack_80;
  long lStack_68;
  
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  FUN_03f9c710(auStack_f0);
  lVar2 = FUN_03f984c8(DAT_09535598,iStack_d8);
  if (iStack_d8 != 0) {
    lStack_110 = 0;
    FUN_03f763f0(auStack_b0,auStack_f0);
    uVar8 = 0;
    while (uVar3 = FUN_03f764d4(auStack_f0,&lStack_108,auStack_b0,&lStack_110), (uVar3 & 1) != 0) {
      uVar7 = *(undefined8 *)(*(long *)*param_1 + 0x10);
      if (DAT_09534500 == 0) {
        DAT_09534500 = FUN_03fbef44(DAT_09535598,".ctor",4);
      }
      uVar4 = thunk_FUN_03f9944c(DAT_09535598);
      uStack_d0 = FUN_03f9adc4(lStack_108,*(undefined8 *)(lStack_108 + 0x20));
      uStack_c8 = FUN_03f9a678(uVar7);
      puStack_c0 = auStack_100;
      puStack_b8 = auStack_f8;
      FUN_03fbcba4(DAT_09534500,uVar4,&uStack_d0,0);
      *(undefined8 *)(lVar2 + 0x20 + (ulong)uVar8 * 8) = uVar4;
      FUN_03f5d7b8();
      uVar8 = uVar8 + 1;
    }
    if (lStack_110 != 0) {
      if (*(long *)(lVar1 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03fa5c38(lStack_110,0);
      }
      goto LAB_03f6c770;
    }
    plVar5 = alStack_a0;
    if (plStack_80 == plVar5) {
      lVar6 = 4;
    }
    else {
      if (plStack_80 == (long *)0x0) goto LAB_03f6c6c0;
      lVar6 = 5;
      plVar5 = plStack_80;
    }
    (**(code **)(*plVar5 + lVar6 * 8))();
  }
LAB_03f6c6c0:
  if (*(long *)(lVar1 + 0x28) == lStack_68) {
    return lVar2;
  }
LAB_03f6c770:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

