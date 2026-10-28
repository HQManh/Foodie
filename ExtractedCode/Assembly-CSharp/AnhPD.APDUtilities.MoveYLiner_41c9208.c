// rea decompile_all
// name: AnhPD.APDUtilities$$MoveYLiner
// address: 0x41c9208
// body: available
// range: 0x41c9208-0x41c93bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c93b4 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41c93b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_APDUtilities__MoveYLiner
               (float param_1,float param_2,undefined4 param_3,long param_4,byte param_5,
               undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  
  fVar6 = param_2;
  if ((DAT_095169f1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd10);
    FUN_03f5c2a4(&DAT_091dbe48);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091e12d0);
    FUN_03f5c2a4(&DAT_0918df90);
    DAT_095169f1 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918df90);
  AnhPD_APDUtilities_<>c__DisplayClass2_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar5 = (long *)(lVar1 + 0x10);
    *plVar5 = param_4;
    thunk_FUN_03f5d7b8(plVar5,param_4);
    *(undefined8 *)(lVar1 + 0x20) = param_6;
    *(byte *)(lVar1 + 0x18) = param_5 & 1;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20),param_6);
    if ((*plVar5 != 0) && (lVar2 = UnityEngine_Component__get_gameObject(*plVar5,0), lVar2 != 0)) {
      UnityEngine_GameObject__SetActive(lVar2,1,0);
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        UnityEngine_Transform__get_localPosition(lVar2,0);
        uVar3 = DG_Tweening_ShortcutExtensions__DOLocalMoveY(fVar6 + param_1,param_2,lVar2,0,0);
        uVar3 = FUN_04d95e8c(uVar3,1,DAT_091dbeb0);
        uVar3 = FUN_04d95c7c(param_3,uVar3,DAT_091dbe48);
        uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar4,lVar1,DAT_091e12d0,0);
        FUN_04d956bc(uVar3,uVar4,DAT_091dbd10);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

