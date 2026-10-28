// rea decompile_all
// name: thunk_FUN_03f6f124
// address: 0x75f5570
// body: available
// range: 0x75f5570-0x75f5573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_03f6f124(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte abStack_60 [16];
  ulong uStack_50;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = FUN_03fbe574(uVar9,1);
  uVar2 = FUN_03f98240(param_2);
  uVar10 = (ulong)uVar2;
  pbVar11 = abStack_60 + -((ulong)uVar2 * 8 + 0xf & 0xffffffff0);
  if (uVar2 != 0) {
    plVar6 = (long *)(param_2 + 0x20);
    uVar7 = uVar10;
    pbVar8 = pbVar11;
    do {
      uVar7 = uVar7 - 1;
      *(undefined8 *)pbVar8 = *(undefined8 *)(*plVar6 + 0x10);
      plVar6 = plVar6 + 1;
      pbVar8 = pbVar8 + 8;
    } while (uVar7 != 0);
  }
  uVar4 = FUN_03fc0f6c(pbVar11,uVar10);
  uVar3 = FUN_03f771b0(uVar3,uVar4);
  lVar5 = FUN_03fb49f4(uVar3,1);
  if (lVar5 == 0) {
    FUN_03f6f274(abStack_60,uVar9,pbVar11,uVar10);
    uVar10 = (ulong)abStack_60 | 1;
    if ((abStack_60[0] & 1) != 0) {
      uVar10 = uStack_50;
    }
    uVar3 = FUN_03fa6ecc(uVar10);
    if (*(long *)(lVar1 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
      FUN_03fa5c38(uVar3,0);
    }
  }
  else {
    FUN_03f9ab74(lVar5 + 0x20);
    if (*(long *)(lVar1 + 0x28) == lStack_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

