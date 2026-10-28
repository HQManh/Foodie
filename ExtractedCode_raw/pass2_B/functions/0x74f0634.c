// rea decompile_all
// name: thunk_FUN_03f65bbc
// address: 0x74f0634
// body: available
// range: 0x74f0634-0x74f0637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_03f65bbc(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  byte abStack_60 [16];
  ulong uStack_50;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar8 + 0x53) & 1) == 0) {
    FUN_03f65d38(abStack_60,lVar8);
    uVar9 = (ulong)abStack_60 | 1;
    if ((abStack_60[0] & 1) != 0) {
      uVar9 = uStack_50;
    }
    uVar4 = FUN_03fa6f90(uVar9);
    if (*(long *)(lVar1 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
      FUN_03fa5c38(uVar4,0);
    }
  }
  else {
    uVar2 = FUN_03f98240(param_2);
    uVar9 = (ulong)uVar2;
    pbVar10 = abStack_60 + -((ulong)uVar2 * 8 + 0xf & 0xffffffff0);
    if (uVar2 != 0) {
      plVar5 = (long *)(param_2 + 0x20);
      uVar6 = uVar9;
      pbVar7 = pbVar10;
      do {
        uVar6 = uVar6 - 1;
        *(undefined8 *)pbVar7 = *(undefined8 *)(*plVar5 + 0x10);
        plVar5 = plVar5 + 1;
        pbVar7 = pbVar7 + 8;
      } while (uVar6 != 0);
    }
    lVar3 = FUN_03fc29e4(lVar8,pbVar10,uVar9);
    if (lVar3 == 0) {
      FUN_03f65e2c(abStack_60,lVar8,pbVar10,uVar9);
      uVar9 = (ulong)abStack_60 | 1;
      if ((abStack_60[0] & 1) != 0) {
        uVar9 = uStack_50;
      }
      uVar4 = FUN_03fa6ecc(uVar9);
      if (*(long *)(lVar1 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
        FUN_03fa5c38(uVar4,0);
      }
    }
    else {
      FUN_03f9adc4(lVar3,0);
      if (*(long *)(lVar1 + 0x28) == lStack_48) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

