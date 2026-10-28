// rea decompile_all
// name: ChocDino.UIFX.DistanceMap$$ProcessJumpFlood
// address: 0x43cb8ac
// body: available
// range: 0x43cb8ac-0x43cbbbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43cbbb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * ChocDino_UIFX_DistanceMap__ProcessJumpFlood
                 (long param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  long *plVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  double dVar14;
  
  if ((DAT_09517bef & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184e48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091901a0);
    DAT_09517bef = 1;
  }
  if (param_2 != (long *)0x0) {
    iVar13 = *(int *)(param_1 + 0x18);
    iVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    iVar8 = *(int *)(param_1 + 0x18);
    if (iVar4 <= iVar13) {
      iVar13 = iVar4;
    }
    if (iVar13 < 0) {
      iVar13 = iVar13 + 1;
    }
    iVar5 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar5 <= iVar8) {
      iVar8 = iVar5;
    }
    if (iVar8 < 0) {
      iVar8 = iVar8 + 1;
    }
    iVar5 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    iVar6 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    if (iVar5 <= iVar6) {
      iVar5 = iVar6;
    }
    if (iVar5 <= iVar4) {
      iVar4 = iVar5;
    }
    uVar3 = iVar4 - 1U | (int)(iVar4 - 1U) >> 0x10;
    uVar3 = uVar3 | (int)uVar3 >> 8;
    uVar3 = uVar3 | (int)uVar3 >> 4;
    uVar3 = uVar3 | (int)uVar3 >> 2;
    if (DAT_095163d0 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_095163d0 = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar14 = (double)System_Math__Log((double)(int)((uVar3 | (int)uVar3 >> 1) + 1),
                                      0x4000000000000000,0);
    if (DAT_09516626 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09516626 = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((float)(int)dVar14 != INFINITY && 0 < (int)dVar14) {
      iVar4 = 0;
      plVar9 = param_2;
      iVar13 = iVar13 >> 1;
      iVar8 = iVar8 >> 1;
      uVar10 = 2;
      do {
        lVar11 = *(long *)(param_1 + 0x20);
        if (*(int *)(DAT_091901a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar11 == 0) goto LAB_043cbbb8;
        UnityEngine_Material__SetColorImpl
                  ((float)iVar13,(float)iVar8,0,0,lVar11,**(undefined4 **)(DAT_091901a0 + 0xb8),0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Object__op_Equality(plVar9,param_3,0);
        uVar12 = *(undefined8 *)(param_1 + 0x20);
        param_2 = param_4;
        if ((uVar7 & 1) == 0) {
          param_2 = param_3;
        }
        if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Graphics__Blit(plVar9,param_2,uVar12,uVar10,0);
        if (param_2 == (long *)0x0) goto LAB_043cbbb8;
        UnityEngine_Texture__IncrementUpdateCount(param_2,0);
        iVar5 = 0;
        if (iVar13 != 1) {
          iVar5 = iVar13;
        }
        iVar6 = 0;
        if (iVar8 != 1) {
          iVar6 = iVar8;
        }
        iVar1 = iVar5;
        if (iVar5 < 0) {
          iVar1 = iVar5 + 1;
        }
        if (1 < iVar5) {
          iVar5 = iVar1 >> 1;
        }
        iVar1 = iVar6;
        if (iVar6 < 0) {
          iVar1 = iVar6 + 1;
        }
        if (1 < iVar6) {
          iVar6 = iVar1 >> 1;
        }
        if (iVar5 == 0 && iVar6 == 0) {
          return param_2;
        }
        iVar4 = iVar4 + 1;
        uVar2 = 3;
        if (iVar13 != 1 && iVar8 != 1) {
          uVar2 = uVar10;
        }
        plVar9 = param_2;
        iVar13 = iVar5;
        iVar8 = iVar6;
        uVar10 = uVar2;
      } while (iVar4 < (int)dVar14);
    }
    return param_2;
  }
LAB_043cbbb8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

