// rea decompile_all
// name: IapAdsSystem.DataTrackingManager$$GetLogParamsFromDictString
// address: 0x730a140
// body: available
// range: 0x730a140-0x730a3c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x730a3a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730a3ac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730a3b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730a3b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730a3b8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730a3bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730a3c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730a3c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
IapAdsSystem_DataTrackingManager__GetLogParamsFromDictString(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_095204ad & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fed0);
    FUN_03f5c2a4(&DAT_09176c28);
    FUN_03f5c2a4(&DAT_091a6888);
    FUN_03f5c2a4(&DAT_091a6890);
    FUN_03f5c2a4(&DAT_091a6898);
    FUN_03f5c2a4(&DAT_091a98e8);
    FUN_03f5c2a4(&DAT_091a98f0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091facc8);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_095204ad = 1;
  }
  uVar6 = DAT_091f5700;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar3 = *(long **)(param_2 + 0x20);
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(DAT_09176c28 + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_09176c28 + 0x130) * 8 + -8) ==
        DAT_09176c28)) {
      FUN_06fd8888(&local_a8,plVar3,DAT_0919fed0);
      uStack_78 = puStack_a0;
      local_80 = local_a8;
      uStack_68 = uStack_90;
      local_70 = local_98;
      local_60 = local_88;
      puStack_a0 = &local_80;
      local_a8 = 0;
      while (uVar4 = FUN_072753d4(&local_80,DAT_091a6890), uVar2 = uStack_68, uVar1 = local_70,
            (uVar4 & 1) != 0) {
        lVar5 = FUN_03f5c394(DAT_091805f8,5);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined8 *)(lVar5 + 0x20) = uVar6;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x20),uVar6);
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined8 *)(lVar5 + 0x28) = uVar1;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x28),uVar1);
        if (*(uint *)(lVar5 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined8 *)(lVar5 + 0x30) = DAT_091facc8;
        thunk_FUN_03f5d7b8();
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined8 *)(lVar5 + 0x38) = uVar2;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x38),uVar2);
        if (*(uint *)(lVar5 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined8 *)(lVar5 + 0x40) = DAT_091f5a98;
        thunk_FUN_03f5d7b8();
        uVar6 = System_String__Concat(lVar5,0);
      }
      FUN_072754f4(&local_80,DAT_091a6888);
    }
  }
  return uVar6;
}

