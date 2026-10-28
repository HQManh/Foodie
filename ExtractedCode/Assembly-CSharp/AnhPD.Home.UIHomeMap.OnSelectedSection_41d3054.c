// rea decompile_all
// name: AnhPD.Home.UIHomeMap$$OnSelectedSection
// address: 0x41d3054
// body: available
// range: 0x41d3054-0x41d31eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d31e0 to 0x4257cd0 CakeOrder.AudioManagerCakeOrder$$Play (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41d31e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d31e8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_Home_UIHomeMap__OnSelectedSection(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_09516a43 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b48d0);
    DAT_09516a43 = 1;
  }
  if (param_2 != 0) {
    AnhPD_Home_UIHomeMap__CalScrollRate(param_1,*(undefined4 *)(param_2 + 0xa0));
    AnhPD_Home_UIHomeMap__MoveTo(param_1);
    uVar2 = System_String__op_Equality
                      (*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0xa8),0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0xa8);
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x68));
    lVar4 = *(long *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0xa0);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        lVar5 = 0;
        do {
          if (uVar1 <= (uint)lVar5) goto LAB_041d31e8;
          lVar3 = *(long *)(lVar4 + 0x20 + lVar5 * 8);
          if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x68), lVar3 == 0)) goto LAB_041d31e4;
          UnityEngine_Behaviour__set_enabled(lVar3,0,0);
          uVar1 = *(uint *)(lVar4 + 0x18);
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < (int)uVar1);
      }
      uVar1 = *(uint *)(param_2 + 0xa0);
      lVar4 = *(long *)(param_1 + 0x60);
      *(uint *)(param_1 + 0x70) = uVar1;
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) <= uVar1) {
LAB_041d31e8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar4 = *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x68), lVar4 != 0)) {
          UnityEngine_Behaviour__set_enabled(lVar4,1,0);
          lVar4 = *(long *)(param_1 + 0x78);
          if (lVar4 != 0) {
            (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(param_2 + 0xa8),
                       *(undefined8 *)(lVar4 + 0x28));
          }
          lVar4 = *(long *)(DAT_091b48d0 + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          if (**(long **)(lVar4 + 0xb8) != 0) {
            CakeOrder_AudioManagerCakeOrder__Play(**(long **)(lVar4 + 0xb8),1,0);
            return;
          }
        }
      }
    }
  }
LAB_041d31e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

