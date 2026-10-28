// rea decompile_all
// name: CakeOrder.UI.UIMapBuildingProgress$$OnDisable
// address: 0x42c0d70
// body: available
// range: 0x42c0d70-0x42c0e0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c0e00 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIMapBuildingProgress__OnDisable(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0xa8);
  uVar1 = DG_Tweening_TweenExtensions__IsActive(*puVar3,0);
  if ((uVar1 & 1) != 0) {
    DG_Tweening_TweenExtensions__Complete(*puVar3,0);
    *puVar3 = 0;
    thunk_FUN_03f5d7b8(puVar3,0);
  }
  lVar2 = *(long *)(param_1 + 0xb0);
  if (lVar2 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,lVar2,0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0xb0),0);
  }
  lVar2 = *(long *)(param_1 + 0xd8);
  if (lVar2 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,lVar2,0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0xd8),0);
    return;
  }
  return;
}

