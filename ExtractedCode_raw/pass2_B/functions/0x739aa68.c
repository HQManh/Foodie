// rea decompile_all
// name: MessagePack.MessagePackSerializer.CompiledMethods.<>c__DisplayClass16_0$$<GetMethod>b__0
// address: 0x739aa68
// body: available
// range: 0x739aa68-0x739ac27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x739ac20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739ac24 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_MessagePackSerializer_CompiledMethods_<>c__DisplayClass16_0__<GetMethod>b__0
          (long param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_09520b16 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f3320);
    DAT_09520b16 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_0739ac20:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
  uVar2 = System_String__op_Inequality(uVar7,uVar1,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = (**(code **)(*param_2 + 600))(param_2,*(undefined8 *)(*param_2 + 0x260));
    if ((lVar3 == 0) || (*(long *)(param_1 + 0x18) == 0)) goto LAB_0739ac20;
    if (*(int *)(lVar3 + 0x18) == *(int *)(*(long *)(param_1 + 0x18) + 0x18)) {
      if (0 < *(int *)(lVar3 + 0x18)) {
        lVar8 = 4;
        do {
          lVar6 = *(long *)(param_1 + 0x18);
          if (lVar6 == 0) goto LAB_0739ac20;
          uVar2 = lVar8 - 4;
          if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_0739ac24;
          uVar1 = *(undefined8 *)(lVar6 + lVar8 * 8);
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = System_Type__op_Equality(uVar1,0,0);
          if ((uVar4 & 1) == 0) {
LAB_0739ab8c:
            if (*(uint *)(lVar3 + 0x18) <= uVar2) {
LAB_0739ac24:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar5 = *(long **)(lVar3 + lVar8 * 8);
            if (plVar5 == (long *)0x0) goto LAB_0739ac20;
            uVar1 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
            lVar6 = *(long *)(param_1 + 0x18);
            if (lVar6 == 0) goto LAB_0739ac20;
            if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_0739ac24;
            uVar7 = *(undefined8 *)(lVar6 + lVar8 * 8);
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = System_Type__op_Inequality(uVar1,uVar7,0);
            if ((uVar2 & 1) != 0) {
              return 0;
            }
          }
          else {
            if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_0739ac24;
            plVar5 = *(long **)(lVar3 + lVar8 * 8);
            if ((plVar5 == (long *)0x0) ||
               (plVar5 = (long *)(**(code **)(*plVar5 + 0x1e8))
                                           (plVar5,*(undefined8 *)(*plVar5 + 0x1f0)),
               plVar5 == (long *)0x0)) goto LAB_0739ac20;
            uVar4 = (**(code **)(*plVar5 + 0x3b8))(plVar5,*(undefined8 *)(*plVar5 + 0x3c0));
            if ((uVar4 & 1) == 0) goto LAB_0739ab8c;
          }
          lVar6 = lVar8 + -3;
          lVar8 = lVar8 + 1;
        } while (lVar6 < *(int *)(lVar3 + 0x18));
      }
      return 1;
    }
  }
  return 0;
}

