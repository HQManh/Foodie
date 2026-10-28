// rea decompile_all
// name: System.Runtime.Remoting.RemotingServices$$GetMessageTargetIdentity
// address: 0x748aa04
// body: available
// range: 0x748aa04-0x748acf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748acb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748acc0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748accc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748acd4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748acd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748ace4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748acf0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748acf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0748acd0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * System_Runtime_Remoting_RemotingServices__GetMessageTargetIdentity(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  char local_34 [4];
  
  if ((DAT_095212ad & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185ee0);
    FUN_03f5c2a4(&DAT_091860a8);
    FUN_03f5c2a4(&DAT_09189ed8);
    FUN_03f5c2a4(&DAT_0918a9d0);
    DAT_095212ad = 1;
  }
  local_34[0] = '\0';
  lVar1 = thunk_FUN_03f99350(param_1,DAT_09185ee0);
  lVar7 = DAT_09185ee0;
  if (lVar1 != 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = thunk_FUN_03f99350(param_1,DAT_09185ee0);
    lVar1 = DAT_09185ee0;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_1,lVar7);
    }
    plVar3 = (long *)thunk_FUN_03f99350(param_1,DAT_09185ee0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_1,lVar1);
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar1) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0748abb8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,lVar1,0);
LAB_0748abb8:
                    /* WARNING: Could not recover jumptable at 0x0748abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    return plVar3;
  }
  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_34[0] = '\0';
  uVar5 = **(undefined8 **)(DAT_09189ed8 + 0xb8);
  System_Threading_Monitor__Enter(uVar5,local_34,0);
  lVar7 = DAT_091860a8;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar2 = thunk_FUN_03f99350(param_1,DAT_091860a8);
  lVar1 = DAT_091860a8;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_1,lVar7);
  }
  plVar3 = (long *)thunk_FUN_03f99350(param_1,DAT_091860a8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_1,lVar1);
  }
  lVar7 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar1) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
        goto LAB_0748abe4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,lVar1,7);
LAB_0748abe4:
  uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = System_Runtime_Remoting_RemotingServices__GetNormalizedUri(uVar6);
  plVar3 = (long *)**(long **)(DAT_09189ed8 + 0xb8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(0,uVar6);
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x308))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0x310));
  if (plVar3 != (long *)0x0) {
    if (*(byte *)(DAT_0918a9d0 + 0x130) <= *(byte *)(*plVar3 + 0x130)) {
      if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_0918a9d0 + 0x130) * 8 + -8) !=
          DAT_0918a9d0) {
        plVar3 = (long *)0x0;
      }
      goto LAB_0748ac80;
    }
  }
  plVar3 = (long *)0x0;
LAB_0748ac80:
  if (local_34[0] != '\0') {
    System_Threading_Monitor__Exit(uVar5,0);
  }
  return plVar3;
}

