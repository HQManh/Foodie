// rea decompile_all
// name: Utilities.CameraControlRotateAroundObject$$Update
// address: 0x450d000
// body: available
// range: 0x450d000-0x450d42f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x450d42c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_CameraControlRotateAroundObject__Update
               (undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_198 [68];
  undefined1 auStack_154 [68];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  if ((DAT_0951850e & 1) == 0) {
    FUN_03f5c2a4(&DAT_092081f0);
    FUN_03f5c2a4(&DAT_092081e8);
    DAT_0951850e = 1;
  }
  local_80 = 0;
  local_d0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(int *)(param_3 + 0x48) == 1) {
    iVar1 = UnityEngine_Input__get_touchCount(0);
    if (iVar1 == 1) {
      UnityEngine_Input__GetTouch(auStack_154,0,0);
      memcpy((void *)(param_3 + 0x70),auStack_154,0x44);
      iVar1 = UnityEngine_Touch__get_phase(param_3 + 0x70,0);
      if (iVar1 != 0) {
        iVar1 = UnityEngine_Touch__get_phase(param_3 + 0x70,0);
        if (iVar1 == 1) {
          uVar15 = *(undefined8 *)(param_3 + 0x58);
          fVar4 = (float)UnityEngine_Touch__get_deltaPosition(param_3 + 0x70,0);
          uVar16 = *(undefined8 *)(param_3 + 0x3c);
          fVar13 = (float)UnityEngine_Time__get_deltaTime(0);
          if (*(long *)(param_3 + 0x50) == 0) goto LAB_0450d42c;
          fVar14 = *(float *)(*(long *)(param_3 + 0x50) + 0x18);
          *(ulong *)(param_3 + 0x58) =
               CONCAT44((float)((ulong)uVar15 >> 0x20) -
                        param_2 * (float)((ulong)uVar16 >> 0x20) * fVar13 * fVar14,
                        (float)uVar15 - fVar4 * (float)uVar16 * fVar13 * fVar14);
        }
        else {
          UnityEngine_Touch__get_phase(param_3 + 0x70,0);
        }
      }
    }
    else if ((*(char *)(param_3 + 0xc4) != '\0') &&
            (iVar1 = UnityEngine_Input__get_touchCount(0), iVar1 == 2)) {
      UnityEngine_Input__GetTouch(auStack_154,0,0);
      memcpy(&local_c0,auStack_154,0x44);
      UnityEngine_Input__GetTouch(auStack_198,1,0);
      memcpy(&local_110,auStack_198,0x44);
      fVar5 = (float)UnityEngine_Touch__get_position(&local_c0,0);
      fVar11 = param_2;
      fVar6 = (float)UnityEngine_Touch__get_deltaPosition(&local_c0,0);
      fVar14 = fVar11;
      fVar7 = (float)UnityEngine_Touch__get_position(&local_110,0);
      fVar13 = fVar14;
      fVar8 = (float)UnityEngine_Touch__get_deltaPosition(&local_110,0);
      fVar4 = fVar13;
      if (DAT_09516ea4 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09516ea4 = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar9 = (float)UnityEngine_Touch__get_position(&local_c0,0);
      fVar12 = fVar4;
      fVar10 = (float)UnityEngine_Touch__get_position(&local_110,0);
      if (DAT_09516ea4 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09516ea4 = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(param_3 + 0x28) == 0) goto LAB_0450d42c;
      fVar5 = (fVar5 - fVar6) - (fVar7 - fVar8);
      fVar13 = (param_2 - fVar11) - (fVar14 - fVar13);
      fVar4 = SQRT(fVar5 * fVar5 + fVar13 * fVar13) -
              SQRT((fVar9 - fVar10) * (fVar9 - fVar10) + (fVar4 - fVar12) * (fVar4 - fVar12));
      uVar2 = UnityEngine_Camera__get_orthographic(*(long *)(param_3 + 0x28),0);
      lVar3 = *(long *)(param_3 + 0x28);
      if ((uVar2 & 1) == 0) {
        if (lVar3 == 0) goto LAB_0450d42c;
        fVar13 = (float)UnityEngine_Camera__get_fieldOfView(lVar3,0);
        fVar13 = fVar13 + fVar4 * *(float *)(param_3 + 0xcc);
        fVar4 = *(float *)(param_3 + 0xd4);
        if (fVar13 <= *(float *)(param_3 + 0xd4)) {
          fVar4 = fVar13;
        }
        fVar14 = *(float *)(param_3 + 0xd0);
        if (*(float *)(param_3 + 0xd0) <= fVar13) {
          fVar14 = fVar4;
        }
        UnityEngine_Camera__set_fieldOfView(fVar14,lVar3,0);
      }
      else {
        if (lVar3 == 0) goto LAB_0450d42c;
        fVar13 = (float)UnityEngine_Camera__get_orthographicSize(lVar3,0);
        fVar13 = fVar13 + fVar4 * *(float *)(param_3 + 200);
        if (fVar13 <= 0.1) {
          fVar13 = 0.1;
        }
        UnityEngine_Camera__set_orthographicSize(fVar13,lVar3,0);
      }
    }
    fVar4 = *(float *)(param_3 + 0xb4);
    if ((*(float *)(param_3 + 0x5c) < fVar4) ||
       (fVar4 = *(float *)(param_3 + 0xb8), fVar4 < *(float *)(param_3 + 0x5c))) {
      *(float *)(param_3 + 0x5c) = fVar4;
    }
  }
  else if (*(int *)(param_3 + 0x48) == 0) {
    uVar2 = UnityEngine_Input__GetMouseButton(0,0);
    if ((uVar2 & 1) != 0) {
      fVar13 = *(float *)(param_3 + 0xbc);
      fVar4 = (float)UnityEngine_Internal_InputUnsafeUtility__GetAxis(DAT_092081f0,0);
      uVar15 = DAT_092081e8;
      if (*(long *)(param_3 + 0x50) == 0) {
LAB_0450d42c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar14 = *(float *)(param_3 + 0xc0);
      *(float *)(param_3 + 0xbc) =
           fVar13 - *(float *)(param_3 + 0x38) * fVar4 *
                    *(float *)(*(long *)(param_3 + 0x50) + 0x18);
      fVar4 = (float)UnityEngine_Internal_InputUnsafeUtility__GetAxis(uVar15,0);
      if (*(long *)(param_3 + 0x50) == 0) goto LAB_0450d42c;
      *(float *)(param_3 + 0xc0) =
           fVar14 + fVar4 * *(float *)(param_3 + 0x34) *
                    *(float *)(*(long *)(param_3 + 0x50) + 0x18);
    }
    fVar4 = *(float *)(param_3 + 0xb4);
    if ((*(float *)(param_3 + 0xbc) < fVar4) ||
       (fVar4 = *(float *)(param_3 + 0xb8), fVar4 < *(float *)(param_3 + 0xbc))) {
      *(float *)(param_3 + 0xbc) = fVar4;
    }
  }
  return;
}

