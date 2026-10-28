// rea decompile_all
// name: CakeOrder.Home.LevelCoinProbe.<>c__DisplayClass0_0$$<ComputeOrderCoinAsync>g__OnSceneLoaded|0
// address: 0x4310e40
// body: available
// range: 0x4310e40-0x4310eeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4310ee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4310ee8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_LevelCoinProbe_<>c__DisplayClass0_0__<ComputeOrderCoinAsync>g__OnSceneLoaded_0
               (long param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 local_24;
  
  if (param_3 == 1) {
    local_24 = param_2;
    uVar2 = UnityEngine_SceneManagement_Scene__get_name(&local_24,0);
    uVar3 = System_String__op_Inequality(uVar2,*(undefined8 *)(param_1 + 0x10),0);
    if ((uVar3 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x18) = local_24;
      lVar4 = UnityEngine_SceneManagement_Scene__GetRootGameObjects(&local_24,0);
      if (lVar4 == 0) {
LAB_04310ee4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        lVar6 = 0;
        do {
          if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar5 = *(long *)(lVar4 + 0x20 + lVar6 * 8);
          if (lVar5 == 0) goto LAB_04310ee4;
          UnityEngine_GameObject__SetActive(lVar5,0,0);
          uVar1 = *(uint *)(lVar4 + 0x18);
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < (int)uVar1);
      }
    }
  }
  return;
}

