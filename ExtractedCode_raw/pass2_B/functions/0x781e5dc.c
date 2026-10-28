// rea decompile_all
// name: SceneTransitionR1.SceneTransitionBehaviourZoomHole.<IEFadeInAndChangeColor>d__20$$MoveNext
// address: 0x781e5dc
// body: available
// range: 0x781e5dc-0x781ea57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x781ea50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x781ea54 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
SceneTransitionR1_SceneTransitionBehaviourZoomHole_<IEFadeInAndChangeColor>d__20__MoveNext
          (long param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_095232e5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf658);
    FUN_03f5c2a4(&DAT_091bf6b0);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197a08);
    FUN_03f5c2a4(&DAT_09197a18);
    FUN_03f5c2a4(&DAT_09197a20);
    FUN_03f5c2a4(&DAT_09175090);
    DAT_095232e5 = 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x20);
  if (iVar3 == 2) {
    fVar11 = *(float *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar12 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
    fVar11 = fVar11 + fVar12;
    *(float *)(param_1 + 0x3c) = fVar11;
    if (lVar9 == 0) goto LAB_0781ea50;
  }
  else {
    if (iVar3 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar9 == 0) goto LAB_0781ea50;
      iVar3 = FUN_0640f818(lVar9 + 0x68,DAT_09197a20);
      if (iVar3 == 1) {
        lVar5 = *(long *)(lVar9 + 0x40);
        uVar7 = FUN_0640f7ac(lVar9 + 0x68,DAT_09197a18);
        if (lVar5 == 0) goto LAB_0781ea50;
LAB_0781e870:
        UnityEngine_UI_Image__set_sprite(lVar5,uVar7,0);
      }
    }
    else {
      if (iVar3 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar9 == 0) goto LAB_0781ea50;
      if ((*(long *)(lVar9 + 0x60) != 0) &&
         (lVar5 = *(long *)(*(long *)(lVar9 + 0x60) + 0x18), lVar5 != 0)) {
        uVar2 = UnityEngine_Random__Range(0,lVar5,0);
        uVar4 = FUN_0640f598(lVar9 + 0x68,DAT_09197a08);
        if ((uVar4 & 1) != 0) {
          uStack_78 = *(undefined8 *)(lVar9 + 0x70);
          local_80 = *(undefined8 *)(lVar9 + 0x68);
          local_70 = *(undefined8 *)(lVar9 + 0x78);
          if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_58 = uStack_78;
          local_60 = local_80;
          local_50 = local_70;
          FUN_04b71ee0(&local_60,DAT_091bf6b0);
        }
        lVar5 = *(long *)(lVar9 + 0x60);
        if (lVar5 != 0) {
          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
            uVar7 = *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
            if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_04b711d8(&local_60,uVar7,DAT_091bf658);
            *(undefined8 *)(lVar9 + 0x70) = uStack_58;
            *(undefined8 *)(lVar9 + 0x68) = local_60;
            *(undefined8 *)(lVar9 + 0x78) = local_50;
            thunk_FUN_03f5d7b8(lVar9 + 0x68,0);
            uStack_98 = *(undefined8 *)(lVar9 + 0x70);
            local_a0 = *(undefined8 *)(lVar9 + 0x68);
            local_90 = *(undefined8 *)(lVar9 + 0x78);
            uVar7 = FUN_03f5c42c(DAT_09175090,&local_a0);
            *(undefined8 *)(param_1 + 0x18) = uVar7;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar7);
            *(undefined4 *)(param_1 + 0x10) = 1;
            return 1;
          }
LAB_0781ea54:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        goto LAB_0781ea50;
      }
      if ((*(long *)(lVar9 + 0x58) != 0) &&
         (lVar5 = *(long *)(*(long *)(lVar9 + 0x58) + 0x18), lVar5 != 0)) {
        uVar2 = UnityEngine_Random__Range(0,lVar5,0);
        lVar6 = *(long *)(lVar9 + 0x58);
        if (lVar6 == 0) goto LAB_0781ea50;
        if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_0781ea54;
        lVar5 = *(long *)(lVar9 + 0x40);
        if (lVar5 == 0) goto LAB_0781ea50;
        uVar7 = *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
        goto LAB_0781e870;
      }
    }
    uVar10 = UnityEngine_Random__get_value(0);
    fVar11 = 0.0;
    *(undefined4 *)(param_1 + 0x38) = uVar10;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  if (*(long *)(lVar9 + 0x88) != 0) {
    plVar8 = *(long **)(lVar9 + 0x80);
    fVar11 = *(float *)(param_1 + 0x38) + fVar11 * *(float *)(lVar9 + 0xa8);
    fVar11 = fVar11 - (float)(int)fVar11;
    fVar12 = 1.0;
    if (fVar11 <= 1.0) {
      fVar12 = fVar11;
    }
    fVar1 = 0.0;
    if (0.0 <= fVar11) {
      fVar1 = fVar12;
    }
    UnityEngine_Gradient__Evaluate(fVar1,*(long *)(lVar9 + 0x88),0);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
      if (*(char *)(param_1 + 0x40) == '\0') {
        fVar12 = *(float *)(param_1 + 0x3c) / *(float *)(param_1 + 0x28);
        if (fVar12 <= 1.0) {
          lVar5 = *(long *)(lVar9 + 0xa0);
          EssentialSystemR1_R1EaseExtension__EvaluateEase(fVar12,*(undefined4 *)(lVar9 + 0xac),0);
          if (lVar5 == 0) goto LAB_0781ea50;
          UnityEngine_CanvasGroup__set_alpha(lVar5,0);
          lVar5 = *(long *)(lVar9 + 0x38);
          fVar11 = *(float *)(lVar9 + 0x48);
          fVar12 = (float)EssentialSystemR1_R1EaseExtension__EvaluateEase
                                    (fVar12,*(undefined4 *)(lVar9 + 0x4c),0);
          if (DAT_09515ce9 == '\0') {
            FUN_03f5c2a4(&DAT_0918cb68);
            DAT_09515ce9 = '\x01';
          }
          if (lVar5 == 0) goto LAB_0781ea50;
          uVar7 = *(undefined8 *)(*(long *)(DAT_0918cb68 + 0xb8) + 8);
          fVar11 = fVar11 + (0.0 - fVar11) * fVar12;
          uVar4 = CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar11,(float)uVar7 * fVar11);
        }
        else {
          lVar5 = *(long *)(param_1 + 0x30);
          *(undefined1 *)(param_1 + 0x40) = 1;
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28))
            ;
          }
          if (*(long *)(lVar9 + 0xa0) == 0) goto LAB_0781ea50;
          UnityEngine_CanvasGroup__set_alpha(0x3f800000,*(long *)(lVar9 + 0xa0),0);
          lVar5 = *(long *)(lVar9 + 0x38);
          if (DAT_09515ce8 == '\0') {
            FUN_03f5c2a4(&DAT_0918cb68);
            DAT_09515ce8 = '\x01';
          }
          if (lVar5 == 0) goto LAB_0781ea50;
          uVar4 = **(ulong **)(DAT_0918cb68 + 0xb8);
        }
        UnityEngine_RectTransform__set_sizeDelta(uVar4,uVar4 >> 0x20,lVar5,0);
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
  }
LAB_0781ea50:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

