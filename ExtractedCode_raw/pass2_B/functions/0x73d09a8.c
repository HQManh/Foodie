// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder.<>c__DisplayClass16_0$$<BuildDeserializeInternalDeserializeLoopIntKey>g__ForBody|0
// address: 0x73d09a8
// body: available
// range: 0x73d09a8-0x73d0e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d0e50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d0e54 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d0e68 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder_<>c__DisplayClass16_0__<BuildDeserializeInternalDeserializeLoopIntKey>g__ForBody_0
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  
  if ((DAT_09520cc5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183e88);
    FUN_03f5c2a4(&DAT_091ca878);
    FUN_03f5c2a4(&DAT_091cae50);
    FUN_03f5c2a4(&DAT_09179470);
    FUN_03f5c2a4(&DAT_09190410);
    FUN_03f5c2a4(&DAT_091b7060);
    FUN_03f5c2a4(&DAT_091b7068);
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_091e93f8);
    FUN_03f5c2a4(&DAT_091e9470);
    FUN_03f5c2a4(&DAT_09190398);
    DAT_09520cc5 = 1;
  }
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
    MessagePack_Internal_ILGeneratorExtensions__EmitLdloc(*(undefined8 *)(param_1 + 0x10),param_2,0)
    ;
    MessagePack_Internal_ILGeneratorExtensions__EmitStloc
              (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0);
    MessagePack_Internal_ILGeneratorExtensions__EmitLdloc
              (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0);
    plVar4 = *(long **)(param_1 + 0x10);
    if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188c40);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x220);
    if (*(int *)(DAT_09190398 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar6 = *(undefined8 **)(DAT_09190398 + 0xb8);
    lVar12 = puVar6[0x10];
    if (lVar12 == 0) {
      if (*(int *)(DAT_09190398 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar6 = *(undefined8 **)(DAT_09190398 + 0xb8);
      }
      uVar13 = *puVar6;
      lVar12 = thunk_FUN_03f9944c(DAT_09179470);
      FUN_05323e38(lVar12,uVar13,DAT_091e93f8,0);
      plVar5 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x80);
      *plVar5 = lVar12;
      thunk_FUN_03f5d7b8(plVar5,lVar12);
    }
    uVar10 = FUN_04af79fc(uVar10,lVar12,DAT_091ca878);
    uVar10 = FUN_04b0484c(uVar10,DAT_091cae50);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x208))(plVar4,uVar8,uVar10,*(undefined8 *)(*plVar4 + 0x210));
      plVar4 = *(long **)(param_1 + 0x10);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x268))
                  (plVar4,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(*plVar4 + 0x270));
        MessagePack_Internal_ArgumentField__EmitLdarg(param_1 + 0x30,0);
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        if (*(int *)(DAT_09190410 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        MessagePack_Internal_ILGeneratorExtensions__EmitCall
                  (uVar8,*(undefined8 *)(*(long *)(DAT_09190410 + 0xb8) + 0x28),0);
        plVar4 = *(long **)(param_1 + 0x10);
        if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x1f8))
                    (plVar4,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1b8),uVar2,
                     *(undefined8 *)(*plVar4 + 0x200));
          if (*(char *)(param_1 + 0x40) != '\0') {
            plVar4 = *(long **)(param_1 + 0x10);
            uVar3 = FUN_05c3177c((char *)(param_1 + 0x40),DAT_091b7068);
            if (plVar4 == (long *)0x0) goto LAB_073d0e50;
            (**(code **)(*plVar4 + 0x268))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x270));
            plVar4 = *(long **)(param_1 + 0x10);
            if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (plVar4 == (long *)0x0) goto LAB_073d0e50;
            (**(code **)(*plVar4 + 0x1f8))
                      (plVar4,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1b8),
                       *(undefined4 *)(param_1 + 0x28),*(undefined8 *)(*plVar4 + 0x200));
          }
          lVar12 = *(long *)(param_1 + 0x20);
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (0 < (int)uVar1) {
              uVar15 = 0;
              iVar7 = 0;
              do {
                if (uVar1 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar9 = *(long *)(lVar12 + (long)(int)uVar15 * 8 + 0x20);
                if (lVar9 == 0) goto LAB_073d0e50;
                if (*(long *)(lVar9 + 0x10) != 0) {
                  plVar4 = *(long **)(param_1 + 0x10);
                  if (plVar4 == (long *)0x0) goto LAB_073d0e50;
                  (**(code **)(*plVar4 + 0x268))
                            (plVar4,*(undefined4 *)(lVar9 + 0x28),*(undefined8 *)(*plVar4 + 0x270));
                  if (*(char *)(param_1 + 0x48) == '\0') {
                    if (iVar7 == 0x7fffffff) goto LAB_073d0e58;
                    uVar8 = *(undefined8 *)(param_1 + 0x70);
                    uVar10 = *(undefined8 *)(param_1 + 0x78);
                    uVar14 = *(undefined8 *)(param_1 + 0x10);
                    uVar13 = *(undefined8 *)(param_1 + 0x58);
                    if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalDeserializeValueAssignLocalVariable
                              (uVar14,lVar9,iVar7,uVar13,param_1 + 0x30,param_1 + 0x60,uVar8,uVar10,
                               0);
                  }
                  else {
                    if (iVar7 == 0x7fffffff) {
LAB_073d0e58:
                      uVar8 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar8,DAT_091e9470);
                    }
                    uVar8 = *(undefined8 *)(param_1 + 0x50);
                    uVar13 = *(undefined8 *)(param_1 + 0x58);
                    uVar10 = *(undefined8 *)(param_1 + 0x70);
                    uVar14 = *(undefined8 *)(param_1 + 0x78);
                    uVar11 = *(undefined8 *)(param_1 + 0x10);
                    if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalDeserializeValueAssignDirectly
                              (uVar8,uVar11,lVar9,iVar7,uVar13,param_1 + 0x30,param_1 + 0x60,uVar10,
                               uVar14,0);
                  }
                  plVar4 = *(long **)(param_1 + 0x10);
                  if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  if (plVar4 == (long *)0x0) goto LAB_073d0e50;
                  iVar7 = iVar7 + 1;
                  (**(code **)(*plVar4 + 0x1f8))
                            (plVar4,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1b8),uVar2,
                             *(undefined8 *)(*plVar4 + 0x200));
                }
                uVar1 = *(uint *)(lVar12 + 0x18);
                uVar15 = uVar15 + 1;
              } while ((int)uVar15 < (int)uVar1);
            }
            plVar4 = *(long **)(param_1 + 0x10);
            if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x073d0e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar4 + 0x268))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x270));
              return;
            }
          }
        }
      }
    }
  }
LAB_073d0e50:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

