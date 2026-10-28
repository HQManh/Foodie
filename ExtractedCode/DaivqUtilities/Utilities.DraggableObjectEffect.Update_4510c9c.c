// rea decompile_all
// name: Utilities.DraggableObjectEffect$$Update
// address: 0x4510c9c
// body: available
// range: 0x4510c9c-0x4510efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4510ef8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DraggableObjectEffect__Update(long param_1)

{
  float fVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  fVar4 = (float)UnityEngine_Time__get_time(0);
  fVar8 = *(float *)(param_1 + 0x38);
  fVar6 = *(float *)(param_1 + 0x2c) + fVar8;
  if (fVar6 <= fVar4) {
    return;
  }
  fVar11 = *(float *)(param_1 + 0x28);
  fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x30),0);
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar3 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x30),0), lVar3 != 0)) {
      fVar5 = (float)UnityEngine_Transform__get_position(lVar3,0);
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (fVar9 = fVar8, lVar3 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x20),0),
         lVar3 != 0)) {
        fVar7 = 50.0;
        fVar10 = fVar11 * fVar4 * 50.0;
        fVar11 = (float)UnityEngine_Transform__get_position(lVar3,0);
        fVar4 = 1.0;
        if (fVar10 <= 1.0) {
          fVar4 = fVar10;
        }
        fVar1 = 0.0;
        if (0.0 <= fVar10) {
          fVar1 = fVar4;
        }
        if (lVar2 != 0) {
          fVar8 = fVar8 + fVar1 * ((fVar9 + *(float *)(param_1 + 0xc4)) - fVar8);
          fVar6 = fVar6 + fVar1 * ((fVar7 + *(float *)(param_1 + 0xc0)) - fVar6);
          UnityEngine_Transform__set_position
                    (fVar5 + fVar1 * ((fVar11 + *(float *)(param_1 + 0xbc)) - fVar5),lVar2,0);
          lVar2 = *(long *)(param_1 + 0x30);
          if (lVar2 != 0) {
            UnityEngine_SpriteRenderer__get_color(lVar2,0);
            fVar6 = fVar6 + ((float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20) - fVar6) *
                            fVar1;
            fVar8 = fVar8 + ((float)*(undefined8 *)(param_1 + 0xa8) - fVar8) * fVar1;
            UnityEngine_SpriteRenderer__set_color(lVar2,0);
            if (*(long *)(param_1 + 0x30) != 0) {
              lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x30),0);
              if (((*(long *)(param_1 + 0x30) != 0) &&
                  (lVar3 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x30),0),
                  lVar3 != 0)) &&
                 (fVar4 = (float)UnityEngine_Transform__get_localScale(lVar3,0), lVar2 != 0)) {
                fVar11 = fVar1 * (*(float *)(param_1 + 0xb8) - fVar8);
                fVar8 = fVar8 + fVar11;
                fVar6 = fVar6 + fVar1 * (*(float *)(param_1 + 0xb4) - fVar6);
                UnityEngine_Transform__set_localScale
                          (fVar4 + fVar1 * (*(float *)(param_1 + 0xb0) - fVar4),lVar2,0);
                if (*(long *)(param_1 + 0x30) != 0) {
                  lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x30),0);
                  if ((*(long *)(param_1 + 0x30) != 0) &&
                     (lVar3 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x30),0),
                     lVar3 != 0)) {
                    local_50 = UnityEngine_Transform__get_localRotation(lVar3,0);
                    uStack_58 = *(undefined8 *)(param_1 + 0x98);
                    local_60 = *(undefined8 *)(param_1 + 0x90);
                    fStack_4c = fVar6;
                    local_48 = fVar8;
                    fStack_44 = fVar11;
                    UnityEngine_Quaternion__Internal_Lerp(fVar10,&local_50,&local_60,0);
                    if (lVar2 != 0) {
                      UnityEngine_Transform__set_localRotation(lVar2,0);
                      return;
                    }
                  }
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

