// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer$$RemoveItemAt
// address: 0x76dab8c
// body: available
// range: 0x76dab8c-0x76db01b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76daf8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76db018 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JContainer__RemoveItemAt(long *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_095227ad & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a0c0);
    FUN_03f5c2a4(&DAT_0917b0b0);
    FUN_03f5c2a4(&DAT_09187940);
    FUN_03f5c2a4(&DAT_09188938);
    DAT_095227ad = 1;
  }
  plVar2 = (long *)(**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
  if (param_2 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921d350);
    puVar6 = &DAT_09204958;
LAB_076dafec:
    uVar7 = thunk_FUN_03fc39d4(puVar6);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar7,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091d1258);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  if (plVar2 != (long *)0x0) {
    lVar8 = *plVar2;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917a0c0) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076dac5c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a0c0,0);
LAB_076dac5c:
    iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (iVar1 <= param_2) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_0921d350);
      puVar6 = &DAT_09204950;
      goto LAB_076dafec;
    }
    Newtonsoft_Json_Linq_JContainer__CheckReentrancy(param_1);
    lVar8 = *plVar2;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917b0b0) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076daccc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b0b0,0);
LAB_076daccc:
    lVar8 = (*(code *)*puVar3)(plVar2,param_2,puVar3[1]);
    if (param_2 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar2;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917b0b0) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_076dad3c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b0b0,0);
LAB_076dad3c:
      lVar9 = (*(code *)*puVar3)(plVar2,param_2 + -1,puVar3[1]);
    }
    lVar10 = *plVar2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917a0c0) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076dad9c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a0c0,0);
LAB_076dad9c:
    iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (iVar1 + -1 == param_2) {
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917b0b0) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_076dae0c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b0b0,0);
LAB_076dae0c:
      lVar10 = (*(code *)*puVar3)(plVar2,param_2 + 1,puVar3[1]);
    }
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x20) = lVar10;
      thunk_FUN_03f5d7b8((long *)(lVar9 + 0x20),lVar10);
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x18) = lVar9;
      thunk_FUN_03f5d7b8((long *)(lVar10 + 0x18),lVar9);
    }
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x10),0);
      *(undefined8 *)(lVar8 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x18),0);
      *(undefined8 *)(lVar8 + 0x20) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x20),0);
      lVar9 = *plVar2;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917b0b0) {
            puVar3 = (undefined8 *)(lVar9 + (long)(*piVar12 + 4) * 0x10 + 0x138);
            goto LAB_076daecc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b0b0,4);
LAB_076daecc:
      (*(code *)*puVar3)(plVar2,param_2,puVar3[1]);
      if (param_1[6] != 0) {
        uVar4 = thunk_FUN_03f9944c(DAT_09187940);
        System_ComponentModel_ListChangedEventArgs___ctor(uVar4,2,param_2,0);
        (**(code **)(*param_1 + 0x618))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x620));
      }
      if (param_1[8] != 0) {
        uVar4 = thunk_FUN_03f9944c(DAT_09188938);
        System_Collections_Specialized_NotifyCollectionChangedEventArgs___ctor
                  (uVar4,1,lVar8,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x076daf74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x628))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x630));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

