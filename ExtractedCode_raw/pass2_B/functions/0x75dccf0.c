// rea decompile_all
// name: System.Array$$CreateInstanceImpl
// address: 0x75dccf0
// body: available
// range: 0x75dccf0-0x75dccf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array__CreateInstanceImpl(long param_1,long param_2,long param_3)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  byte abStack_80 [16];
  ulong uStack_70;
  long lStack_68;
  
  pbVar4 = abStack_80;
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  lVar11 = 0;
  if (param_2 != 0) {
    lVar11 = param_2 + 0x20;
  }
  piVar1 = (int *)0x0;
  if (param_3 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_03f98240(param_3);
    piVar1 = (int *)(param_3 + 0x20);
  }
  bVar5 = true;
  uVar8 = FUN_03fbe574(*(undefined8 *)(param_1 + 0x10),1);
  uVar7 = FUN_03f98240(param_2);
  if (iVar6 < 3) {
    if (iVar6 == 1) {
      bVar5 = *piVar1 != 0;
    }
    else {
      bVar5 = false;
    }
  }
  lVar9 = FUN_03fbe808(uVar8,uVar7,bVar5);
  if (lVar9 == 0) {
    FUN_03f6b084(abStack_80,*(undefined8 *)(param_1 + 0x10));
    uVar2 = (ulong)abStack_80 | 1;
    if ((abStack_80[0] & 1) != 0) {
      uVar2 = uStack_70;
    }
    uVar8 = FUN_03fa6f90(uVar2);
    if (*(long *)(lVar3 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03fa5c38(uVar8,0);
    }
    goto LAB_03f6b080;
  }
  if (param_2 == 0) {
    pbVar10 = (byte *)0x0;
    if (param_3 == 0) goto LAB_03f6afdc;
LAB_03f6af98:
    lVar12 = *(long *)(param_3 + 0x18);
    lVar11 = (long)pbVar4 - (lVar12 * 8 + 0xfU & 0xfffffffffffffff0);
    if (lVar12 != 0) {
      lVar13 = 0;
      do {
        *(long *)(lVar11 + lVar13 * 8) = (long)piVar1[lVar13];
        lVar13 = lVar13 + 1;
      } while (lVar12 != lVar13);
    }
  }
  else {
    lVar12 = *(long *)(param_2 + 0x18);
    pbVar4 = abStack_80 + -(lVar12 * 8 + 0xfU & 0xfffffffffffffff0);
    if (lVar12 != 0) {
      lVar13 = 0;
      do {
        *(long *)(pbVar4 + lVar13 * 8) = (long)*(int *)(lVar11 + lVar13 * 4);
        lVar13 = lVar13 + 1;
      } while (lVar12 != lVar13);
    }
    pbVar10 = pbVar4;
    if (param_3 != 0) goto LAB_03f6af98;
LAB_03f6afdc:
    lVar11 = 0;
  }
  FUN_03f98248(lVar9,pbVar10,lVar11);
  if (*(long *)(lVar3 + 0x28) == lStack_68) {
    return;
  }
LAB_03f6b080:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

