// rea decompile_all
// name: Utilities.DraggableRigidbody2DJoint.<IERotateToSpecificAngle>d__42$$MoveNext
// address: 0x4514de0
// body: available
// range: 0x4514de0-0x4514f8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4514f8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_DraggableRigidbody2DJoint_<IERotateToSpecificAngle>d__42__MoveNext(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_0951855d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ce88);
    DAT_0951855d = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto LAB_04514f8c;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar4 = UnityEngine_Time__get_fixedTime(0);
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    uVar1 = thunk_FUN_03f9944c(DAT_0918ce88);
    UnityEngine_WaitForFixedUpdate___ctor(uVar1,0);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar1);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x20) == 0)) goto LAB_04514f8c;
    uVar4 = UnityEngine_Rigidbody2D__get_rotation(*(long *)(lVar3 + 0x20),0);
    *(undefined4 *)(param_1 + 0x38) = uVar4;
  }
  if ((*(char *)(lVar3 + 0xb0) == '\0') ||
     (fVar5 = (float)UnityEngine_Time__get_fixedTime(0),
     *(float *)(param_1 + 0x28) + *(float *)(lVar3 + 0x80) <= fVar5)) {
    return 0;
  }
  fVar8 = *(float *)(param_1 + 0x38);
  fVar9 = *(float *)(lVar3 + 0x7c);
  lVar2 = *(long *)(lVar3 + 0x88);
  fVar5 = (float)UnityEngine_Time__get_fixedTime(0);
  if (lVar2 != 0) {
    fVar5 = (float)UnityEngine_AnimationCurve__Evaluate
                             ((fVar5 - *(float *)(param_1 + 0x28)) / *(float *)(lVar3 + 0x80),lVar2,
                              0);
    if (*(long *)(lVar3 + 0x20) != 0) {
      fVar9 = fVar9 - fVar8;
      fVar7 = 1.0;
      if (fVar5 <= 1.0) {
        fVar7 = fVar5;
      }
      fVar9 = fVar9 + (float)(int)(fVar9 / 360.0) * -360.0;
      fVar6 = 0.0;
      if (0.0 <= fVar5) {
        fVar6 = fVar7;
      }
      fVar5 = 360.0;
      if (fVar9 <= 360.0) {
        fVar5 = fVar9;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar9) {
        fVar7 = fVar5;
      }
      fVar5 = fVar7 + -360.0;
      if (fVar7 <= 180.0) {
        fVar5 = fVar7;
      }
      UnityEngine_Rigidbody2D__MoveRotation_Angle(fVar8 + fVar5 * fVar6,*(long *)(lVar3 + 0x20),0);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x30);
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
LAB_04514f8c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

