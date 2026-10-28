// rea decompile_all
// name: Utilities.CameraBlurSnapshot$$ApplyGrading
// address: 0x451c868
// body: available
// range: 0x451c868-0x451cbab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x451cb90 to 0x86197ec UnityEngine.Material$$SetColorImpl (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x451cba8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_CameraBlurSnapshot__ApplyGrading
               (float param_1,undefined4 param_2,long param_3,long param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_09518594 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091822f0);
    FUN_03f5c2a4(&DAT_09215568);
    FUN_03f5c2a4(&DAT_09215578);
    FUN_03f5c2a4(&DAT_09215570);
    DAT_09518594 = 1;
  }
  if (param_4 == 0) goto LAB_0451cba8;
  Utilities_CameraBlurSnapshot__SetKeyword(param_3,DAT_09215568,*(undefined1 *)(param_4 + 0x10));
  if (*(char *)(param_4 + 0x10) != '\0') {
    lVar1 = *(long *)(param_3 + 0x10);
    if (*(int *)(DAT_091822f0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar1 == 0) goto LAB_0451cba8;
    UnityEngine_Material__SetFloat
              (*(undefined4 *)(param_4 + 0x14),lVar1,
               *(undefined4 *)(*(long *)(DAT_091822f0 + 0xb8) + 4),0);
    if (*(long *)(param_3 + 0x10) == 0) goto LAB_0451cba8;
    UnityEngine_Material__SetFloat
              (*(undefined4 *)(param_4 + 0x18),*(long *)(param_3 + 0x10),
               *(undefined4 *)(*(long *)(DAT_091822f0 + 0xb8) + 8),0);
    if (*(long *)(param_3 + 0x10) == 0) goto LAB_0451cba8;
    UnityEngine_Material__SetFloat
              (*(undefined4 *)(param_4 + 0x1c),*(long *)(param_3 + 0x10),
               *(undefined4 *)(*(long *)(DAT_091822f0 + 0xb8) + 0xc),0);
  }
  Utilities_CameraBlurSnapshot__SetKeyword(param_3,DAT_09215570,*(undefined1 *)(param_4 + 0x20));
  if (*(char *)(param_4 + 0x20) != '\0') {
    lVar1 = *(long *)(param_3 + 0x10);
    if (*(int *)(DAT_091822f0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar1 == 0) goto LAB_0451cba8;
    UnityEngine_Material__SetColorImpl
              (*(undefined4 *)(param_4 + 0x24),*(undefined4 *)(param_4 + 0x28),
               *(undefined4 *)(param_4 + 0x2c),*(undefined4 *)(param_4 + 0x30),lVar1,
               *(undefined4 *)(*(long *)(DAT_091822f0 + 0xb8) + 0x10),0);
    if (*(long *)(param_3 + 0x10) == 0) goto LAB_0451cba8;
    UnityEngine_Material__SetColorImpl
              (*(undefined4 *)(param_4 + 0x34),*(undefined4 *)(param_4 + 0x38),
               *(undefined4 *)(param_4 + 0x3c),*(undefined4 *)(param_4 + 0x40),
               *(long *)(param_3 + 0x10),*(undefined4 *)(*(long *)(DAT_091822f0 + 0xb8) + 0x14),0);
    if (*(long *)(param_3 + 0x10) == 0) goto LAB_0451cba8;
    UnityEngine_Material__SetColorImpl
              (*(undefined4 *)(param_4 + 0x44),*(undefined4 *)(param_4 + 0x48),
               *(undefined4 *)(param_4 + 0x4c),*(undefined4 *)(param_4 + 0x50),
               *(long *)(param_3 + 0x10),*(undefined4 *)(*(long *)(DAT_091822f0 + 0xb8) + 0x18),0);
    if (*(long *)(param_3 + 0x10) == 0) goto LAB_0451cba8;
    fVar2 = *(float *)(param_4 + 0x54);
    fVar4 = 0.01;
    if (0.01 <= *(float *)(param_4 + 0x5c)) {
      fVar4 = *(float *)(param_4 + 0x5c);
    }
    fVar3 = fVar2;
    if (fVar2 <= *(float *)(param_4 + 0x58)) {
      fVar3 = *(float *)(param_4 + 0x58);
    }
    UnityEngine_Material__SetColorImpl
              (fVar2,fVar3,fVar4,*(undefined4 *)(param_4 + 0x60),*(long *)(param_3 + 0x10),
               *(undefined4 *)(*(long *)(DAT_091822f0 + 0xb8) + 0x1c),0);
  }
  Utilities_CameraBlurSnapshot__SetKeyword(param_3,DAT_09215578,*(undefined1 *)(param_4 + 100));
  if (*(char *)(param_4 + 100) == '\0') {
    return;
  }
  lVar1 = *(long *)(param_3 + 0x10);
  if (*(int *)(DAT_091822f0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar1 != 0) {
    UnityEngine_Material__SetColorImpl
              (*(undefined4 *)(param_4 + 0x68),*(undefined4 *)(param_4 + 0x6c),
               *(undefined4 *)(param_4 + 0x70),*(undefined4 *)(param_4 + 0x74),lVar1,
               *(undefined4 *)(*(long *)(DAT_091822f0 + 0xb8) + 0x20),0);
    if (*(long *)(param_3 + 0x10) != 0) {
      UnityEngine_Material__SetFloat
                (*(undefined4 *)(param_4 + 0x78),*(long *)(param_3 + 0x10),
                 *(undefined4 *)(*(long *)(DAT_091822f0 + 0xb8) + 0x24),0);
      if (*(long *)(param_3 + 0x10) != 0) {
        UnityEngine_Material__SetFloat
                  (*(undefined4 *)(param_4 + 0x7c),*(long *)(param_3 + 0x10),
                   *(undefined4 *)(*(long *)(DAT_091822f0 + 0xb8) + 0x28),0);
        if (*(long *)(param_3 + 0x10) != 0) {
          fVar4 = 0.01;
          if (0.01 <= *(float *)(param_4 + 0x80)) {
            fVar4 = *(float *)(param_4 + 0x80);
          }
          UnityEngine_Material__SetFloat
                    (fVar4,*(long *)(param_3 + 0x10),
                     *(undefined4 *)(*(long *)(DAT_091822f0 + 0xb8) + 0x2c),0);
          if (*(long *)(param_3 + 0x10) != 0) {
            UnityEngine_Material__SetFloat
                      (*(undefined4 *)(param_4 + 0x84),*(long *)(param_3 + 0x10),
                       *(undefined4 *)(*(long *)(DAT_091822f0 + 0xb8) + 0x30),0);
            if (*(long *)(param_3 + 0x10) != 0) {
              UnityEngine_Material__SetFloat
                        (param_2,*(long *)(param_3 + 0x10),
                         *(undefined4 *)(*(long *)(DAT_091822f0 + 0xb8) + 0x34),0);
              if (*(long *)(param_3 + 0x10) != 0) {
                fVar4 = 1.0 - (param_1 + param_1);
                UnityEngine_Material__SetColorImpl
                          (param_1,param_1,fVar4,fVar4,*(long *)(param_3 + 0x10),
                           *(undefined4 *)(*(long *)(DAT_091822f0 + 0xb8) + 0x38),0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0451cba8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

