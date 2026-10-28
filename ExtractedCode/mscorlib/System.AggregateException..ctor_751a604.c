// rea decompile_all
// name: System.AggregateException$$.ctor
// address: 0x751a604
// body: available
// range: 0x751a604-0x751aa63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x751a9b4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x751a9b8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x751a9fc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x751aa08 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x751aa0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_AggregateException___ctor(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  undefined8 uVar11;
  
  if ((DAT_09521741 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fed8);
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_0917a048);
    FUN_03f5c2a4(&DAT_0917b058);
    FUN_03f5c2a4(&DAT_091b9508);
    FUN_03f5c2a4(&DAT_0917e4f8);
    DAT_09521741 = 1;
  }
  if (param_3 == (long *)0x0) {
    if (*(int *)(DAT_091842a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Exception___ctor(param_1,param_2,0,0);
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar11 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0921d558);
    System_ArgumentNullException___ctor(uVar11,uVar6);
LAB_0751a9e8:
    uVar6 = thunk_FUN_03fc39d4(&DAT_091bf888);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar11,uVar6);
  }
  lVar7 = *param_3;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_0917a048) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0751a6f0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917a048,0);
LAB_0751a6f0:
  iVar1 = (*(code *)*puVar3)(param_3,puVar3[1]);
  if (iVar1 < 1) {
    uVar11 = 0;
  }
  else {
    lVar7 = *param_3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917b058) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0751a768;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917b058,0);
LAB_0751a768:
    lVar7 = (*(code *)*puVar3)(param_3,0,puVar3[1]);
    if (lVar7 == 0) {
      uVar11 = 0;
    }
    else {
      lVar7 = *param_3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917b058) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0751a7e4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917b058,0);
LAB_0751a7e4:
      lVar7 = (*(code *)*puVar3)(param_3,0,puVar3[1]);
      if (lVar7 == 0) goto LAB_0751aa0c;
      uVar11 = *(undefined8 *)(lVar7 + 0x10);
    }
  }
  if (*(int *)(DAT_091842a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Exception___ctor(param_1,param_2,uVar11,0);
  lVar7 = *param_3;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_0917a048) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0751a874;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917a048,0);
LAB_0751a874:
  uVar2 = (*(code *)*puVar3)(param_3,puVar3[1]);
  plVar4 = (long *)FUN_03f5c394(DAT_0917fed8,uVar2);
  if (plVar4 != (long *)0x0) {
    if (0 < (int)plVar4[3]) {
      uVar10 = 0;
      do {
        lVar7 = *param_3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917b058) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0751a8f8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917b058,0);
LAB_0751a8f8:
        lVar7 = (*(code *)*puVar3)(param_3,uVar10,puVar3[1]);
        if (lVar7 != 0) {
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((lVar7 != 0) &&
             (lVar5 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
            uVar11 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar11,0);
          }
          if (*(uint *)(plVar4 + 3) <= uVar10) goto LAB_0751a9b8;
          plVar4[(long)(int)uVar10 + 4] = lVar7;
          thunk_FUN_03f5d7b8(plVar4 + (long)(int)uVar10 + 4,lVar7);
        }
        if ((uint)plVar4[3] <= uVar10) {
LAB_0751a9b8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (plVar4[(long)(int)uVar10 + 4] == 0) {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar11 = thunk_FUN_03f9944c();
          uVar6 = thunk_FUN_03fc39d4(&DAT_091fb908);
          System_ArgumentException___ctor(uVar11,uVar6);
          goto LAB_0751a9e8;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)(uint)plVar4[3]);
    }
    uVar11 = thunk_FUN_03f9944c(DAT_0917e4f8);
    FUN_05f07778(uVar11,plVar4,DAT_091b9508);
    *(undefined8 *)(param_1 + 0x90) = uVar11;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x90),uVar11);
    return;
  }
LAB_0751aa0c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

