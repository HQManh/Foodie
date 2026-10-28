// rea decompile_all
// name: Utilities.FollowCameraInsideWorldBound2D$$LateUpdate
// address: 0x4516170
// body: available
// range: 0x4516170-0x451643f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4516438 to 0x866c8b0 UnityEngine.Transform$$set_position (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x451643c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_FollowCameraInsideWorldBound2D__LateUpdate
               (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  
  if ((DAT_0951856b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b640);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_0951856b = 1;
  }
  if (*(long *)(param_4 + 0x40) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x40) + 0x18);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_4 + 0x40) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_4 + 0x40) + 0x18), lVar2 != 0)) {
      fVar4 = (float)UnityEngine_Transform__get_position(lVar2,0);
      if (*(long *)(param_4 + 0x20) != 0) {
        fVar5 = (float)UnityEngine_Camera__get_orthographicSize(*(long *)(param_4 + 0x20),0);
        if (*(long *)(param_4 + 0x20) != 0) {
          fVar6 = (float)UnityEngine_Camera__get_aspect(*(long *)(param_4 + 0x20),0);
          if (*(long *)(param_4 + 0x20) != 0) {
            fVar7 = (float)UnityEngine_Camera__get_orthographicSize(*(long *)(param_4 + 0x20),0);
            fVar5 = fVar5 * fVar6;
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            fVar6 = *(float *)(param_4 + 0x30);
            if (fVar6 <= fVar5 + fVar5) {
              if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                FUN_03f5c424();
                fVar6 = *(float *)(param_4 + 0x30);
              }
              fVar10 = *(float *)(param_4 + 0x28) + fVar6 * 0.5;
            }
            else {
              if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                FUN_03f5c424();
                fVar6 = *(float *)(param_4 + 0x30);
              }
              fVar10 = fVar5 + *(float *)(param_4 + 0x28);
              fVar5 = (*(float *)(param_4 + 0x28) + fVar6) - fVar5;
              if (fVar4 <= fVar5) {
                fVar5 = fVar4;
              }
              if (fVar10 <= fVar4) {
                fVar10 = fVar5;
              }
            }
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            fVar4 = *(float *)(param_4 + 0x34);
            if (fVar4 <= fVar7 + fVar7) {
              if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                FUN_03f5c424();
                fVar4 = *(float *)(param_4 + 0x34);
              }
              fVar5 = *(float *)(param_4 + 0x2c);
              fVar4 = fVar5 + fVar4 * 0.5;
            }
            else {
              if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                FUN_03f5c424();
                fVar4 = *(float *)(param_4 + 0x34);
              }
              fVar5 = fVar7 + *(float *)(param_4 + 0x2c);
              fVar7 = (*(float *)(param_4 + 0x2c) + fVar4) - fVar7;
              if (param_2 <= fVar7) {
                fVar7 = param_2;
              }
              fVar4 = fVar5;
              if (fVar5 <= param_2) {
                fVar4 = fVar7;
              }
            }
            if ((*(long *)(param_4 + 0x20) != 0) &&
               (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x20),0),
               lVar2 != 0)) {
              fVar6 = (float)UnityEngine_Transform__get_position(lVar2,0);
              if (*(long *)(param_4 + 0x20) != 0) {
                lVar2 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x20),0);
                fVar7 = *(float *)(param_4 + 0x38);
                fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
                fVar11 = *(float *)(param_4 + 0x38);
                fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
                if (lVar2 != 0) {
                  fVar8 = fVar7 * 50.0 * fVar8;
                  fVar9 = fVar11 * 50.0 * fVar9;
                  uVar1 = NEON_fmov(0x3f800000,4);
                  iVar12 = -(uint)(fVar8 < 0.0);
                  iVar13 = -(uint)(fVar9 < 0.0);
                  uVar1 = CONCAT44(fVar9,fVar8) ^
                          (CONCAT44(fVar9,fVar8) ^ uVar1) &
                          CONCAT44(-(uint)((float)(uVar1 >> 0x20) < fVar9),
                                   -(uint)((float)uVar1 < fVar8));
                  fVar7 = (float)CONCAT13((byte)(uVar1 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                                          CONCAT12((byte)(uVar1 >> 0x10) &
                                                   ~(byte)((uint)iVar12 >> 0x10),
                                                   CONCAT11((byte)(uVar1 >> 8) &
                                                            ~(byte)((uint)iVar12 >> 8),
                                                            (byte)uVar1 & ~(byte)iVar12)));
                  fVar5 = fVar5 + (fVar4 - fVar5) *
                                  (float)(CONCAT17((byte)(uVar1 >> 0x38) &
                                                   ~(byte)((uint)iVar13 >> 0x18),
                                                   CONCAT16((byte)(uVar1 >> 0x30) &
                                                            ~(byte)((uint)iVar13 >> 0x10),
                                                            CONCAT15((byte)(uVar1 >> 0x28) &
                                                                     ~(byte)((uint)iVar13 >> 8),
                                                                     CONCAT14((byte)(uVar1 >> 0x20)
                                                                              & ~(byte)iVar13,fVar7)
                                                                    ))) >> 0x20);
                  UnityEngine_Transform__set_position
                            (CONCAT44(fVar5,fVar6 + (fVar10 - fVar6) * fVar7),fVar5,param_3,lVar2,0)
                  ;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

