// rea decompile_all
// name: Utilities.ColorBlendModifierWithRegisteredSource.<IETween>d__26$$MoveNext
// address: 0x4504920
// body: available
// range: 0x4504920-0x4504b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4504b80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_ColorBlendModifierWithRegisteredSource_<IETween>d__26__MoveNext
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((DAT_095184cd & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d528);
    FUN_03f5c2a4(&DAT_0919d538);
    FUN_03f5c2a4(&DAT_0919d548);
    FUN_03f5c2a4(&DAT_0919d558);
    DAT_095184cd = 1;
  }
  lVar3 = *(long *)(param_5 + 0x28);
  if (*(int *)(param_5 + 0x10) == 1) {
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if (1.0 <= *(float *)(param_5 + 0x70)) {
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0x38) != 0)) {
        FUN_06ed84e8(*(undefined4 *)(param_5 + 0x38),*(undefined4 *)(param_5 + 0x3c),
                     *(undefined4 *)(param_5 + 0x40),*(undefined4 *)(param_5 + 0x44),
                     *(long *)(lVar3 + 0x38),*(undefined4 *)(param_5 + 0x68),DAT_0919d558);
        lVar3 = *(long *)(param_5 + 0x50);
        if (lVar3 == 0) {
          return 0;
        }
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        return 0;
      }
      goto LAB_04504b80;
    }
  }
  else {
    if (*(int *)(param_5 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_04504b80;
    uVar1 = UnityEngine_Object__GetInstanceID(*(long *)(param_5 + 0x20),0);
    *(undefined4 *)(param_5 + 0x68) = uVar1;
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x38) == 0)) goto LAB_04504b80;
    uVar2 = FUN_06ed871c(*(long *)(lVar3 + 0x38),uVar1,DAT_0919d538);
    if ((uVar2 & 1) == 0) {
      uVar1 = *(undefined4 *)(lVar3 + 0x44);
      uVar11 = *(undefined4 *)(lVar3 + 0x48);
      uVar14 = *(undefined4 *)(lVar3 + 0x4c);
      *(undefined4 *)(param_5 + 0x58) = *(undefined4 *)(lVar3 + 0x40);
      *(undefined4 *)(param_5 + 0x5c) = uVar1;
      *(undefined4 *)(param_5 + 0x60) = uVar11;
      *(undefined4 *)(param_5 + 100) = uVar14;
      if (*(long *)(lVar3 + 0x38) == 0) goto LAB_04504b80;
      FUN_06ed84fc(*(long *)(lVar3 + 0x38),*(undefined4 *)(param_5 + 0x68),DAT_0919d528);
    }
    else {
      if (*(long *)(lVar3 + 0x38) == 0) goto LAB_04504b80;
      uVar1 = FUN_06ed844c(*(long *)(lVar3 + 0x38),*(undefined4 *)(param_5 + 0x68),DAT_0919d548);
      *(undefined4 *)(param_5 + 0x58) = uVar1;
      *(undefined4 *)(param_5 + 0x5c) = param_2;
      *(undefined4 *)(param_5 + 0x60) = param_3;
      *(undefined4 *)(param_5 + 100) = param_4;
    }
    if (*(char *)(param_5 + 0x30) == '\0') {
      uVar1 = UnityEngine_Time__get_time(0);
    }
    else {
      uVar1 = UnityEngine_Time__get_unscaledTime(0);
    }
    *(undefined4 *)(param_5 + 0x6c) = uVar1;
    *(undefined4 *)(param_5 + 0x70) = 0;
  }
  if (*(char *)(param_5 + 0x30) == '\0') {
    fVar5 = (float)UnityEngine_Time__get_time(0);
  }
  else {
    fVar5 = (float)UnityEngine_Time__get_unscaledTime(0);
  }
  *(float *)(param_5 + 0x70) = (fVar5 - *(float *)(param_5 + 0x6c)) / *(float *)(param_5 + 0x34);
  if ((lVar3 != 0) && (*(long *)(param_5 + 0x48) != 0)) {
    uVar13 = *(undefined8 *)(param_5 + 0x40);
    uVar12 = *(undefined8 *)(param_5 + 0x38);
    uVar10 = *(undefined8 *)(param_5 + 0x60);
    uVar9 = *(undefined8 *)(param_5 + 0x58);
    lVar4 = *(long *)(lVar3 + 0x38);
    uVar1 = *(undefined4 *)(param_5 + 0x68);
    fVar5 = (float)UnityEngine_AnimationCurve__Evaluate(*(long *)(param_5 + 0x48),0);
    if (lVar4 != 0) {
      fVar7 = 1.0;
      if (fVar5 <= 1.0) {
        fVar7 = fVar5;
      }
      fVar15 = (float)uVar9;
      fVar6 = (float)((ulong)uVar9 >> 0x20);
      fVar16 = (float)uVar10;
      fVar17 = (float)((ulong)uVar10 >> 0x20);
      fVar8 = 0.0;
      if (0.0 <= fVar5) {
        fVar8 = fVar7;
      }
      fVar6 = fVar6 + ((float)((ulong)uVar12 >> 0x20) - fVar6) * fVar8;
      FUN_06ed84e8(CONCAT44(fVar6,fVar15 + ((float)uVar12 - fVar15) * fVar8),fVar6,
                   fVar16 + ((float)uVar13 - fVar16) * fVar8,
                   fVar17 + ((float)((ulong)uVar13 >> 0x20) - fVar17) * fVar8,lVar4,uVar1,
                   DAT_0919d558);
      Utilities_ColorBlendModifierWithRegisteredSource__UpdateModifier(lVar3);
      *(undefined8 *)(param_5 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0x18),0);
      *(undefined4 *)(param_5 + 0x10) = 1;
      return 1;
    }
  }
LAB_04504b80:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

