// rea decompile_all
// name: CakeOrder.PopupMinigame.MinisceneControlCookOrder$$Awake
// address: 0x43795b8
// body: available
// range: 0x43795b8-0x4379683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437967c to 0x86fde0c UnityEngine.Physics2D$$set_simulationMode (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4379680 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_MinisceneControlCookOrder__Awake(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((DAT_09517929 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4c60);
    FUN_03f5c2a4(&DAT_09189078);
    DAT_09517929 = 1;
  }
  FUN_05a8f11c(param_1,DAT_091b4c60);
  lVar2 = UnityEngine_Component__get_gameObject(param_1,0);
  if (lVar2 != 0) {
    uVar1 = UnityEngine_GameObject__get_scene(lVar2,0);
    uVar1 = UnityEngine_PhysicsSceneExtensions2D__GetPhysicsScene2D(uVar1,0);
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_Camera__set_orthographicSize(0x40a00000,*(long *)(param_1 + 0x20),0);
      if (*(int *)(DAT_09189078 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Physics2D__get_simulationMode(0);
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
      UnityEngine_Physics2D__set_simulationMode(2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

