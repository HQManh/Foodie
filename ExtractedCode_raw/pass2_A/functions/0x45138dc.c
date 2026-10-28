// rea decompile_all
// name: Utilities.DraggableRigidbody2D$$Awake
// address: 0x45138dc
// body: available
// range: 0x45138dc-0x45139ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45139fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DraggableRigidbody2D__Awake(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  
  if ((DAT_09518551 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09181e18);
    FUN_03f5c2a4(&DAT_091c5448);
    FUN_03f5c2a4(&DAT_091c8828);
    DAT_09518551 = 1;
  }
  uVar2 = DAT_09180e78;
  *(undefined1 *)(param_3 + 0x98) = 0;
  uVar2 = thunk_FUN_03f9944c(uVar2);
  System_Action___ctor(uVar2,param_3,DAT_091c8828,0);
  uVar3 = thunk_FUN_03f9944c(DAT_09181e18);
  Utilities_BoolModifierWithRegisteredSource___ctor(uVar3,uVar2,0);
  *(undefined8 *)(param_3 + 0x90) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0x90),uVar3);
  lVar4 = FUN_04a6a14c(param_3,DAT_091c5448);
  plVar5 = (long *)(param_3 + 0x20);
  *plVar5 = lVar4;
  thunk_FUN_03f5d7b8(plVar5,lVar4);
  if (*plVar5 != 0) {
    uVar6 = UnityEngine_Rigidbody2D__get_centerOfMass(*plVar5,0);
    *(undefined4 *)(param_3 + 0x58) = uVar6;
    *(undefined4 *)(param_3 + 0x5c) = param_2;
    if (*(long *)(param_3 + 0x20) != 0) {
      bVar1 = UnityEngine_Rigidbody2D__get_freezeRotation(*(long *)(param_3 + 0x20),0);
      *(byte *)(param_3 + 0x99) = bVar1 & 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

