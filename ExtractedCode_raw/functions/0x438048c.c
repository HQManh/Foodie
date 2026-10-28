// rea decompile_all
// name: CakeOrder.InGame.InGameBackgroundsControl$$ChangeTintColorBg
// address: 0x438048c
// body: available
// range: 0x438048c-0x438053f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4380528 to 0x4382144 CakeOrder.InGame.InGameSingleBackground$$InternalChangeTintColor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4380538 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438053c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_InGameBackgroundsControl__ChangeTintColorBg
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_5 + 0x28);
  *(undefined4 *)(param_5 + 0x78) = param_1;
  *(undefined4 *)(param_5 + 0x7c) = param_2;
  *(undefined4 *)(param_5 + 0x80) = param_3;
  *(undefined4 *)(param_5 + 0x84) = param_4;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar2 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_04380538;
        lVar2 = *(long *)(lVar2 + 0x60);
        if (lVar2 != 0) {
          uVar5 = *(undefined8 *)(param_5 + 0x78);
          *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(param_5 + 0x80);
          *(undefined8 *)(lVar2 + 0x50) = uVar5;
          CakeOrder_InGame_InGameSingleBackground__InternalChangeTintColor
                    (0,*(undefined4 *)(lVar2 + 0x78),lVar2,0);
        }
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    lVar3 = *(long *)(param_5 + 0x30);
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_5 + 0x78);
      uVar6 = *(undefined8 *)(param_5 + 0x4c);
      *(ulong *)(lVar3 + 0x58) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x80) >> 0x20) *
                    (float)((ulong)*(undefined8 *)(param_5 + 0x54) >> 0x20),
                    (float)*(undefined8 *)(param_5 + 0x80) * (float)*(undefined8 *)(param_5 + 0x54))
      ;
      *(ulong *)(lVar3 + 0x50) =
           CONCAT44((float)((ulong)uVar5 >> 0x20) * (float)((ulong)uVar6 >> 0x20),
                    (float)uVar5 * (float)uVar6);
      CakeOrder_InGame_InGameSingleBackground__InternalChangeTintColor
                (0,*(undefined4 *)(lVar3 + 0x78),lVar3,0);
      return;
    }
    return;
  }
LAB_04380538:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

