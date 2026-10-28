// rea decompile_all
// name: FUN_0400a820
// address: 0x400a820
// body: available
// range: 0x400a820-0x400ab83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0400a820(long *param_1,long *param_2,uint *param_3,long *param_4,int param_5)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  plVar6 = (long *)*param_1;
  if (plVar6 == (long *)0x0) {
LAB_0400a8a4:
    bVar2 = true;
    if (param_2 != (long *)0x0) goto LAB_0400a8ac;
LAB_0400a894:
    if (bVar2 != false) {
LAB_0400a8fc:
      iVar4 = 0;
      uVar3 = 6;
      goto LAB_0400a934;
    }
    plVar6 = (long *)0x0;
  }
  else {
    if (plVar6[3] == plVar6[4]) {
      iVar4 = (**(code **)(*plVar6 + 0x48))();
      if (iVar4 == -1) {
        *param_1 = 0;
        goto LAB_0400a8a4;
      }
      bVar2 = *param_1 == 0;
    }
    else {
      bVar2 = false;
    }
    if (param_2 == (long *)0x0) goto LAB_0400a894;
LAB_0400a8ac:
    if (param_2[3] == param_2[4]) {
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar6 = (long *)0x0;
      if (iVar4 != -1) {
        plVar6 = param_2;
      }
      if (bVar2 != (iVar4 == -1)) goto LAB_0400a8bc;
      goto LAB_0400a8fc;
    }
    plVar6 = param_2;
    if (bVar2 == false) goto LAB_0400a8fc;
  }
LAB_0400a8bc:
  plVar7 = (long *)*param_1;
  if ((byte *)plVar7[3] == (byte *)plVar7[4]) {
    uVar9 = (**(code **)(*plVar7 + 0x48))();
    uVar10 = uVar9 & 0xffffffff;
    if (((uint)uVar9 >> 7 & 1) == 0) goto LAB_0400a91c;
  }
  else {
    bVar1 = *(byte *)plVar7[3];
    uVar10 = (ulong)bVar1;
    if (-1 < (char)bVar1) {
LAB_0400a91c:
      if (((uint)*(undefined8 *)(param_4[2] + (uVar10 & 0xff) * 8) >> 6 & 1) != 0) {
        uVar3 = (**(code **)(*param_4 + 0x48))(param_4,uVar10,0);
        plVar7 = (long *)*param_1;
        uVar3 = uVar3 & 0xff;
        if (plVar7[3] == plVar7[4]) {
          (**(code **)(*plVar7 + 0x50))();
        }
        else {
          plVar7[3] = plVar7[3] + 1;
        }
        while (plVar8 = (long *)*param_1, plVar7 = plVar6, plVar8 != (long *)0x0) {
          if (plVar8[3] == plVar8[4]) {
            iVar4 = (**(code **)(*plVar8 + 0x48))();
            if (iVar4 == -1) {
              *param_1 = 0;
              break;
            }
            bVar2 = *param_1 == 0;
          }
          else {
            bVar2 = false;
          }
          if (plVar6 != (long *)0x0) goto LAB_0400aa30;
LAB_0400aa0c:
          plVar8 = (long *)*param_1;
          if (bVar2 == true) goto LAB_0400aaf8;
LAB_0400aa80:
          iVar4 = uVar3 - 0x30;
          plVar6 = plVar7;
          if (param_5 < 2) goto LAB_0400aaf8;
          if ((byte *)plVar8[3] == (byte *)plVar8[4]) {
            uVar9 = (**(code **)(*plVar8 + 0x48))();
            uVar10 = uVar9 & 0xffffffff;
            if (((uint)uVar9 >> 7 & 1) != 0) {
              return iVar4;
            }
          }
          else {
            bVar1 = *(byte *)plVar8[3];
            uVar10 = (ulong)bVar1;
            if ((char)bVar1 < '\0') {
              return iVar4;
            }
          }
          if (((uint)*(undefined8 *)(param_4[2] + (uVar10 & 0xff) * 8) >> 6 & 1) == 0) {
            return iVar4;
          }
          uVar3 = (**(code **)(*param_4 + 0x48))(param_4,uVar10,0);
          plVar7 = (long *)*param_1;
          if (plVar7[3] == plVar7[4]) {
            (**(code **)(*plVar7 + 0x50))(plVar7);
          }
          else {
            plVar7[3] = plVar7[3] + 1;
          }
          param_5 = param_5 + -1;
          uVar3 = iVar4 * 10 + (uVar3 & 0xff);
        }
        bVar2 = true;
        if (plVar6 == (long *)0x0) goto LAB_0400aa0c;
LAB_0400aa30:
        if (plVar6[3] != plVar6[4]) {
          plVar8 = (long *)*param_1;
          if (bVar2 == false) goto LAB_0400aaf8;
          goto LAB_0400aa80;
        }
        iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
        plVar7 = (long *)0x0;
        if (iVar4 != -1) {
          plVar7 = plVar6;
        }
        plVar8 = (long *)*param_1;
        plVar6 = plVar7;
        if (bVar2 != (iVar4 == -1)) goto LAB_0400aa80;
LAB_0400aaf8:
        iVar4 = uVar3 - 0x30;
        if (plVar8 == (long *)0x0) {
LAB_0400ab38:
          bVar2 = true;
        }
        else if (plVar8[3] == plVar8[4]) {
          iVar5 = (**(code **)(*plVar8 + 0x48))();
          if (iVar5 == -1) {
            *param_1 = 0;
            goto LAB_0400ab38;
          }
          bVar2 = *param_1 == 0;
        }
        else {
          bVar2 = false;
        }
        if (plVar6 == (long *)0x0) {
          if (bVar2 == false) {
            return iVar4;
          }
        }
        else if (plVar6[3] == plVar6[4]) {
          iVar5 = (**(code **)(*plVar6 + 0x48))(plVar6);
          if (bVar2 != (iVar5 == -1)) {
            return iVar4;
          }
        }
        else if (bVar2 != false) {
          return iVar4;
        }
        uVar3 = 2;
        goto LAB_0400a934;
      }
    }
  }
  iVar4 = 0;
  uVar3 = 4;
LAB_0400a934:
  *param_3 = *param_3 | uVar3;
  return iVar4;
}

