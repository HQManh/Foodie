// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView$$LooksOf
// address: 0x420d894
// body: available
// range: 0x420d894-0x420da5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420da58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x420da5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_CustomerLineView__LooksOf(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  
  if ((DAT_09516c49 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091aeca0);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091aec98);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_0917c838);
    DAT_09516c49 = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  lVar3 = thunk_FUN_03f9944c(DAT_0917c838);
  FUN_057992c4(lVar3,uVar2,DAT_091aec98);
  FUN_05797d74(&local_68,param_2,DAT_091adcc0);
  while( true ) {
    uVar4 = FUN_071ad7a4(&local_68,DAT_091a34d8);
    if ((uVar4 & 1) == 0) {
      FUN_071ad7a0(&local_68,DAT_091a34d0);
      return lVar3;
    }
    lVar5 = *(long *)(param_1 + 0x158);
    if (lVar5 == 0) {
      uVar2 = 0;
      lVar5 = DAT_091aeca0;
    }
    else {
      uVar2 = (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),local_58 & 0xffffffff,
                         *(undefined8 *)(lVar5 + 0x28));
      lVar5 = DAT_091aeca0;
    }
    DAT_091aeca0 = lVar5;
    if (lVar3 == 0) break;
    lVar6 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
    }
    else {
      FUN_05799adc(lVar3,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

