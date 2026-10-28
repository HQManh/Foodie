// rea decompile_all
// name: FUN_0400c6d4
// address: 0x400c6d4
// body: available
// range: 0x400c6d4-0x400ca5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

int FUN_0400c6d4(long *param_1,long *param_2,uint *param_3,long *param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  
  plVar8 = (long *)*param_1;
  if (plVar8 == (long *)0x0) {
LAB_0400c758:
    bVar2 = true;
    bVar1 = true;
    if (param_2 != (long *)0x0) goto LAB_0400c760;
LAB_0400c734:
    if (!bVar1) {
      plVar8 = (long *)0x0;
      goto LAB_0400c784;
    }
  }
  else {
    if ((int *)plVar8[3] == (int *)plVar8[4]) {
      iVar4 = (**(code **)(*plVar8 + 0x48))();
    }
    else {
      iVar4 = *(int *)plVar8[3];
    }
    if (iVar4 == -1) {
      *param_1 = 0;
      goto LAB_0400c758;
    }
    bVar1 = *param_1 == 0;
    bVar2 = bVar1;
    if (param_2 == (long *)0x0) goto LAB_0400c734;
LAB_0400c760:
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar1 = iVar4 == -1;
      plVar8 = (long *)0x0;
      if (!bVar1) {
        plVar8 = param_2;
      }
    }
    else {
      bVar1 = *(int *)param_2[3] == -1;
      plVar8 = (long *)0x0;
      if (!bVar1) {
        plVar8 = param_2;
      }
    }
    if (bVar2 != bVar1) {
LAB_0400c784:
      plVar9 = (long *)*param_1;
      if ((undefined4 *)plVar9[3] == (undefined4 *)plVar9[4]) {
        uVar5 = (**(code **)(*plVar9 + 0x48))();
      }
      else {
        uVar5 = *(undefined4 *)plVar9[3];
      }
      uVar10 = (**(code **)(*param_4 + 0x18))(param_4,0x40,uVar5);
      if ((uVar10 & 1) == 0) {
        iVar4 = 0;
        uVar3 = 4;
        goto LAB_0400ca34;
      }
      uVar3 = (**(code **)(*param_4 + 0x68))(param_4,uVar5,0);
      plVar9 = (long *)*param_1;
      uVar3 = uVar3 & 0xff;
      if (plVar9[3] == plVar9[4]) {
        (**(code **)(*plVar9 + 0x50))();
      }
      else {
        plVar9[3] = plVar9[3] + 4;
      }
      while (plVar9 = (long *)*param_1, plVar9 != (long *)0x0) {
        if ((int *)plVar9[3] == (int *)plVar9[4]) {
          iVar4 = (**(code **)(*plVar9 + 0x48))();
        }
        else {
          iVar4 = *(int *)plVar9[3];
        }
        if (iVar4 == -1) {
          *param_1 = 0;
          break;
        }
        bVar2 = *param_1 == 0;
        bVar1 = bVar2;
        if (plVar8 != (long *)0x0) goto LAB_0400c8d8;
LAB_0400c8a0:
        plVar11 = (long *)*param_1;
        plVar9 = plVar8;
        if (bVar1) goto LAB_0400c998;
LAB_0400c918:
        plVar8 = plVar9;
        if (param_5 < 2) goto LAB_0400c998;
        if ((undefined4 *)plVar11[3] == (undefined4 *)plVar11[4]) {
          uVar5 = (**(code **)(*plVar11 + 0x48))();
        }
        else {
          uVar5 = *(undefined4 *)plVar11[3];
        }
        uVar10 = (**(code **)(*param_4 + 0x18))(param_4,0x40,uVar5);
        if ((uVar10 & 1) == 0) {
          return uVar3 - 0x30;
        }
        uVar6 = (**(code **)(*param_4 + 0x68))(param_4,uVar5,0);
        plVar9 = (long *)*param_1;
        if (plVar9[3] == plVar9[4]) {
          (**(code **)(*plVar9 + 0x50))(plVar9);
        }
        else {
          plVar9[3] = plVar9[3] + 4;
        }
        param_5 = param_5 + -1;
        uVar3 = (uVar3 - 0x30) * 10 + (uVar6 & 0xff);
      }
      bVar2 = true;
      bVar1 = true;
      if (plVar8 == (long *)0x0) goto LAB_0400c8a0;
LAB_0400c8d8:
      if ((int *)plVar8[3] == (int *)plVar8[4]) {
        iVar4 = (**(code **)(*plVar8 + 0x48))(plVar8);
      }
      else {
        iVar4 = *(int *)plVar8[3];
      }
      plVar9 = (long *)0x0;
      if (iVar4 != -1) {
        plVar9 = plVar8;
      }
      plVar11 = (long *)*param_1;
      plVar8 = plVar9;
      if (bVar2 != (iVar4 == -1)) goto LAB_0400c918;
LAB_0400c998:
      iVar4 = uVar3 - 0x30;
      if (plVar11 == (long *)0x0) {
LAB_0400c9e4:
        bVar1 = true;
        if (plVar8 != (long *)0x0) goto LAB_0400c9ec;
LAB_0400c9c4:
        if (!bVar1) {
          return iVar4;
        }
      }
      else {
        if ((int *)plVar11[3] == (int *)plVar11[4]) {
          iVar7 = (**(code **)(*plVar11 + 0x48))();
        }
        else {
          iVar7 = *(int *)plVar11[3];
        }
        if (iVar7 == -1) {
          *param_1 = 0;
          goto LAB_0400c9e4;
        }
        bVar1 = *param_1 == 0;
        if (plVar8 == (long *)0x0) goto LAB_0400c9c4;
LAB_0400c9ec:
        if ((int *)plVar8[3] == (int *)plVar8[4]) {
          iVar7 = (**(code **)(*plVar8 + 0x48))(plVar8);
        }
        else {
          iVar7 = *(int *)plVar8[3];
        }
        if (bVar1 != (iVar7 == -1)) {
          return iVar4;
        }
      }
      uVar3 = 2;
      goto LAB_0400ca34;
    }
  }
  iVar4 = 0;
  uVar3 = 6;
LAB_0400ca34:
  *param_3 = *param_3 | uVar3;
  return iVar4;
}

