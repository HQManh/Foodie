// rea decompile_all
// name: SimpleCheat$$Row
// address: 0x407a69c
// body: available
// range: 0x407a69c-0x407a88b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407a884 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x407a888 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
SimpleCheat__Row(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_44;
  
  local_44 = param_1;
  if ((DAT_09515c34 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c01c8);
    FUN_03f5c2a4(&DAT_0917ff68);
    FUN_03f5c2a4(&DAT_091f5a98);
    DAT_09515c34 = 1;
  }
  lVar2 = DAT_091c01c8;
  lVar5 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar5 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar5 = *(long *)(lVar2 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar2 + 0xb8),0);
  uVar3 = System_Single__ToString(&local_44,param_5,0);
  uVar3 = System_String__Concat(param_4,DAT_091f5a98,uVar3,0);
  lVar2 = FUN_03f5c394(DAT_0917ff68,1);
  uVar4 = UnityEngine_GUILayout__Width(0x43020000,0);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = uVar4;
      thunk_FUN_03f5d7b8();
      UnityEngine_GUILayout__Label(uVar3,lVar2,0);
      uVar1 = local_44;
      lVar2 = DAT_091c01c8;
      lVar5 = *(long *)(DAT_091c01c8 + 0x38);
      if (lVar5 == 0) {
        FUN_03f95ac8(DAT_091c01c8);
        lVar5 = *(long *)(lVar2 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      local_44 = UnityEngine_GUILayout__HorizontalSlider
                           (uVar1,param_2,param_3,**(undefined8 **)(lVar2 + 0xb8),0);
      UnityEngine_GUILayout__EndHorizontal(0);
      return local_44;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

