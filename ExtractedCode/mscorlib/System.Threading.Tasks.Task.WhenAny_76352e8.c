// rea decompile_all
// name: System.Threading.Tasks.Task$$WhenAny
// address: 0x76352e8
// body: available
// range: 0x76352e8-0x76356b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76355b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76355b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76355bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7635618 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7635654 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7635658 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76356b4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07635650) */
/* WARNING: Removing unreachable block (ram,0x07635584) */

void System_Threading_Tasks_Task__WhenAny(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_0952220e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a788);
    FUN_03f5c2a4(&DAT_0917ae78);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b45b0);
    FUN_03f5c2a4(&DAT_0917d9d0);
    FUN_03f5c2a4(&DAT_091b4620);
    FUN_03f5c2a4(&DAT_091b4630);
    DAT_0952220e = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar1 = thunk_FUN_03f9944c(DAT_0917d9d0);
    FUN_05a1bf0c(lVar1,DAT_091b45b0);
    lVar7 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917a788) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076353f4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917a788,0);
LAB_076353f4:
    plVar3 = (long *)(*(code *)*puVar2)(param_1,puVar2[1]);
    do {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185b10) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07635480;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_07635480:
      uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar3 == (long *)0x0) goto LAB_07635578;
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_07635550;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_07635538;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917ae78) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_076354e4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917ae78,0);
LAB_076354e4:
      lVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      if (lVar7 == 0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar4 = thunk_FUN_03f9944c();
        uVar5 = thunk_FUN_03fc39d4(&DAT_092100c0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_09223c38);
        System_ArgumentException___ctor(uVar4,uVar5,uVar6,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091daf08);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,uVar5);
      }
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_05a1c67c(lVar1,lVar7,DAT_091b4620);
    } while( true );
  }
  thunk_FUN_03fc39d4(&DAT_09181550);
  uVar4 = thunk_FUN_03f9944c();
  uVar5 = thunk_FUN_03fc39d4(&DAT_09223c38);
  System_ArgumentNullException___ctor(uVar4,uVar5,0);
  goto LAB_076356a0;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_07635538:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0763556c;
    }
  }
LAB_07635550:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_0763556c:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
LAB_07635578:
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    System_Threading_Tasks_TaskFactory__CommonCWAnyLogic(lVar1);
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar4 = thunk_FUN_03f9944c();
  uVar5 = thunk_FUN_03fc39d4(&DAT_092100b8);
  uVar6 = thunk_FUN_03fc39d4(&DAT_09223c38);
  System_ArgumentException___ctor(uVar4,uVar5,uVar6,0);
LAB_076356a0:
  uVar5 = thunk_FUN_03fc39d4(&DAT_091daf08);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

