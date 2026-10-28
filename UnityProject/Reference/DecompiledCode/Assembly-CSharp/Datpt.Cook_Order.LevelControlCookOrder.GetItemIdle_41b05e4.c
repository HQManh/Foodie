// rea decompile_all
// name: Datpt.Cook_Order.LevelControlCookOrder$$GetItemIdle
// address: 0x41b05e4
// body: available
// range: 0x41b05e4-0x41b071f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b0718 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b071c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Datpt_Cook_Order_LevelControlCookOrder__GetItemIdle
               (undefined1 param_1 [16],undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((DAT_095168e8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5588);
    FUN_03f5c2a4(&DAT_09189078);
    DAT_095168e8 = 1;
  }
  uVar6 = Datpt_Cook_Order_LevelControlCookOrder__GetPoint(param_3);
  if (DAT_09515ce8 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce8 = '\x01';
  }
  uVar7 = **(undefined4 **)(DAT_0918cb68 + 0xb8);
  uVar8 = (*(undefined4 **)(DAT_0918cb68 + 0xb8))[1];
  if (*(int *)(DAT_09189078 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = UnityEngine_Physics2D__RaycastAll(uVar6,param_2,uVar7,uVar8,0);
  if (lVar1 == 0) {
LAB_041b0718:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
    uVar5 = 0;
    lVar4 = lVar1 + 0x20;
    uVar3 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
    do {
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar2 = UnityEngine_RaycastHit2D__get_collider(lVar4,0);
      if (lVar2 == 0) goto LAB_041b0718;
      lVar2 = FUN_04a6a14c(lVar2,DAT_091c5588);
      if (lVar2 != 0) {
        return lVar2;
      }
      uVar3 = (ulong)*(uint *)(lVar1 + 0x18);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x24;
    } while ((long)uVar5 < (long)(int)*(uint *)(lVar1 + 0x18));
  }
  return 0;
}

