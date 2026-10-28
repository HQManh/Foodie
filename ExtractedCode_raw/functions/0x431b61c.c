// rea decompile_all
// name: CakeOrder.Home.HomeRestaurantsBuildingControl$$RequestMoveCamera
// address: 0x431b61c
// body: available
// range: 0x431b61c-0x431b78f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431b70c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x431b788 to 0x431b914 CakeOrder.Home.HomeRestaurantsBuildingControl$$OnCameraMoveComplete (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x431b78c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeRestaurantsBuildingControl__RequestMoveCamera(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((DAT_0951762a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951762a = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar4,0,0);
  if ((((uVar1 & 1) == 0) && (*(long *)(param_1 + 0x88) != 0)) &&
     ((*(char *)(*(long *)(param_1 + 0x88) + 0x18) == '\0' || ((param_2 & 1) != 0)))) {
    plVar3 = (long *)(param_1 + 0x28);
    if (*plVar3 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine(param_1,*plVar3,0);
      *(undefined8 *)(param_1 + 0x28) = 0;
      thunk_FUN_03f5d7b8(plVar3,0);
    }
    uVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled(param_1,0);
    if ((uVar1 & 1) != 0) {
      uVar4 = CakeOrder_Home_HomeRestaurantsBuildingControl__IEWaitLoadThenMoveCamera(param_1);
      uVar4 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar4,0);
      *(undefined8 *)(param_1 + 0x28) = uVar4;
      thunk_FUN_03f5d7b8(plVar3);
      return;
    }
    if (*(long *)(param_1 + 0x98) != 0) {
      DG_Tweening_TweenExtensions__Kill(*(long *)(param_1 + 0x98),0,0);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x30),0);
      if ((*(long *)(param_1 + 0x90) != 0) &&
         (CakeOrder_Home_HomeRestaurantsBuildingControl__GetCameraTargetForIndex
                    (param_1,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x28)), lVar2 != 0)) {
        UnityEngine_Transform__set_position(lVar2,0);
        lVar2 = *(long *)(param_1 + 0x30);
        CakeOrder_Home_HomeRestaurantsBuildingControl__GetCameraSize(param_1);
        if (lVar2 != 0) {
          UnityEngine_Camera__set_orthographicSize(lVar2,0);
          CakeOrder_Home_HomeRestaurantsBuildingControl__OnCameraMoveComplete(param_1);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

