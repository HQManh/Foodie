// rea decompile_all
// name: AnhPD.Home.HomeBuilding$$Hide
// address: 0x41d0e90
// body: available
// range: 0x41d0e90-0x41d0fd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d0fd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_Home_HomeBuilding__Hide(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_09516a35 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a49d0);
    FUN_03f5c2a4(&DAT_091a49d8);
    FUN_03f5c2a4(&DAT_091a49e0);
    FUN_03f5c2a4(&DAT_091b1130);
    FUN_03f5c2a4(&DAT_091b1138);
    FUN_03f5c2a4(&DAT_091b1158);
    DAT_09516a35 = 1;
  }
  lVar2 = *(long *)(param_1 + 0xd8);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0x18)) {
      FUN_057e185c(&local_48,lVar2,DAT_091b1138);
      while (uVar3 = FUN_071bd28c(&local_48,DAT_091a49d8), (uVar3 & 1) != 0) {
        DG_Tweening_TweenExtensions__Complete(local_38,0);
      }
      FUN_071bd288(&local_48,DAT_091a49d0);
      lVar2 = *(long *)(param_1 + 0xd8);
      if (lVar2 == 0) goto LAB_041d0fd4;
      iVar1 = *(int *)(lVar2 + 0x18);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
      }
    }
    lVar2 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar2 != 0) {
      UnityEngine_GameObject__SetActive(lVar2,0,0);
      return;
    }
  }
LAB_041d0fd4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

