// rea decompile_all
// name: ChocDino.UIFX.FrameFilter$$GetFilterAdjustSize
// address: 0x43dad84
// body: available
// range: 0x43dad84-0x43db53b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43db538 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FrameFilter__GetFilterAdjustSize
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               ulong *param_6,ulong *param_7)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_09517cd5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184618);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517cd5 = 1;
  }
  lVar6 = *(long *)(param_5 + 0x60);
  if (lVar6 == 0) goto LAB_043db538;
  fVar13 = *(float *)(lVar6 + 0x34);
  fVar12 = *(float *)(lVar6 + 0x38);
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (fVar13 <= 0.0) {
    return;
  }
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (fVar12 <= 0.0) {
    return;
  }
  iVar7 = *(int *)(param_5 + 0x1c4);
  fVar11 = *(float *)(param_5 + 0xb8);
  if (iVar7 == 2) {
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar10 = fVar11;
    if (*(int *)(param_5 + 0x24) != 0) {
      fVar10 = 1.0;
    }
    fVar12 = fVar12 * 0.5 * fVar10;
    fVar10 = fVar13 * 0.5 * fVar10;
    fVar9 = SQRT(fVar10 * fVar10 + fVar12 * fVar12);
    fVar13 = fVar11 * *(float *)(param_5 + 0x218);
    if (DAT_095163ce == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_095163ce = '\x01';
    }
    if ((*(int *)(DAT_09187e80 + 0xe4) == 0) && (FUN_03f5c424(), DAT_095163ce == '\0')) {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_095163ce = '\x01';
    }
    fVar10 = (float)(int)(fVar13 + (fVar9 - fVar10));
    iVar7 = (int)fVar10;
    fVar13 = fVar13 + (fVar9 - fVar12);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = -0x8000000000000000;
    if ((float)(int)fVar13 != INFINITY) {
      lVar6 = (ulong)(uint)(int)fVar13 << 0x20;
    }
    bVar4 = false;
    if (!NAN(fVar10)) {
      bVar4 = fVar10 == INFINITY;
    }
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 == 0) {
        fVar12 = *(float *)(param_5 + 0x24c);
        uVar8 = *(undefined8 *)(param_5 + 0x210);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar5 & 1) == 0) {
          bVar4 = false;
        }
        else {
          if (*(long *)(param_5 + 0x210) == 0) goto LAB_043db538;
          fVar13 = (float)UnityEngine_Sprite__get_border(*(long *)(param_5 + 0x210),0);
          bVar4 = 0.0 < param_4 * param_4 + param_3 * param_3 + fVar13 * fVar13 + param_2 * param_2;
        }
        if (*(int *)(DAT_09184618 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar12 = fVar11 * fVar12;
        uVar8 = ChocDino_UIFX_Filters__GetMonitorResolution();
        if (*(char *)(param_5 + 0x22c) == '\0') {
          if (bVar4) {
            if (*(long *)(param_5 + 0x210) == 0) goto LAB_043db538;
            fVar13 = (float)UnityEngine_Sprite__get_border(*(long *)(param_5 + 0x210),0);
          }
          else {
            fVar13 = -4096.0;
          }
          iVar7 = (int)*param_6;
          fVar10 = *(float *)(param_5 + 0x21c);
          if (*(float *)(param_5 + 0x21c) <= fVar13) {
            fVar10 = fVar13;
          }
          fVar10 = fVar11 * fVar10;
        }
        else {
          if (*(long *)(param_5 + 0x60) == 0) goto LAB_043db538;
          iVar7 = (int)*param_6;
          fVar13 = *(float *)(*(long *)(param_5 + 0x60) + 0x2c);
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar13 = fVar12 + fVar13;
          fVar10 = 0.0;
          if (0.0 <= fVar13) {
            fVar10 = fVar13;
          }
          if (DAT_095163ce == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095163ce = '\x01';
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar10 = (float)(int)fVar10;
        }
        iVar2 = -0x80000000;
        if (fVar10 != INFINITY) {
          iVar2 = (int)fVar10;
        }
        cVar3 = *(char *)(param_5 + 0x22d);
        *(int *)param_6 = iVar2 + iVar7;
        if (cVar3 == '\0') {
          if (bVar4) {
            if (*(long *)(param_5 + 0x210) == 0) goto LAB_043db538;
            UnityEngine_Sprite__get_border(*(long *)(param_5 + 0x210),0);
          }
          else {
            param_3 = -4096.0;
          }
          iVar7 = (int)*param_7;
          fVar13 = *(float *)(param_5 + 0x220);
          if (*(float *)(param_5 + 0x220) <= param_3) {
            fVar13 = param_3;
          }
          fVar13 = fVar11 * fVar13;
        }
        else {
          lVar6 = *(long *)(param_5 + 0x60);
          if (lVar6 == 0) goto LAB_043db538;
          iVar7 = (int)*param_7;
          fVar13 = *(float *)(lVar6 + 0x2c);
          fVar10 = *(float *)(lVar6 + 0x34);
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar10 = fVar12 + ((float)(int)uVar8 - (fVar13 + fVar10));
          fVar13 = 0.0;
          if (0.0 <= fVar10) {
            fVar13 = fVar10;
          }
          if (DAT_095163ce == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095163ce = '\x01';
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar13 = (float)(int)fVar13;
        }
        iVar2 = -0x80000000;
        if (fVar13 != INFINITY) {
          iVar2 = (int)fVar13;
        }
        cVar3 = *(char *)(param_5 + 0x22e);
        *(int *)param_7 = iVar2 + iVar7;
        if (cVar3 == '\0') {
          if (bVar4) {
            if (*(long *)(param_5 + 0x210) == 0) goto LAB_043db538;
            UnityEngine_Sprite__get_border(*(long *)(param_5 + 0x210),0);
          }
          else {
            param_4 = -4096.0;
          }
          iVar7 = *(int *)((long)param_7 + 4);
          fVar13 = *(float *)(param_5 + 0x224);
          if (*(float *)(param_5 + 0x224) <= param_4) {
            fVar13 = param_4;
          }
          fVar13 = fVar11 * fVar13;
        }
        else {
          lVar6 = *(long *)(param_5 + 0x60);
          if (lVar6 == 0) goto LAB_043db538;
          iVar7 = *(int *)((long)param_7 + 4);
          fVar13 = *(float *)(lVar6 + 0x30);
          fVar10 = *(float *)(lVar6 + 0x38);
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar10 = fVar12 + ((float)(int)((ulong)uVar8 >> 0x20) - (fVar13 + fVar10));
          fVar13 = 0.0;
          if (0.0 <= fVar10) {
            fVar13 = fVar10;
          }
          if (DAT_095163ce == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095163ce = '\x01';
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar13 = (float)(int)fVar13;
        }
        fVar10 = INFINITY;
        iVar2 = -0x80000000;
        if (fVar13 != INFINITY) {
          iVar2 = (int)fVar13;
        }
        cVar3 = *(char *)(param_5 + 0x22f);
        *(int *)((long)param_7 + 4) = iVar2 + iVar7;
        if (cVar3 == '\0') {
          if (bVar4) {
            if (*(long *)(param_5 + 0x210) == 0) goto LAB_043db538;
            UnityEngine_Sprite__get_border(*(long *)(param_5 + 0x210),0);
          }
          else {
            fVar10 = -4096.0;
          }
          fVar12 = *(float *)(param_5 + 0x228);
          if (*(float *)(param_5 + 0x228) <= fVar10) {
            fVar12 = fVar10;
          }
          iVar7 = -0x80000000;
          if (fVar11 * fVar12 != INFINITY) {
            iVar7 = (int)(fVar11 * fVar12);
          }
          iVar7 = iVar7 + *(int *)((long)param_6 + 4);
        }
        else {
          if (*(long *)(param_5 + 0x60) == 0) {
LAB_043db538:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar2 = *(int *)((long)param_6 + 4);
          fVar13 = *(float *)(*(long *)(param_5 + 0x60) + 0x30);
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar12 = fVar12 + fVar13;
          fVar13 = 0.0;
          if (0.0 <= fVar12) {
            fVar13 = fVar12;
          }
          if (DAT_095163ce == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095163ce = '\x01';
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar7 = -0x80000000;
          if ((float)(int)fVar13 != INFINITY) {
            iVar7 = (int)fVar13;
          }
          iVar7 = iVar7 + iVar2;
        }
        *(int *)((long)param_6 + 4) = iVar7;
      }
      goto LAB_043db468;
    }
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar10 = fVar11;
    if (*(int *)(param_5 + 0x24) != 0) {
      fVar10 = 1.0;
    }
    fVar9 = fVar12 * 0.5 * fVar10;
    fVar10 = fVar13 * 0.5 * fVar10;
    fVar12 = fVar10;
    if (fVar10 <= fVar9) {
      fVar12 = fVar9;
    }
    fVar10 = fVar12 - fVar10;
    fVar12 = fVar12 - fVar9;
    fVar13 = fVar10;
    if (fVar12 <= fVar10) {
      fVar13 = fVar12;
    }
    fVar9 = -fVar13;
    if (-fVar13 <= *(float *)(param_5 + 0x218)) {
      fVar9 = *(float *)(param_5 + 0x218);
    }
    if (DAT_095163ce == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_095163ce = '\x01';
    }
    if ((*(int *)(DAT_09187e80 + 0xe4) == 0) && (FUN_03f5c424(), DAT_095163ce == '\0')) {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_095163ce = '\x01';
    }
    fVar13 = (float)(int)(fVar10 + fVar11 * fVar9);
    iVar7 = (int)fVar13;
    fVar12 = fVar12 + fVar11 * fVar9;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = -0x8000000000000000;
    if ((float)(int)fVar12 != INFINITY) {
      lVar6 = (ulong)(uint)(int)fVar12 << 0x20;
    }
    bVar4 = fVar13 == INFINITY;
  }
  iVar2 = -0x80000000;
  if (!bVar4) {
    iVar2 = iVar7;
  }
  *param_6 = *param_6 + lVar6 & 0xffffffff00000000 | (ulong)(uint)((int)*param_6 + iVar2);
  *param_7 = *param_7 + lVar6 & 0xffffffff00000000 | (ulong)(uint)((int)*param_7 + iVar2);
LAB_043db468:
  fVar12 = *(float *)(param_5 + 0x294);
  if (((0.0 < fVar12) && (0.0 < *(float *)(param_5 + 0x260))) && (*(int *)(param_5 + 0x264) != 0)) {
    if (DAT_095163ce == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_095163ce = '\x01';
    }
    fVar11 = fVar11 * fVar12;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = 0x80000000;
    if ((float)(int)fVar11 != INFINITY) {
      uVar1 = (int)fVar11;
    }
    *param_6 = *param_6 + ((ulong)uVar1 << 0x20) & 0xffffffff00000000 |
               (ulong)((int)*param_6 + uVar1);
    *param_7 = *param_7 + ((ulong)uVar1 << 0x20) & 0xffffffff00000000 |
               (ulong)((int)*param_7 + uVar1);
  }
  return;
}

