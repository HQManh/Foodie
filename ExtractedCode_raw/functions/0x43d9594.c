// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$UpdateCulling
// address: 0x43d9594
// body: available
// range: 0x43d9594-0x43d9597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterBase__UpdateCulling(long param_1)

{
  float fVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((DAT_09517ca7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091845d0);
    FUN_03f5c2a4(&DAT_091acb30);
    FUN_03f5c2a4(&DAT_091acb38);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517ca7 = 1;
  }
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled(param_1,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xe8) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xd9) != '\0') {
    return;
  }
  lVar4 = ChocDino_UIFX_FilterBase__get_CanvasRenderComponent(param_1);
  if (lVar4 == 0) goto LAB_043d6580;
  UnityEngine_CanvasRenderer__get_hasMoved(lVar4,0);
  uVar3 = ChocDino_UIFX_FilterBase__IsLastEnabledFilter(param_1);
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (*(int *)(DAT_091845d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(*(long *)(DAT_091845d0 + 0xb8) + 0x90);
    if (lVar4 == 0) goto LAB_043d6580;
    iVar5 = *(int *)(lVar4 + 0x18);
    if (-1 < iVar5 + -1) {
      do {
        if (*(int *)(DAT_091845d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = *(long *)(*(long *)(DAT_091845d0 + 0xb8) + 0x90);
        if (lVar4 == 0) goto LAB_043d6580;
        iVar5 = iVar5 + -1;
        lVar4 = FUN_057e0998(lVar4,iVar5,DAT_091acb38);
        if (lVar4 == 0) goto LAB_043d6580;
        uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled(lVar4,0);
        if (((uVar3 & 1) != 0) && (*(char *)(lVar4 + 0xa1) == '\0')) {
          return;
        }
      } while (0 < iVar5);
    }
    if (*(char *)(param_1 + 0x1c0) == '\0') {
      uVar6 = *(undefined8 *)(param_1 + 0x1a8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    }
    else {
      uVar2 = 0;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x1c0) != '\0') {
      uVar6 = *(undefined8 *)(param_1 + 0x1a8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar3 & 1) != 0) {
        ChocDino_UIFX_FilterBase__GenerateScreenRect(param_1);
        lVar4 = *(long *)(param_1 + 0x60);
        if (lVar4 == 0) goto LAB_043d6580;
        fVar11 = *(float *)(lVar4 + 0x2c);
        fVar10 = *(float *)(lVar4 + 0x30);
        fVar12 = *(float *)(lVar4 + 0x34);
        fVar13 = *(float *)(lVar4 + 0x38);
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar13 = fVar10 + fVar13;
        fVar12 = fVar11 + fVar12;
        fVar9 = fVar10;
        fVar14 = fVar13;
        if (*(int *)(param_1 + 0x24) == 0) {
          lVar4 = UnityEngine_Component__get_transform(param_1,0);
          if (lVar4 == 0) goto LAB_043d6580;
          UnityEngine_Transform__get_localToWorldMatrix(&uStack_100,lVar4,0);
          uStack_b8 = uStack_f8;
          uStack_c0 = uStack_100;
          uStack_a8 = uStack_e8;
          uStack_b0 = uStack_f0;
          uStack_98 = uStack_d8;
          uStack_a0 = uStack_e0;
          uStack_88 = uStack_c8;
          uStack_90 = uStack_d0;
          fVar7 = (float)FUN_043c08f4(fVar11,fVar13,0,&uStack_c0,0);
          fVar8 = (float)FUN_043c08f4(fVar12,fVar13,0,&uStack_c0,0);
          fVar12 = (float)FUN_043c08f4(fVar12,fVar10,0,&uStack_c0,0);
          fVar11 = (float)FUN_043c08f4(fVar11,fVar10,0,&uStack_c0,0);
        }
        else {
          lVar4 = ChocDino_UIFX_FilterBase__GetRenderCamera(param_1);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
          fVar7 = fVar11;
          fVar8 = fVar12;
          if ((uVar3 & 1) != 0) {
            if (lVar4 == 0) goto LAB_043d6580;
            fVar7 = (float)UnityEngine_Camera__ScreenToWorldPoint(fVar11,fVar13,0,lVar4,0);
            fVar8 = (float)UnityEngine_Camera__ScreenToWorldPoint(fVar12,fVar13,0,lVar4,0);
            fVar12 = (float)UnityEngine_Camera__ScreenToWorldPoint(fVar12,fVar10,0,lVar4,0);
            fVar11 = (float)UnityEngine_Camera__ScreenToWorldPoint(fVar11,fVar10,0,lVar4,0);
          }
        }
        fVar1 = fVar8;
        if (fVar7 <= fVar8) {
          fVar1 = fVar7;
        }
        if (fVar8 <= fVar7) {
          fVar8 = fVar7;
        }
        fVar7 = fVar13;
        if (fVar14 <= fVar13) {
          fVar7 = fVar14;
        }
        if (fVar13 <= fVar14) {
          fVar13 = fVar14;
        }
        fVar14 = fVar12;
        if (fVar1 <= fVar12) {
          fVar14 = fVar1;
        }
        fVar1 = fVar9;
        if (fVar7 <= fVar9) {
          fVar1 = fVar7;
        }
        if (fVar12 <= fVar8) {
          fVar12 = fVar8;
        }
        if (fVar9 <= fVar13) {
          fVar9 = fVar13;
        }
        fVar13 = fVar11;
        if (fVar14 <= fVar11) {
          fVar13 = fVar14;
        }
        fVar14 = fVar10;
        if (fVar1 <= fVar10) {
          fVar14 = fVar1;
        }
        if (fVar11 <= fVar12) {
          fVar11 = fVar12;
        }
        if (fVar10 <= fVar9) {
          fVar10 = fVar9;
        }
        if ((*(long *)(param_1 + 0x98) == 0) ||
           (lVar4 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x98),0), lVar4 == 0))
        goto LAB_043d6580;
        fVar12 = (float)UnityEngine_Transform__InverseTransformPoint(fVar13,fVar14,0,lVar4,0);
        if ((*(long *)(param_1 + 0x98) == 0) ||
           (lVar4 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x98),0), lVar4 == 0))
        goto LAB_043d6580;
        fVar11 = (float)UnityEngine_Transform__InverseTransformPoint(fVar11,fVar10,0,lVar4,0);
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = FUN_043c0980(fVar12,fVar14,fVar11 - fVar12,fVar10 - fVar14,param_1 + 0x1b0,1,0);
        uVar2 = uVar2 ^ 1;
      }
    }
    lVar4 = ChocDino_UIFX_FilterBase__get_CanvasRenderComponent(param_1);
    if (lVar4 == 0) {
LAB_043d6580:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_CanvasRenderer__set_cull(lVar4,uVar2 & 1,0);
    *(undefined1 *)(param_1 + 0x1c1) = 0;
  }
  return;
}

