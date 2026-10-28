// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingFlightPresentation.Motion$$.ctor
// address: 0x44d6554
// body: available
// range: 0x44d6554-0x44d6807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d67e0 to 0x867e764 UnityEngine.Rendering.SortingGroup$$set_sortingOrder (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44d6804 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingFlightPresentation_Motion___ctor
               (undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7,long param_8,long param_9,
               undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  
  fVar9 = param_2;
  uVar1 = param_3;
  uVar11 = param_4;
  if ((DAT_095182fa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c54d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095182fa = 1;
  }
  System_Object___ctor(param_7,0);
  *(long *)(param_7 + 0x10) = param_8;
  thunk_FUN_03f5d7b8((long *)(param_7 + 0x10),param_8);
  *(long *)(param_7 + 0x18) = param_9;
  thunk_FUN_03f5d7b8((long *)(param_7 + 0x18),param_9);
  *(undefined8 *)(param_7 + 0x90) = param_10;
  thunk_FUN_03f5d7b8((undefined8 *)(param_7 + 0x90),param_10);
  *(undefined8 *)(param_7 + 0x98) = param_11;
  thunk_FUN_03f5d7b8((undefined8 *)(param_7 + 0x98),param_11);
  *(long *)(param_7 + 0x88) = param_12;
  thunk_FUN_03f5d7b8((long *)(param_7 + 0x88),param_12);
  DG_Tweening_ShortcutExtensions__DOKill(param_8,0,0);
  *(undefined4 *)(param_7 + 0x4c) = param_1;
  *(float *)(param_7 + 0x50) = param_2;
  *(undefined4 *)(param_7 + 0x54) = param_3;
  *(undefined4 *)(param_7 + 0x58) = param_4;
  *(undefined4 *)(param_7 + 0x5c) = param_5;
  *(undefined4 *)(param_7 + 0x60) = param_6;
  if (param_8 != 0) {
    uVar2 = UnityEngine_Transform__GetParent(param_8,0);
    *(undefined8 *)(param_7 + 0x20) = uVar2;
    thunk_FUN_03f5d7b8();
    uVar6 = UnityEngine_Transform__get_localPosition(param_8,0);
    *(undefined4 *)(param_7 + 0x34) = uVar6;
    *(float *)(param_7 + 0x38) = fVar9;
    *(undefined4 *)(param_7 + 0x3c) = uVar1;
    uVar6 = UnityEngine_Transform__get_position(param_8,0);
    *(undefined4 *)(param_7 + 0x28) = uVar6;
    *(float *)(param_7 + 0x2c) = fVar9;
    *(undefined4 *)(param_7 + 0x30) = uVar1;
    uVar6 = UnityEngine_Transform__get_localScale(param_8,0);
    *(undefined4 *)(param_7 + 0x40) = uVar6;
    *(float *)(param_7 + 0x44) = fVar9;
    *(undefined4 *)(param_7 + 0x48) = uVar1;
    uVar6 = UnityEngine_Transform__get_localRotation(param_8,0);
    uVar2 = DAT_091c54d0;
    *(undefined4 *)(param_7 + 100) = uVar6;
    *(float *)(param_7 + 0x68) = fVar9;
    *(undefined4 *)(param_7 + 0x6c) = uVar1;
    *(undefined4 *)(param_7 + 0x70) = uVar11;
    lVar3 = FUN_04a6a14c(param_8,uVar2);
    plVar5 = (long *)(param_7 + 0x78);
    *plVar5 = lVar3;
    thunk_FUN_03f5d7b8(plVar5,lVar3);
    lVar3 = *plVar5;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      if (*plVar5 == 0) goto LAB_044d6804;
      uVar1 = UnityEngine_Rendering_SortingGroup__get_sortingOrder(*plVar5,0);
    }
    *(undefined4 *)(param_7 + 0x80) = uVar1;
    if ((param_9 != 0) &&
       (fVar7 = (float)UnityEngine_Transform__get_position(param_9,0), param_12 != 0)) {
      fVar10 = ABS(fVar9 - *(float *)(param_7 + 0x2c));
      fVar7 = ABS(fVar7 - *(float *)(param_7 + 0x28));
      if (fVar7 <= fVar10) {
        fVar7 = fVar10;
      }
      fVar7 = *(float *)(param_12 + 0x14) * fVar7;
      fVar12 = *(float *)(param_12 + 0x1c);
      if (fVar7 <= *(float *)(param_12 + 0x1c)) {
        fVar12 = fVar7;
      }
      fVar8 = *(float *)(param_12 + 0x18);
      if (*(float *)(param_12 + 0x18) <= fVar7) {
        fVar8 = fVar12;
      }
      *(float *)(param_7 + 0x84) = fVar8;
      if (fVar9 - *(float *)(param_7 + 0x2c) < 0.0) {
        fVar10 = fVar10 + *(float *)(param_12 + 0x20);
        if (fVar8 <= fVar10) {
          fVar8 = fVar10;
        }
        *(float *)(param_7 + 0x84) = fVar8;
      }
      lVar3 = *plVar5;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (*plVar5 != 0) {
        UnityEngine_Rendering_SortingGroup__set_sortingOrder
                  (*plVar5,*(undefined4 *)(param_12 + 0x40),0);
        return;
      }
    }
  }
LAB_044d6804:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

