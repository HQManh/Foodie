// rea decompile_all
// name: AnhPD.FoodOrder.PreciseDisplay$$CaptureRef
// address: 0x422f600
// body: available
// range: 0x422f600-0x422f79f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422f79c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PreciseDisplay__CaptureRef
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_09516db5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09516db5 = 1;
  }
  if (*(char *)(param_5 + 0x38) == '\0') {
    if ((*(float *)(param_5 + 0x28) <= 0.0) || (*(float *)(param_5 + 0x2c) <= 0.0)) {
      uVar4 = *(undefined8 *)(param_5 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
      if ((uVar1 & 1) == 0) {
        return;
      }
      if (*(long *)(param_5 + 0x20) == 0) {
LAB_0422f79c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = UnityEngine_SpriteRenderer__get_sprite(*(long *)(param_5 + 0x20),0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
      if ((uVar1 & 1) == 0) {
        return;
      }
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_0422f79c;
      lVar2 = UnityEngine_SpriteRenderer__get_sprite(*(long *)(param_5 + 0x20),0);
      if (((*(long *)(param_5 + 0x20) == 0) ||
          (lVar3 = UnityEngine_Component__get_transform(*(long *)(param_5 + 0x20),0), lVar3 == 0))
         || (fVar5 = (float)UnityEngine_Transform__get_localScale(lVar3,0), lVar2 == 0))
      goto LAB_0422f79c;
      UnityEngine_Sprite__get_rect(lVar2,0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar6 = (float)UnityEngine_Sprite__get_pixelsPerUnit(lVar2,0);
      UnityEngine_Sprite__get_rect(lVar2,0);
      fVar7 = (float)UnityEngine_Sprite__get_pixelsPerUnit(lVar2,0);
      *(float *)(param_5 + 0x30) = fVar5 * (param_3 / fVar6);
      *(float *)(param_5 + 0x34) = param_2 * (param_4 / fVar7);
    }
    else {
      *(undefined8 *)(param_5 + 0x30) = *(undefined8 *)(param_5 + 0x28);
    }
    *(undefined1 *)(param_5 + 0x38) = 1;
  }
  return;
}

