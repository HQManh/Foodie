// rea decompile_all
// name: CakeOrder.Home.Map.HomeLevelPathWorldMap$$ActivateCamera
// address: 0x43506c4
// body: available
// range: 0x43506c4-0x43507ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4350794 to 0x43507ac CakeOrder.Home.Map.WorldMapCameraControl$$ActivateControl (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43507a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43507a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Map_HomeLevelPathWorldMap__ActivateCamera
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_4 + 0x7c) = 1;
  if (*(char *)(param_4 + 0x60) == '\0') {
    return;
  }
  lVar1 = *(long *)(param_4 + 0x20);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_4 + 0x30), lVar2 != 0)) {
    if (*(uint *)(lVar2 + 0x18) <= *(uint *)(lVar1 + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar2 = *(long *)(lVar2 + (long)(int)*(uint *)(lVar1 + 0x28) * 8 + 0x20);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x40), lVar2 != 0)) {
      CakeOrder_Home_Map_HomeLevelPathNodesControl__GetNodePosition
                (lVar2,*(undefined4 *)(lVar1 + 0x2c));
      if ((*(long *)(param_4 + 0x38) != 0) &&
         (lVar1 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x38),0), lVar1 != 0)) {
        UnityEngine_Transform__get_position(lVar1,0);
        if ((*(long *)(param_4 + 0x38) != 0) &&
           (lVar1 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x38),0), lVar1 != 0))
        {
          UnityEngine_Transform__set_position(0,param_2,param_3,lVar1,0);
          if ((*(long *)(param_4 + 0x50) != 0) && (*(long *)(param_4 + 0x40) != 0)) {
            CakeOrder_Home_Map_WorldMapCameraControl__ActivateControl
                      (0,param_2,param_3,*(undefined4 *)(*(long *)(param_4 + 0x50) + 0x10),
                       *(long *)(param_4 + 0x40),1);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

