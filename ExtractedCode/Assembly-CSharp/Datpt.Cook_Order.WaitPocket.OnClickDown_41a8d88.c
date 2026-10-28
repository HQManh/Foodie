// rea decompile_all
// name: Datpt.Cook_Order.WaitPocket$$OnClickDown
// address: 0x41a8d88
// body: available
// range: 0x41a8d88-0x41a8fdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a8fd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_WaitPocket__OnClickDown(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  
  if ((DAT_09516896 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d96f0);
    FUN_03f5c2a4(&DAT_091bb168);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd28);
    FUN_03f5c2a4(&DAT_091def98);
    DAT_09516896 = 1;
  }
  piVar4 = (int *)(param_1 + 0x3c);
  if (*piVar4 < 1) {
    return;
  }
  uVar1 = UnityEngine_Component__get_transform(param_1,0);
  if (DAT_09515cf3 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515cf3 = '\x01';
  }
  uVar5 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
  uVar1 = DG_Tweening_ShortcutExtensions__DOPunchScale
                    ((float)uVar5 * 0.1,(float)((ulong)uVar5 >> 0x20) * 0.1,
                     *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14) * 0.1,0x3e4ccccd,0x3f800000,
                     uVar1,10,0);
  uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
  DG_Tweening_TweenCallback___ctor(uVar5,param_1,DAT_091def98,0);
  FUN_04d956bc(uVar1,uVar5,DAT_091dbd28);
  lVar2 = Datpt_Cook_Order_SoundControl__get_Ins(0);
  if (lVar2 != 0) {
    FUN_04d59cfc(lVar2,3,0,DAT_091d96f0);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (plVar3 = (long *)FUN_061a18e8(*(long *)(param_1 + 0x40),DAT_091bb168), plVar3 != (long *)0x0
       )) {
      (**(code **)(*plVar3 + 0x428))(plVar3,1,*(undefined8 *)(*plVar3 + 0x430));
      (**(code **)(*plVar3 + 0x488))(plVar3,0,0,*(undefined8 *)(*plVar3 + 0x490));
      lVar2 = UnityEngine_Component__get_transform(plVar3,0);
      if (lVar2 != 0) {
        UnityEngine_Transform__SetParent(lVar2,0,0);
        uVar1 = UnityEngine_Component__get_transform(plVar3,0);
        DG_Tweening_ShortcutExtensions__DOScale(0x3f800000,0x3e4ccccd,uVar1,0);
        lVar2 = *(long *)(param_1 + 0x30);
        uVar1 = System_Int32__ToString(piVar4,0);
        if (lVar2 != 0) {
          UnityEngine_TextMesh__set_text(lVar2,uVar1,0);
          if (0 < *piVar4) {
            return;
          }
          *(undefined4 *)(param_1 + 0x38) = 0;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

