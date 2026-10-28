// rea decompile_all
// name: AnhPD.FoodOrder.ServePlate$$Update
// address: 0x40bc4b8
// body: available
// range: 0x40bc4b8-0x40bc5ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40bc4f0 to 0x40bc448 AnhPD.FoodOrder.ServePlate$$StopSlide (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40bc5fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServePlate__Update
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  
  if (*(char *)(param_4 + 0x75) == '\0') {
    return;
  }
  if (*(char *)(param_4 + 0xb1) != '\0') {
    AnhPD_FoodOrder_ServePlate__StopSlide(param_4);
    return;
  }
  lVar1 = UnityEngine_Component__get_transform(param_4,0);
  lVar2 = UnityEngine_Component__get_transform(param_4,0);
  if (lVar2 != 0) {
    local_3c = UnityEngine_Transform__get_position(lVar2,0);
    local_48 = *(undefined8 *)(param_4 + 0x68);
    local_40 = *(undefined4 *)(param_4 + 0x70);
    fVar6 = *(float *)(param_4 + 0x38);
    uVar5 = *(undefined4 *)(param_4 + 0x3c);
    uStack_38 = param_2;
    local_34 = param_3;
    fVar3 = (float)UnityEngine_Time__get_deltaTime(0);
    UnityEngine_Vector3__SmoothDamp(uVar5,&local_3c,&local_48,param_4 + 0x78,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__set_position(lVar1,0);
      lVar1 = UnityEngine_Component__get_transform(param_4,0);
      if (lVar1 != 0) {
        fVar4 = (float)UnityEngine_Transform__get_position(lVar1,0);
        fVar4 = fVar4 - *(float *)(param_4 + 0x68);
        fVar6 = fVar6 - *(float *)(param_4 + 0x6c);
        fVar3 = fVar3 - *(float *)(param_4 + 0x70);
        if (fVar4 * fVar4 + fVar6 * fVar6 + fVar3 * fVar3 < 1e-06) {
          lVar1 = UnityEngine_Component__get_transform(param_4,0);
          if (lVar1 == 0) goto LAB_040bc5fc;
          UnityEngine_Transform__set_position
                    (*(undefined4 *)(param_4 + 0x68),*(undefined4 *)(param_4 + 0x6c),
                     *(undefined4 *)(param_4 + 0x70),lVar1,0);
          AnhPD_FoodOrder_ServePlate__StopSlide(param_4);
        }
        return;
      }
    }
  }
LAB_040bc5fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

