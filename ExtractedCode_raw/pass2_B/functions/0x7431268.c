// rea decompile_all
// name: System.String$$Join
// address: 0x7431268
// body: available
// range: 0x7431268-0x74316a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743163c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7431640 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7431688 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743168c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7431694 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7431698 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743169c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74316a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07431690) */

long System_String__Join(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_0952101c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_0952101c = 1;
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_092253e0);
    System_ArgumentNullException___ctor(uVar3,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091da308);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  lVar5 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_0917a768) {
        puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_07431320;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a768,0);
LAB_07431320:
  plVar2 = (long *)(*(code *)*puVar1)(param_2,puVar1[1]);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_09185b10) {
        puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_07431394;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_07431394:
  uVar7 = (*(code *)*puVar1)(plVar2,puVar1[1]);
  if ((uVar7 & 1) != 0) {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917ae48) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07431400;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917ae48,0);
LAB_07431400:
    lVar5 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185b10) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07431464;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_07431464:
    uVar7 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if ((uVar7 & 1) != 0) {
      lVar6 = System_Text_StringBuilderCache__Acquire(0x10,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Text_StringBuilder__Append(lVar6,lVar5,0);
      do {
        System_Text_StringBuilder__Append(lVar6,param_1,0);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917ae48) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_074314fc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917ae48,0);
LAB_074314fc:
        uVar3 = (*(code *)*puVar1)(plVar2,puVar1[1]);
        System_Text_StringBuilder__Append(lVar6,uVar3,0);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185b10) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0743156c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_0743156c:
        uVar7 = (*(code *)*puVar1)(plVar2,puVar1[1]);
      } while ((uVar7 & 1) != 0);
      lVar5 = System_Text_StringBuilderCache__GetStringAndRelease(lVar6,0);
      goto LAB_074315b4;
    }
    if (lVar5 != 0) goto LAB_074315b4;
  }
  lVar5 = **(long **)(DAT_09535468 + 0xb8);
LAB_074315b4:
  if (plVar2 != (long *)0x0) {
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185a58) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07431614;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_07431614:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
  }
  return lVar5;
}

