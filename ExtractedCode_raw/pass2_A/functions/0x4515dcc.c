// rea decompile_all
// name: Utilities.FlashLightShaderControl$$UpdateShaderProp
// address: 0x4515dcc
// body: available
// range: 0x4515dcc-0x4515f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4515f30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_FlashLightShaderControl__UpdateShaderProp
               (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_09518566 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184718);
    DAT_09518566 = 1;
  }
  local_40 = 0;
  local_38 = 0;
  if (*(long *)(param_5 + 0x20) != 0) {
    uVar2 = UnityEngine_Transform__get_position(*(long *)(param_5 + 0x20),0);
    *(undefined4 *)(param_5 + 0x30) = uVar2;
    if (*(long *)(param_5 + 0x20) != 0) {
      UnityEngine_Transform__get_position(*(long *)(param_5 + 0x20),0);
      *(float *)(param_5 + 0x34) = param_2;
      *(undefined8 *)(param_5 + 0x40) = *(undefined8 *)(param_5 + 0x28);
      if (*(long *)(param_5 + 0x20) != 0) {
        uVar2 = UnityEngine_Transform__get_rotation(*(long *)(param_5 + 0x20),0);
        local_40 = CONCAT44(param_2,uVar2);
        local_38 = CONCAT44(param_4,param_3);
        fVar3 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_40,0);
        param_2 = param_2 * 57.29578;
        param_3 = param_3 * 57.29578;
        UnityEngine_Quaternion__Internal_MakePositive(fVar3 * 57.29578,0);
        fVar3 = sinf(param_3 * -0.017453292);
        *(float *)(param_5 + 0x48) = fVar3;
        if (*(long *)(param_5 + 0x20) != 0) {
          uVar2 = UnityEngine_Transform__get_rotation(*(long *)(param_5 + 0x20),0);
          local_40 = CONCAT44(param_2,uVar2);
          local_38 = CONCAT44(param_4,param_3);
          fVar3 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_40,0);
          param_3 = param_3 * 57.29578;
          UnityEngine_Quaternion__Internal_MakePositive(fVar3 * 57.29578,param_2 * 57.29578,0);
          fVar3 = cosf(param_3 * -0.017453292);
          lVar1 = DAT_09184718;
          *(float *)(param_5 + 0x4c) = fVar3;
          if (*(int *)(lVar1 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar1 = DAT_09184718;
          }
          UnityEngine_Shader__SetGlobalVectorImpl
                    (*(undefined4 *)(param_5 + 0x30),*(undefined4 *)(param_5 + 0x34),
                     *(undefined4 *)(param_5 + 0x38),*(undefined4 *)(param_5 + 0x3c),
                     **(undefined4 **)(lVar1 + 0xb8),0);
          UnityEngine_Shader__SetGlobalVectorImpl
                    (*(undefined4 *)(param_5 + 0x40),*(undefined4 *)(param_5 + 0x44),
                     *(undefined4 *)(param_5 + 0x48),*(undefined4 *)(param_5 + 0x4c),
                     *(undefined4 *)(*(long *)(DAT_09184718 + 0xb8) + 4),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

