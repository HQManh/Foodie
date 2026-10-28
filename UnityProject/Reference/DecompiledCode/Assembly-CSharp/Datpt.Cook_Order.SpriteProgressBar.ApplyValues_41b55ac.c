// rea decompile_all
// name: Datpt.Cook_Order.SpriteProgressBar$$ApplyValues
// address: 0x41b55ac
// body: available
// range: 0x41b55ac-0x41b574f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b574c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_SpriteProgressBar__ApplyValues(long param_1)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_0951693c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918af68);
    DAT_0951693c = 1;
  }
  fVar4 = *(float *)(param_1 + 0x20);
  fVar2 = 1.0;
  if (fVar4 <= 1.0) {
    fVar2 = fVar4;
  }
  fVar5 = 0.0;
  if (0.0 <= fVar4) {
    fVar5 = fVar2;
  }
  *(float *)(param_1 + 0x20) = fVar5;
  if (*(long *)(param_1 + 0x28) != 0) {
    UnityEngine_Renderer__Internal_GetPropertyBlock
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
    lVar1 = *(long *)(param_1 + 0x30);
    if (*(int *)(DAT_0918af68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar1 != 0) {
      UnityEngine_MaterialPropertyBlock__SetFloat
                (*(undefined4 *)(param_1 + 0x20),lVar1,**(undefined4 **)(DAT_0918af68 + 0xb8),0);
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar3 = 0;
        if (*(char *)(param_1 + 0x24) != '\0') {
          uVar3 = 0x3f800000;
        }
        UnityEngine_MaterialPropertyBlock__SetFloat
                  (uVar3,*(long *)(param_1 + 0x30),
                   *(undefined4 *)(*(long *)(DAT_0918af68 + 0xb8) + 4),0);
        lVar1 = *(long *)(param_1 + 0x30);
        if (*(int *)(DAT_0918af68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar1 != 0) {
          uVar3 = 0;
          if (*(char *)(param_1 + 0x25) != '\0') {
            uVar3 = 0x3f800000;
          }
          UnityEngine_MaterialPropertyBlock__SetFloat
                    (uVar3,lVar1,*(undefined4 *)(*(long *)(DAT_0918af68 + 0xb8) + 8),0);
          lVar1 = *(long *)(param_1 + 0x30);
          if (*(int *)(DAT_0918af68 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (lVar1 != 0) {
            fVar4 = *(float *)(param_1 + 0x20);
            fVar2 = 1.0;
            if (fVar4 <= 1.0) {
              fVar2 = fVar4;
            }
            fVar5 = 0.0;
            if (0.0 <= fVar4) {
              fVar5 = fVar2;
            }
            UnityEngine_MaterialPropertyBlock__SetColorImpl
                      (1.0 - fVar5,fVar5 + 0.0,fVar5 * 0.0 + 0.0,fVar5 * 0.0 + 1.0,lVar1,
                       *(undefined4 *)(*(long *)(DAT_0918af68 + 0xb8) + 0xc),0);
            if (*(long *)(param_1 + 0x28) != 0) {
              UnityEngine_Renderer__SetPropertyBlock
                        (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
              *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x20);
              *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_1 + 0x24);
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

