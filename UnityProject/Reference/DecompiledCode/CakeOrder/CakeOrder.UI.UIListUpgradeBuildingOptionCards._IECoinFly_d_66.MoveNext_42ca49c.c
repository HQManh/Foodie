// rea decompile_all
// name: CakeOrder.UI.UIListUpgradeBuildingOptionCards.<IECoinFly>d__66$$MoveNext
// address: 0x42ca49c
// body: available
// range: 0x42ca49c-0x42ca747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ca744 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_UI_UIListUpgradeBuildingOptionCards_<IECoinFly>d__66__MoveNext(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_28;
  
  local_28 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar2 == 0) goto LAB_042ca744;
    fVar4 = *(float *)(param_1 + 0x60);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar2 == 0) goto LAB_042ca744;
    fVar7 = *(float *)(param_1 + 0x34);
    fVar4 = (float)CakeOrder_UI_UIListUpgradeBuildingOptionCards__ResolvePartDestinationInUi
                             (*(undefined4 *)(param_1 + 0x30),lVar2,*(undefined8 *)(param_1 + 0x28))
    ;
    *(float *)(param_1 + 0x4c) = fVar4;
    *(float *)(param_1 + 0x50) = fVar7;
    local_28 = CONCAT44(fVar7 - (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                        fVar4 - (float)*(undefined8 *)(param_1 + 0x30));
    uVar5 = UnityEngine_Vector2__Normalize(&local_28,0);
    fVar11 = *(float *)(param_1 + 0x30);
    fVar4 = *(float *)(param_1 + 0x34);
    fVar13 = *(float *)(param_1 + 0x4c);
    fVar14 = *(float *)(param_1 + 0x50);
    if (DAT_09515fab == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09515fab = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar4 = fVar4 - fVar14;
    fVar11 = fVar11 - fVar13;
    *(float *)(param_1 + 0x54) = -fVar7;
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    fVar4 = SQRT(fVar11 * fVar11 + fVar4 * fVar4);
    uVar5 = UnityEngine_Random__Range(fVar4 * -0.5,fVar4 * 0.5,0);
    fVar4 = 0.0;
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_1 + 0x4c);
  }
  if (*(float *)(lVar2 + 0xc0) <= fVar4) {
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))
                (*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                 *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(param_1 + 0x38),
                 *(int *)(param_1 + 0x48) == 0,*(undefined8 *)(lVar2 + 0x28));
    }
    return 0;
  }
  fVar7 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
  fVar13 = *(float *)(param_1 + 0x50);
  fVar14 = *(float *)(lVar2 + 0xc0);
  *(float *)(param_1 + 0x60) = fVar4 + fVar7;
  fVar11 = (float)CakeOrder_UI_UIListUpgradeBuildingOptionCards__ResolvePartDestinationInUi
                            (*(undefined4 *)(param_1 + 0x4c),lVar2,*(undefined8 *)(param_1 + 0x28));
  *(float *)(param_1 + 100) = fVar11;
  *(float *)(param_1 + 0x68) = fVar13;
  if (*(long *)(lVar2 + 200) != 0) {
    fVar14 = (fVar4 + fVar7) / fVar14;
    lVar3 = *(long *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    fVar4 = (float)UnityEngine_AnimationCurve__Evaluate(fVar14,*(long *)(lVar2 + 200),0);
    if (*(long *)(lVar2 + 0xd0) != 0) {
      fVar7 = *(float *)(param_1 + 0x5c);
      uVar12 = *(undefined8 *)(param_1 + 0x54);
      fVar6 = (float)UnityEngine_AnimationCurve__Evaluate(fVar14,*(long *)(lVar2 + 0xd0),0);
      if (lVar3 != 0) {
        fVar8 = (float)uVar9;
        fVar10 = (float)((ulong)uVar9 >> 0x20);
        UnityEngine_Transform__set_position
                  (fVar8 + (fVar11 - fVar8) * fVar4 + (float)uVar12 * fVar7 * fVar6,
                   fVar10 + (fVar13 - fVar10) * fVar4 +
                   (float)((ulong)uVar12 >> 0x20) * fVar7 * fVar6,0,lVar3,0);
        lVar3 = *(long *)(param_1 + 0x38);
        if (DAT_09515cf3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf3 = '\x01';
        }
        if (*(long *)(lVar2 + 0xd8) != 0) {
          lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
          fVar11 = *(float *)(lVar1 + 0x10);
          fVar7 = *(float *)(lVar1 + 0x14);
          fVar13 = *(float *)(lVar1 + 0xc);
          fVar4 = (float)UnityEngine_AnimationCurve__Evaluate(fVar14,*(long *)(lVar2 + 0xd8),0);
          if (lVar3 != 0) {
            UnityEngine_Transform__set_localScale
                      (fVar13 * fVar4,fVar11 * fVar4,fVar7 * fVar4,lVar3,0);
            *(undefined8 *)(param_1 + 0x18) = 0;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
            *(undefined4 *)(param_1 + 0x10) = 1;
            return 1;
          }
        }
      }
    }
  }
LAB_042ca744:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

