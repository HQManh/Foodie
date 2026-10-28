// rea decompile_all
// name: System.Runtime.Remoting.Messaging.StackBuilderSink$$ExecuteAsyncMessage
// address: 0x74aa02c
// body: available
// range: 0x74aa02c-0x74aa22f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74aa210 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74aa214 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74aa220 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74aa22c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_StackBuilderSink__ExecuteAsyncMessage
               (long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  
  if ((DAT_095213dd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186090);
    FUN_03f5c2a4(&DAT_091860a0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189ed8);
    DAT_095213dd = 1;
  }
  uVar5 = DAT_09180318;
  if (param_2 == 0) {
LAB_074aa210:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = thunk_FUN_03f99350(param_2,DAT_09180318);
  lVar8 = DAT_091860a0;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_2,uVar5);
  }
  uVar7 = (ulong)*(uint *)(lVar1 + 0x18);
  if (uVar7 != 0) {
    lVar10 = *(long *)(lVar1 + 0x20);
    if (lVar10 == 0) {
      lVar2 = 0;
      lVar8 = lVar1;
    }
    else {
      lVar2 = thunk_FUN_03f99350(lVar10,DAT_091860a0);
      if (lVar2 == 0) goto LAB_074aa228;
      uVar7 = *(ulong *)(lVar1 + 0x18);
      lVar8 = lVar2;
    }
    if ((uVar7 & 0xfffffffe) != 0) {
      lVar10 = *(long *)(lVar1 + 0x28);
      System_Runtime_Remoting_Messaging_StackBuilderSink__CheckParameters(lVar8,lVar2);
      lVar8 = DAT_09186090;
      plVar3 = *(long **)(param_1 + 0x18);
      if (plVar3 == (long *)0x0) {
        if (lVar10 == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = (long *)thunk_FUN_03f99350(lVar10,DAT_09186090);
          if (plVar4 == (long *)0x0) goto LAB_074aa228;
        }
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Runtime_Remoting_RemotingServices__InternalExecuteMessage(uVar5,lVar2,0);
      }
      else {
        if (lVar10 == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = (long *)thunk_FUN_03f99350(lVar10,DAT_09186090);
          if (plVar4 == (long *)0x0) {
LAB_074aa228:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar10,lVar8);
          }
          plVar3 = *(long **)(param_1 + 0x18);
          if (plVar3 == (long *)0x0) goto LAB_074aa210;
        }
        uVar5 = (**(code **)(*plVar3 + 0x188))(plVar3,lVar2,*(undefined8 *)(*plVar3 + 400));
      }
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09186090) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_074aa1f0;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09186090,0);
LAB_074aa1f0:
                    /* WARNING: Could not recover jumptable at 0x074aa20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar6)(plVar4,uVar5,puVar6[1]);
        return;
      }
      goto LAB_074aa210;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

