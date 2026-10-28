// rea decompile_all
// name: Utilities.ColorBlendModifierWithRegisteredSource.<IETween>d__28$$MoveNext
// address: 0x4504e50
// body: available
// range: 0x4504e50-0x4505077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4505074 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Utilities_ColorBlendModifierWithRegisteredSource_<IETween>d__28__MoveNext(long param_1)

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
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_095184cf & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d528);
    FUN_03f5c2a4(&DAT_0919d538);
    FUN_03f5c2a4(&DAT_0919d558);
    DAT_095184cf = 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (1.0 <= *(float *)(param_1 + 0x70)) {
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0x38) != 0)) {
        FUN_06ed84e8(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                     *(long *)(lVar3 + 0x38),*(undefined4 *)(param_1 + 0x68),DAT_0919d558);
        lVar3 = *(long *)(param_1 + 0x60);
        if (lVar3 == 0) {
          return 0;
        }
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        return 0;
      }
      goto LAB_04505074;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_04505074;
    uVar1 = UnityEngine_Object__GetInstanceID(*(long *)(param_1 + 0x20),0);
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x38) == 0)) goto LAB_04505074;
    uVar2 = FUN_06ed871c(*(long *)(lVar3 + 0x38),uVar1,DAT_0919d538);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(lVar3 + 0x38) == 0) goto LAB_04505074;
      FUN_06ed84fc(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                   *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                   *(long *)(lVar3 + 0x38),*(undefined4 *)(param_1 + 0x68),DAT_0919d528);
    }
    if (*(char *)(param_1 + 0x40) == '\0') {
      uVar1 = UnityEngine_Time__get_time(0);
    }
    else {
      uVar1 = UnityEngine_Time__get_unscaledTime(0);
    }
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    fVar5 = (float)UnityEngine_Time__get_time(0);
  }
  else {
    fVar5 = (float)UnityEngine_Time__get_unscaledTime(0);
  }
  *(float *)(param_1 + 0x70) = (fVar5 - *(float *)(param_1 + 0x6c)) / *(float *)(param_1 + 0x44);
  if ((lVar3 != 0) && (*(long *)(param_1 + 0x58) != 0)) {
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    uVar11 = *(undefined8 *)(param_1 + 0x48);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    lVar4 = *(long *)(lVar3 + 0x38);
    uVar1 = *(undefined4 *)(param_1 + 0x68);
    fVar5 = (float)UnityEngine_AnimationCurve__Evaluate(*(long *)(param_1 + 0x58),0);
    if (lVar4 != 0) {
      fVar7 = 1.0;
      if (fVar5 <= 1.0) {
        fVar7 = fVar5;
      }
      fVar13 = (float)uVar9;
      fVar6 = (float)((ulong)uVar9 >> 0x20);
      fVar14 = (float)uVar10;
      fVar15 = (float)((ulong)uVar10 >> 0x20);
      fVar8 = 0.0;
      if (0.0 <= fVar5) {
        fVar8 = fVar7;
      }
      fVar6 = fVar6 + ((float)((ulong)uVar11 >> 0x20) - fVar6) * fVar8;
      FUN_06ed84e8(CONCAT44(fVar6,fVar13 + ((float)uVar11 - fVar13) * fVar8),fVar6,
                   fVar14 + ((float)uVar12 - fVar14) * fVar8,
                   fVar15 + ((float)((ulong)uVar12 >> 0x20) - fVar15) * fVar8,lVar4,uVar1,
                   DAT_0919d558);
      Utilities_ColorBlendModifierWithRegisteredSource__UpdateModifier(lVar3);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
LAB_04505074:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

