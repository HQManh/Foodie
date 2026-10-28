// rea decompile_all
// name: CakeOrder.Boot.GameSystemInitializer.<IEInitializationSequence>d__15$$MoveNext
// address: 0x4300130
// body: available
// range: 0x4300130-0x430023b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4300238 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_Boot_GameSystemInitializer_<IEInitializationSequence>d__15__MoveNext(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_09517542 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9e08);
    DAT_09517542 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x20);
  if (uVar1 < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) {
LAB_04300238:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = FUN_06076f48(*(long *)(lVar2 + 0x20),DAT_091b9e08);
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    if ((uVar3 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  else {
    if (uVar1 != 2) {
      if (uVar1 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (lVar2 == 0) goto LAB_04300238;
        lVar5 = *(long *)(param_1 + 0x28);
        *(undefined1 *)(lVar2 + 0x40) = 1;
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        }
      }
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar2 == 0) goto LAB_04300238;
    uVar4 = CakeOrder_Boot_GameSystemInitializer__IEInitializeLiveOps();
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar4);
    *(undefined4 *)(param_1 + 0x10) = 3;
  }
  return 1;
}

