// rea decompile_all
// name: AnhPD.Home.UIHomeMapSection$$Unlock
// address: 0x41d3788
// body: available
// range: 0x41d3788-0x41d391f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d3918 to 0x4546078 DG.Tweening.ShortcutExtensions$$DOPunchScale (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41d391c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_Home_UIHomeMapSection__Unlock(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x70),0,0);
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x78),0), lVar1 != 0)) {
      UnityEngine_GameObject__SetActive(lVar1,1,0);
      if (*(long *)(param_1 + 0x60) != 0) {
        UnityEngine_Behaviour__set_enabled(*(long *)(param_1 + 0x60),1,0);
        plVar2 = *(long **)(param_1 + 0x48);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar2,
                     *(undefined8 *)(*plVar2 + 0x2b0));
          plVar2 = *(long **)(param_1 + 0x50);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x2a8))
                      (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar2,
                       *(undefined8 *)(*plVar2 + 0x2b0));
            plVar2 = *(long **)(param_1 + 0x58);
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x2a8))
                        (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar2,
                         *(undefined8 *)(*plVar2 + 0x2b0));
              if (*(long *)(param_1 + 0x60) != 0) {
                ChocDino_UIFX_OutlineFilter__set_Color
                          (0x3f800000,0x3f800000,0x3f800000,0x3f800000,*(long *)(param_1 + 0x60),0);
                plVar2 = *(long **)(param_1 + 0x48);
                if (plVar2 != (long *)0x0) {
                  (**(code **)(*plVar2 + 0x2c8))(plVar2,1,*(undefined8 *)(*plVar2 + 0x2d0));
                  uVar3 = UnityEngine_Component__get_transform(param_1,0);
                  if (DAT_09515cf3 == '\0') {
                    FUN_03f5c2a4(&DAT_0918cbd0);
                    DAT_09515cf3 = '\x01';
                  }
                  uVar4 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
                  DG_Tweening_ShortcutExtensions__DOPunchScale
                            ((float)uVar4 * 0.1,(float)((ulong)uVar4 >> 0x20) * 0.1,
                             *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14) * 0.1,0x3e99999a,
                             0x3f800000,uVar3,10,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

