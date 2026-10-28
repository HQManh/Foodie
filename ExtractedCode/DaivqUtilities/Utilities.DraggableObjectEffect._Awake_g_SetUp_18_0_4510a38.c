// rea decompile_all
// name: Utilities.DraggableObjectEffect$$<Awake>g__SetUp|18_0
// address: 0x4510a38
// body: available
// range: 0x4510a38-0x4510b93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4510b90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DraggableObjectEffect__<Awake>g__SetUp_18_0
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 local_30;
  float local_28;
  
  if ((*(long *)(param_4 + 0x30) != 0) &&
     (lVar1 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x30),0), lVar1 != 0)) {
    fVar3 = (float)UnityEngine_Transform__get_localScale(lVar1,0);
    fVar7 = *(float *)(param_4 + 0x5c);
    *(float *)(param_4 + 0x84) = fVar3;
    *(float *)(param_4 + 0x88) = param_2;
    *(float *)(param_4 + 0x8c) = param_3;
    fVar6 = *(float *)(param_4 + 0x48);
    uVar8 = *(undefined8 *)(param_4 + 0x4c);
    *(undefined8 *)(param_4 + 0xbc) = *(undefined8 *)(param_4 + 0x3c);
    fVar5 = fVar6 * 0.017453292;
    *(undefined8 *)(param_4 + 0xa8) = *(undefined8 *)(param_4 + 0x54);
    *(undefined8 *)(param_4 + 0xa0) = uVar8;
    *(float *)(param_4 + 0xb0) = fVar3 * fVar7;
    *(float *)(param_4 + 0xb4) = param_2 * fVar7;
    *(float *)(param_4 + 0xb8) = param_3 * fVar7;
    *(undefined4 *)(param_4 + 0xc4) = *(undefined4 *)(param_4 + 0x44);
    local_30 = 0;
    local_28 = fVar5;
    uVar4 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_30,0);
    *(undefined4 *)(param_4 + 0x90) = uVar4;
    *(float *)(param_4 + 0x94) = fVar5;
    *(float *)(param_4 + 0x98) = fVar6;
    *(int *)(param_4 + 0x9c) = (int)uVar8;
    if ((*(long *)(param_4 + 0x30) != 0) &&
       (lVar1 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x30),0), lVar1 != 0)) {
      UnityEngine_Transform__set_localScale
                (*(undefined4 *)(param_4 + 0xb0),*(undefined4 *)(param_4 + 0xb4),
                 *(undefined4 *)(param_4 + 0xb8),lVar1,0);
      if (*(long *)(param_4 + 0x30) != 0) {
        fVar5 = *(float *)(param_4 + 0xa8);
        fVar3 = *(float *)(param_4 + 0xa4);
        UnityEngine_SpriteRenderer__set_color
                  (*(undefined4 *)(param_4 + 0xa0),fVar3,fVar5,*(undefined4 *)(param_4 + 0xac),
                   *(long *)(param_4 + 0x30),0);
        if (*(long *)(param_4 + 0x30) != 0) {
          lVar1 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x30),0);
          if (((*(long *)(param_4 + 0x20) != 0) &&
              (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x20),0), lVar2 != 0
              )) && (fVar6 = (float)UnityEngine_Transform__get_position(lVar2,0), lVar1 != 0)) {
            UnityEngine_Transform__set_position
                      (fVar6 + *(float *)(param_4 + 0xbc),fVar3 + *(float *)(param_4 + 0xc0),
                       fVar5 + *(float *)(param_4 + 0xc4),lVar1,0);
            if ((*(long *)(param_4 + 0x30) != 0) &&
               (lVar1 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x30),0),
               lVar1 != 0)) {
              UnityEngine_Transform__set_localRotation
                        (*(undefined4 *)(param_4 + 0x90),*(undefined4 *)(param_4 + 0x94),
                         *(undefined4 *)(param_4 + 0x98),*(undefined4 *)(param_4 + 0x9c),lVar1,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

