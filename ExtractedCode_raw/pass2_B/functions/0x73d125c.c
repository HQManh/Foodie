// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder.<>c__DisplayClass17_1$$<BuildDeserializeInternalDeserializeLoopStringKey>g__OnFoundAssignLocalVariable|2
// address: 0x73d125c
// body: available
// range: 0x73d125c-0x73d13bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d13b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d13bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder_<>c__DisplayClass17_1__<BuildDeserializeInternalDeserializeLoopStringKey>g__OnFoundAssignLocalVariable_2
               (long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_09520cc8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183e88);
    FUN_03f5c2a4(&DAT_091a9820);
    FUN_03f5c2a4(&DAT_09188c40);
    DAT_09520cc8 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if ((lVar7 != 0) && (lVar4 = *(long *)(lVar7 + 0x30), lVar4 != 0)) {
    if (*(uint *)(lVar4 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)param_3 * 8 + 0x20);
    if (lVar4 != 0) {
      plVar5 = *(long **)(lVar7 + 0x10);
      if (*(long *)(lVar4 + 0x10) == 0) {
        if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (plVar5 != (long *)0x0) {
          lVar7 = *plVar5;
          uVar3 = *(undefined4 *)(param_1 + 0x14);
LAB_073d1390:
                    /* WARNING: Could not recover jumptable at 0x073d13b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar7 + 0x1f8))
                    (plVar5,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1b8),uVar3,
                     *(undefined8 *)(lVar7 + 0x200));
          return;
        }
      }
      else {
        uVar1 = *(undefined8 *)(lVar7 + 0x58);
        uVar2 = *(undefined8 *)(lVar7 + 0x60);
        uVar6 = *(undefined8 *)(lVar7 + 0x40);
        if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalDeserializeValueAssignLocalVariable
                  (plVar5,lVar4,param_3,uVar6,lVar7 + 0x18,lVar7 + 0x48,uVar1,uVar2,0);
        if (*(long *)(param_1 + 0x18) != 0) {
          plVar5 = *(long **)(*(long *)(param_1 + 0x18) + 0x10);
          if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (plVar5 != (long *)0x0) {
            lVar7 = *plVar5;
            uVar3 = *(undefined4 *)(param_1 + 0x10);
            goto LAB_073d1390;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

