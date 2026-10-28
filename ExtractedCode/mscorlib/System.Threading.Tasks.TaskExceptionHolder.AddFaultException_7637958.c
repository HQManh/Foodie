// rea decompile_all
// name: System.Threading.Tasks.TaskExceptionHolder$$AddFaultException
// address: 0x7637958
// body: available
// range: 0x7637958-0x7637dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7637d5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7637d60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7637d64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7637d68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7637dc4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7637dcc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07637dc8) */

void System_Threading_Tasks_TaskExceptionHolder__AddFaultException(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  
  if ((DAT_09522234 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091842b8);
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a4c0);
    FUN_03f5c2a4(&DAT_0917a4c8);
    FUN_03f5c2a4(&DAT_0917ab70);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b45a0);
    FUN_03f5c2a4(&DAT_0917d9c0);
    FUN_03f5c2a4(&DAT_091b45c8);
    FUN_03f5c2a4(&DAT_091b45c0);
    FUN_03f5c2a4(&DAT_091b45d0);
    DAT_09522234 = 1;
  }
  plVar9 = (long *)(param_1 + 0x18);
  lVar8 = *plVar9;
  thunk_FUN_03f6a5cc();
  if (lVar8 == 0) {
    lVar8 = thunk_FUN_03f9944c(DAT_0917d9c0);
    FUN_05a1bf6c(lVar8,1,DAT_091b45a0);
    thunk_FUN_03f6a5cc();
    *plVar9 = lVar8;
    thunk_FUN_03f5d7b8(plVar9,lVar8);
  }
  if (param_2 == (long *)0x0) {
LAB_07637abc:
    plVar9 = (long *)thunk_FUN_03f99350(param_2,DAT_0917a4c0);
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917a4c0) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07637b38;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a4c0,0);
LAB_07637b38:
      plVar9 = (long *)(*(code *)*puVar1)(plVar9,puVar1[1]);
      do {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185b10) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_07637bbc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_07637bbc:
        uVar6 = (*(code *)*puVar1)(plVar9,puVar1[1]);
        if ((uVar6 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_07637cec;
          lVar5 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 == 0) goto LAB_07637c98;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_07637c80;
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917ab70) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_07637c20;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917ab70,0);
LAB_07637c20:
        uVar2 = (*(code *)*puVar1)(plVar9,puVar1[1]);
        uVar2 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(uVar2,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar2,uVar2);
        }
        FUN_05a1c67c(lVar8,uVar2,DAT_091b45c0);
      } while( true );
    }
    lVar5 = thunk_FUN_03f99350(param_2,DAT_0917a4c8);
    if (lVar5 == 0) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar2 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_091f80f0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_0921b2b8);
      System_ArgumentException___ctor(uVar2,uVar3,uVar4,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091daf30);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,uVar3);
    }
    if (lVar8 == 0) {
LAB_07637d68:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_05a1c758(lVar8,lVar5,DAT_091b45c8);
  }
  else {
    lVar5 = *param_2;
    if ((*(byte *)(lVar5 + 0x130) < *(byte *)(DAT_091842a0 + 0x130)) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_091842a0 + 0x130) * 8 + -8) !=
        DAT_091842a0)) {
      if (lVar5 != DAT_091842b8) goto LAB_07637abc;
    }
    else {
      param_2 = (long *)System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(param_2,0);
    }
    if (lVar8 == 0) goto LAB_07637d68;
    FUN_05a1c67c(lVar8,param_2,DAT_091b45c0);
  }
LAB_07637d30:
  if (0 < *(int *)(lVar8 + 0x18)) {
    System_Threading_Tasks_TaskExceptionHolder__MarkAsUnhandled(param_1);
  }
  return;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_07637c80:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_07637ce0;
    }
  }
LAB_07637c98:
  puVar1 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185a58,0);
LAB_07637ce0:
  (*(code *)*puVar1)(plVar9,puVar1[1]);
LAB_07637cec:
  if (lVar8 == 0) goto LAB_07637d68;
  goto LAB_07637d30;
}

