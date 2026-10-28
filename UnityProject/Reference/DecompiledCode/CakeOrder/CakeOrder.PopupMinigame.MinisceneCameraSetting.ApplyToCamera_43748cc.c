// rea decompile_all
// name: CakeOrder.PopupMinigame.MinisceneCameraSetting$$ApplyToCamera
// address: 0x43748cc
// body: available
// range: 0x43748cc-0x43749bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43749b8 to 0x85f1a20 UnityEngine.Camera$$set_fieldOfView (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43749bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_MinisceneCameraSetting__ApplyToCamera
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               long param_6)

{
  long lVar1;
  float fVar2;
  
  if (((param_5 != 0) && (lVar1 = UnityEngine_Component__get_transform(param_5,0), param_6 != 0)) &&
     (fVar2 = (float)UnityEngine_Transform__get_position(param_6,0), lVar1 != 0)) {
    UnityEngine_Transform__set_position
              (fVar2 + *(float *)(param_4 + 0x10),param_2 + *(float *)(param_4 + 0x14),
               param_3 + *(float *)(param_4 + 0x18),lVar1,0);
    lVar1 = UnityEngine_Component__get_transform(param_5,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__set_localEulerAngles
                (*(undefined4 *)(param_4 + 0x1c),*(undefined4 *)(param_4 + 0x20),
                 *(undefined4 *)(param_4 + 0x24),lVar1,0);
      UnityEngine_Camera__set_clearFlags(param_5,*(undefined4 *)(param_4 + 0x28),0);
      UnityEngine_Camera__set_backgroundColor
                (*(undefined4 *)(param_4 + 0x2c),*(undefined4 *)(param_4 + 0x30),
                 *(undefined4 *)(param_4 + 0x34),*(undefined4 *)(param_4 + 0x38),param_5,0);
      UnityEngine_Camera__set_cullingMask(param_5,*(undefined4 *)(param_4 + 0x3c),0);
      UnityEngine_Camera__set_orthographic(param_5,*(undefined1 *)(param_4 + 0x40),0);
      UnityEngine_Camera__set_orthographicSize(*(undefined4 *)(param_4 + 0x44),param_5,0);
      UnityEngine_Camera__set_fieldOfView(*(undefined4 *)(param_4 + 0x48),param_5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

