// rea decompile_all
// name: Utilities.CameraControlRotateAroundObject$$Start
// address: 0x450ce18
// body: available
// range: 0x450ce18-0x450cfff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x450cffc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_CameraControlRotateAroundObject__Start
               (undefined1 param_1 [16],undefined4 param_2,float param_3,undefined4 param_4,
               long param_5)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_58;
  float local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  float local_44;
  
  if (*(long *)(param_5 + 0x28) != 0) {
    fVar8 = *(float *)(param_5 + 0x30);
    lVar1 = UnityEngine_Component__get_transform(*(long *)(param_5 + 0x28),0);
    if (lVar1 != 0) {
      local_4c = UnityEngine_Transform__get_forward(lVar1,0);
      local_50 = 0.0;
      local_58 = 0;
      uStack_48 = param_2;
      local_44 = param_3;
      if (DAT_09515faa == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515faa = '\x01';
      }
      local_58 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
      fVar5 = *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20);
      local_50 = fVar5;
      uVar3 = UnityEngine_Quaternion__Internal_LookRotation(&local_4c,&local_58,0);
      puVar2 = (undefined4 *)(param_5 + 0x60);
      *puVar2 = uVar3;
      *(float *)(param_5 + 100) = fVar5;
      *(float *)(param_5 + 0x68) = param_3;
      *(undefined4 *)(param_5 + 0x6c) = param_4;
      fVar4 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(puVar2,0);
      fVar5 = fVar5 * 57.29578;
      param_3 = param_3 * 57.29578;
      uVar3 = UnityEngine_Quaternion__Internal_MakePositive(fVar4 * 57.29578,fVar5,param_3,0);
      *(undefined4 *)(param_5 + 0x5c) = uVar3;
      *(undefined4 *)(param_5 + 0xbc) = uVar3;
      fVar4 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(puVar2,0);
      fVar5 = fVar5 * 57.29578;
      param_3 = param_3 * 57.29578;
      UnityEngine_Quaternion__Internal_MakePositive(fVar4 * 57.29578,fVar5,param_3,0);
      *(float *)(param_5 + 0xc0) = fVar5;
      fVar4 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(puVar2,0);
      fVar5 = fVar5 * 57.29578;
      param_3 = param_3 * 57.29578;
      UnityEngine_Quaternion__Internal_MakePositive(fVar4 * 57.29578,fVar5,param_3,0);
      *(float *)(param_5 + 0x58) = -fVar5;
      if (*(long *)(param_5 + 0x28) != 0) {
        lVar1 = UnityEngine_Component__get_transform(*(long *)(param_5 + 0x28),0);
        if (*(long *)(param_5 + 0x20) != 0) {
          fVar4 = (float)UnityEngine_Transform__get_position(*(long *)(param_5 + 0x20),0);
          fVar7 = *(float *)(param_5 + 0x68);
          fVar6 = *(float *)(param_5 + 100);
          fVar8 = (float)UnityEngine_Quaternion__op_Multiply
                                   (*(undefined4 *)(param_5 + 0x60),fVar6,fVar7,
                                    *(undefined4 *)(param_5 + 0x6c),0,0,-fVar8,0);
          if (lVar1 != 0) {
            UnityEngine_Transform__set_position(fVar4 + fVar8,fVar5 + fVar6,param_3 + fVar7,lVar1,0)
            ;
            if (*(long *)(param_5 + 0x28) != 0) {
              lVar1 = UnityEngine_Component__get_transform(*(long *)(param_5 + 0x28),0);
              if ((*(long *)(param_5 + 0x20) != 0) &&
                 (UnityEngine_Transform__get_position(*(long *)(param_5 + 0x20),0), lVar1 != 0)) {
                UnityEngine_Transform__LookAt(lVar1,0);
                return;
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

