// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder.<>c__DisplayClass17_0$$<BuildDeserializeInternalDeserializeLoopStringKey>g__ForBody|0
// address: 0x73d0e74
// body: available
// range: 0x73d0e74-0x73d10e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d10e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder_<>c__DisplayClass17_0__<BuildDeserializeInternalDeserializeLoopStringKey>g__ForBody_0
               (long param_1)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((DAT_09520cc6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174460);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09183e88);
    FUN_03f5c2a4(&DAT_09190410);
    FUN_03f5c2a4(&DAT_091e9480);
    FUN_03f5c2a4(&DAT_091e9488);
    FUN_03f5c2a4(&DAT_091e9490);
    FUN_03f5c2a4(&DAT_091903c0);
    DAT_09520cc6 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_091903c0);
  System_Object___ctor(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar4 + 0x18),param_1);
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
      *(undefined4 *)(lVar4 + 0x14) = uVar3;
      plVar5 = *(long **)(param_1 + 0x10);
      if (plVar5 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
        *(undefined4 *)(lVar4 + 0x10) = uVar3;
        MessagePack_Internal_ArgumentField__EmitLdarg(param_1 + 0x18,0);
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        MessagePack_Internal_ILGeneratorExtensions__EmitCall
                  (uVar9,*(undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x28),0);
        MessagePack_Internal_ILGeneratorExtensions__EmitStloc
                  (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28),0);
        lVar1 = *(long *)(param_1 + 0x70);
        uVar9 = *(undefined8 *)(param_1 + 0x78);
        cVar2 = *(char *)(param_1 + 0x68);
        uVar10 = *(undefined8 *)(param_1 + 0x10);
        uVar11 = *(undefined8 *)(param_1 + 0x28);
        uVar6 = thunk_FUN_03f9944c(DAT_09174460);
        if (cVar2 == '\0') {
          puVar8 = &DAT_091e9488;
        }
        else {
          puVar8 = &DAT_091e9480;
        }
        FUN_070a1df0(uVar6,lVar4,*puVar8,0);
        uVar7 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar7,lVar4,DAT_091e9490,0);
        if (lVar1 != 0) {
          MessagePack_Internal_AutomataDictionary__EmitMatch
                    (lVar1,uVar10,uVar11,uVar9,uVar6,uVar7,0);
          plVar5 = *(long **)(param_1 + 0x10);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x268))
                      (plVar5,*(undefined4 *)(lVar4 + 0x14),*(undefined8 *)(*plVar5 + 0x270));
            MessagePack_Internal_ArgumentField__EmitLdarg(param_1 + 0x18,0);
            uVar9 = *(undefined8 *)(param_1 + 0x10);
            if (*(int *)(DAT_09190410 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            MessagePack_Internal_ILGeneratorExtensions__EmitCall
                      (uVar9,*(undefined8 *)(*(long *)(DAT_09190410 + 0xb8) + 0x28),0);
            plVar5 = *(long **)(param_1 + 0x10);
            if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x073d10e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar5 + 0x268))
                        (plVar5,*(undefined4 *)(lVar4 + 0x10),*(undefined8 *)(*plVar5 + 0x270));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

