// rea decompile_all
// name: Datpt.Cook_Order.CreamOnOrderConfig$$GetListIngreType
// address: 0x41b5f54
// body: available
// range: 0x41b5f54-0x41b61eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b61e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b61e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Datpt_Cook_Order_CreamOnOrderConfig__GetListIngreType(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong local_38;
  
  if ((DAT_09516946 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2b10);
    FUN_03f5c2a4(&DAT_091a2b18);
    FUN_03f5c2a4(&DAT_091a2b20);
    FUN_03f5c2a4(&DAT_091ac7d8);
    FUN_03f5c2a4(&DAT_091ac7f8);
    FUN_03f5c2a4(&DAT_091ac7d0);
    FUN_03f5c2a4(&DAT_0917c0d8);
    DAT_09516946 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917c0d8);
  FUN_0579924c(lVar3,DAT_091ac7d0);
  lVar6 = DAT_091ac7d8;
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + 0x10);
    uVar1 = *param_1;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar2 = *(uint *)(lVar3 + 0x18);
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar2 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_05799adc(lVar3,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar6 = DAT_091ac7d8;
        lVar5 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_041b61e8;
      }
      uVar2 = *(uint *)(lVar3 + 0x18);
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar2 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20) = 4;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_05799adc(lVar3,4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar6 = DAT_091ac7d8;
        lVar5 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_041b61e8;
      }
      uVar2 = *(uint *)(lVar3 + 0x18);
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar2 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20) = 5;
      }
      else {
        FUN_05799adc(lVar3,5,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      if (*(long *)(param_1 + 2) != 0) {
        FUN_0579a6a8(&local_48,*(long *)(param_1 + 2),DAT_091ac7f8);
        while( true ) {
          uVar4 = FUN_071aef5c(&local_48,DAT_091a2b18);
          lVar6 = DAT_091ac7d8;
          if ((uVar4 & 1) == 0) {
            FUN_071aef58(&local_48,DAT_091a2b10);
            return lVar3;
          }
          lVar5 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar5 == 0) break;
          uVar2 = *(uint *)(lVar3 + 0x18);
          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20) = (undefined4)local_38;
          }
          else {
            FUN_05799adc(lVar3,local_38 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
LAB_041b61e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

