// rea decompile_all
// name: MessagePack.MessagePackSerializer$$LZ4Operation
// address: 0x7391900
// body: available
// range: 0x7391900-0x7391c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7391b60 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7391bbc to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7391c40 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7391c44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7391c48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
MessagePack_MessagePackSerializer__LZ4Operation
          (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined8 local_70;
  long *plStack_68;
  undefined1 local_60 [16];
  long local_48;
  
  if ((DAT_09520ae1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_091c4268);
    FUN_03f5c2a4(&DAT_091d2f08);
    FUN_03f5c2a4(&DAT_091d3638);
    FUN_03f5c2a4(&DAT_091b9650);
    FUN_03f5c2a4(&DAT_091b9710);
    FUN_03f5c2a4(&DAT_091b9718);
    FUN_03f5c2a4(&DAT_091b9720);
    FUN_03f5c2a4(&DAT_0917e560);
    FUN_03f5c2a4(&DAT_091ba938);
    FUN_03f5c2a4(&DAT_091ba930);
    DAT_09520ae1 = 1;
  }
  local_48 = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*param_1 == param_1[1]) {
    if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60 = FUN_05fdc42c(param_1,DAT_091b9710);
    auVar7 = FUN_04a6d544(local_60,DAT_091b9650);
LAB_07391bd0:
    plStack_68 = &local_48;
    local_70 = 0;
    if (param_4 != 0) {
      uVar1 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),auVar7._0_8_,auVar7._8_8_,param_2,param_3,
                         *(undefined8 *)(param_4 + 0x28));
      FUN_03eaae2c(&local_70);
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(DAT_09175020 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = DAT_09197190;
  lVar2 = *(long *)(DAT_09197190 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(lVar3 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  plVar6 = (long *)**(undefined8 **)(lVar3 + 0xb8);
  if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0917e560);
  }
  lVar3 = FUN_05fdc318(param_1,DAT_091b9720);
  if (lVar3 < 0x80000000) {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = (**(code **)(*plVar6 + 0x178))(plVar6,lVar3,*(undefined8 *)(*plVar6 + 0x180));
    local_48 = lVar3;
    auVar7 = FUN_0610892c(lVar3,DAT_091ba938);
    FUN_04a6dbe8(param_1,auVar7._0_8_,auVar7._8_8_,DAT_091c4268);
    uVar4 = FUN_05fdc318(param_1,DAT_091b9720);
    if ((long)uVar4 < 0x80000000) {
      if (*(long *)(DAT_091d2f08 + 0x38) == 0) {
        FUN_03f95ac8();
      }
      if (lVar3 == 0) {
        if ((uint)uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        lVar3 = 0;
        uVar4 = 0;
      }
      else {
        if (*(uint *)(lVar3 + 0x18) < (uint)uVar4) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        lVar3 = lVar3 + 0x20;
        uVar4 = uVar4 & 0xffffffff;
      }
      auVar7 = FUN_06108530(lVar3,uVar4,DAT_091ba930);
      goto LAB_07391bd0;
    }
  }
  uVar5 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,DAT_091d3638);
}

