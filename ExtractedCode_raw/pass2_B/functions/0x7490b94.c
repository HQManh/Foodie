// rea decompile_all
// name: System.Runtime.Remoting.Lifetime.LeaseSink$$RenewLease
// address: 0x7490b94
// body: available
// range: 0x7490b94-0x7490e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7490e1c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7490e20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Lifetime_LeaseSink__RenewLease(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_095212fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185f70);
    FUN_03f5c2a4(&DAT_09189ed8);
    FUN_03f5c2a4(&DAT_0918a9d0);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_095212fd = 1;
  }
  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar1 = (long *)System_Runtime_Remoting_RemotingServices__GetMessageTargetIdentity(param_2,0);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_0918a9d0 + 0x130)) ||
     (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_0918a9d0 + 0x130) * 8 + -8) !=
      DAT_0918a9d0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0();
  }
  plVar1 = (long *)plVar1[0xd];
  if (plVar1 != (long *)0x0) {
    lVar5 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185f70) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07490ca0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185f70,0);
LAB_07490ca0:
    uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    lVar5 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185f70) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_07490d08;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185f70,2);
LAB_07490d08:
    uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar6 = System_TimeSpan__op_LessThan(uVar3,uVar4,0);
    if ((uVar6 & 1) != 0) {
      lVar5 = *plVar1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185f70) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_07490da0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185f70,2);
LAB_07490da0:
      uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      lVar5 = *plVar1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185f70) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_07490e00;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185f70,3);
LAB_07490e00:
                    /* WARNING: Could not recover jumptable at 0x07490e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar1,uVar3,puVar2[1]);
      return;
    }
  }
  return;
}

