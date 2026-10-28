// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewSpineFill$$StartLoop
// address: 0x410d798
// body: available
// range: 0x410d798-0x410d93b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x410d934 to 0x85db37c UnityEngine.AudioSource$$Play (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x410d938 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewSpineFill__StartLoop(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((DAT_095161d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd5c8);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b48d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095161d0 = 1;
  }
  plVar2 = (long *)(param_1 + 0x68);
  lVar3 = *plVar2;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar3,0);
  if ((uVar1 & 1) == 0) {
    lVar3 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar3 == 0) goto LAB_0410d938;
    lVar3 = FUN_04b7c294(lVar3,DAT_091cd5c8);
    *plVar2 = lVar3;
    thunk_FUN_03f5d7b8(plVar2,lVar3);
    if (*plVar2 == 0) goto LAB_0410d938;
    UnityEngine_AudioSource__set_playOnAwake(*plVar2,0,0);
    if (*plVar2 == 0) goto LAB_0410d938;
    UnityEngine_AudioSource__set_loop(*plVar2,1,0);
    uVar1 = FUN_05a8eda4(DAT_091b48d8);
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(DAT_091b48d0 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_0410d938;
      CakeOrder_AudioManagerCakeOrder__RegisterAudioSource(**(long **)(lVar3 + 0xb8),*plVar2,5,0);
    }
  }
  *(long *)(param_1 + 0x70) = param_2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x70),param_2);
  if ((param_2 != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    UnityEngine_AudioSource__set_generatorObject
              (*(long *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x20),0);
    if (*plVar2 != 0) {
      UnityEngine_AudioSource__set_volume(*(undefined4 *)(param_2 + 0x28),*plVar2,0);
      if (*plVar2 != 0) {
        UnityEngine_AudioSource__Play(*plVar2,0);
        return;
      }
    }
  }
LAB_0410d938:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

