// rea decompile_all
// name: AnhPD.FoodOrder.SeafoodPieceDisplay$$ShowContainerLayer
// address: 0x4131fb8
// body: available
// range: 0x4131fb8-0x4132147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4132144 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SeafoodPieceDisplay__ShowContainerLayer
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
               undefined4 param_5,undefined4 param_6,long param_7,undefined8 param_8,
               undefined4 param_9,uint param_10)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_80;
  float local_78;
  
  if ((DAT_09516343 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516343 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_7,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_7 != 0) {
    lVar3 = UnityEngine_Component__get_gameObject(param_7,0);
    if ((param_10 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(param_8,0);
    }
    if (lVar3 != 0) {
      UnityEngine_GameObject__SetActive(lVar3,uVar1 & 1,0);
      lVar3 = UnityEngine_Component__get_transform(param_7,0);
      if (lVar3 != 0) {
        UnityEngine_Transform__set_localPosition(param_1,param_2,param_3,lVar3,0);
        lVar3 = UnityEngine_Component__get_transform(param_7,0);
        local_80 = 0;
        local_78 = param_4 * 0.017453292;
        UnityEngine_Quaternion__Internal_FromEulerRad(&local_80,0);
        if (lVar3 != 0) {
          UnityEngine_Transform__set_localRotation(lVar3,0);
          UnityEngine_Renderer__set_sortingOrder(param_7,param_9,0);
          AnhPD_FoodOrder_SeafoodPieceDisplay__SetSprite(param_5,param_6,param_7,param_8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

